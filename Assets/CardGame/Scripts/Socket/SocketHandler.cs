using BestHTTP.JSON;
using BestHTTP.SocketIO;
using SimpleJSON;
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SocialPlatforms.Impl;

public class SocketHandler : Singleton<SocketHandler>
{
    private SocketManager socketManager;
    public Socket Socket => socketManager.Socket;

    private string serverUrl = string.Empty;

    void Start()
    {
        serverUrl = GameManager.Instance.endPointUrl;
        ConnectToServer();
    }

    public void ConnectToServer()
    {
        Debug.Log("Connecting to server: " + serverUrl);

        Uri uri = new Uri(serverUrl + "/socket.io/");

        SocketOptions options = new()
        {
            AutoConnect = true,
            Reconnection = true
        };

        socketManager = new SocketManager(uri, options);

        // ----- SOCKET EVENTS -----
        Socket.On(SocketIOEventTypes.Connect, OnConnected);
        Socket.On(SocketIOEventTypes.Disconnect, OnDisconnected);
        Socket.On(SocketIOEventTypes.Error, OnErrorReceived);

        // Custom events
        Socket.On("MessageToClient", OnMessageReceived);
        Socket.On("room_updated", OnMessageReceived);
        Socket.On("turn_timer_tick", TurnTimerTick);
        Socket.On("initial_deck", InitDeck);
        Socket.On("error", ErrorMsg);
        Socket.On("game_state_updated", GetRoomStatus);
        Socket.On("game_ended", GameEnded);
        Socket.On("ability_triggered", AbilityTriggered);
        Socket.On("cardsPlayed", CardPlayed);
        Socket.On("turn_resolved", TurnResloved);
        socketManager.Open();
    }

    private void TurnResloved(Socket socket, Packet packet, object[] args)
    {
        var dict = args[0] as IDictionary<string, object>;
        string json = Json.Encode(dict);

        TurnScoreData turnResloved = JsonUtility.FromJson<TurnScoreData>(json);
        for (int i = 0; i < turnResloved.scores.Length; i++)
        {
            if (turnResloved.scores[i].playerId == GameManager.Instance?.CurrentPlayerNumber)
            {
                EventBus.Invoke<PlayerScore>(GameEvents.UPDATE_SCORE, turnResloved.scores[i]);
                return;
            }
        }
    }

    private void CardPlayed(Socket socket, Packet packet, object[] args)
    {
        var dict = args[0] as IDictionary<string, object>;
        string json = Json.Encode(dict);
        //Debug.Log("Card Played Triggered..." + json);
    }

    private void AbilityTriggered(Socket socket, Packet packet, object[] args)
    {
        var dict = args[0] as IDictionary<string, object>;
        string json = Json.Encode(dict);
        //Debug.Log("Ability Triggered..." + json);
    }

    private void GameEnded(Socket socket, Packet packet, object[] args)
    {
        ManageCanvas.Instance?.ToggleVisiablityOfCanvasGroup(CanvasType.GameOver);
        var dict = args[0] as IDictionary<string, object>;
        string json = Json.Encode(dict);
        GameEndedData gameEnded = JsonUtility.FromJson<GameEndedData>(json);
        EventBus.Invoke<GameEndedData>(GameEvents.GAME_END, gameEnded);
    }

    // ------------------------- EVENTS ----------------------------

    private void OnConnected(Socket socket, Packet packet, object[] args)
    {
        MyDebug.Log("✅ Connected to server!");
    }

    private void OnDisconnected(Socket socket, Packet packet, object[] args)
    {
        MyDebug.Log("❌ Disconnected from server");
    }

    private void OnErrorReceived(Socket socket, Packet packet, object[] args)
    {
        MyDebug.LogError("⚠ Socket Error: " + args[0]);
    }

    public void ErrorMsg(Socket socket, Packet packet, object[] args)
    {
        var dict = args[0] as IDictionary<string, object>;
        string json = Json.Encode(dict);
        //Debug.Log("Error Msg.." + json);
    }
    private void GetRoomStatus(Socket socket, Packet packet, object[] args)
    {
        var dict = args[0] as IDictionary<string, object>;
        string json = Json.Encode(dict);
        Root root = JsonUtility.FromJson<Root>(json);
        Player[] players = root.gameState.players;
        for (int i = 0; i < players.Length; i++)
        {
            if (players[i].id == GameManager.Instance?.CurrentPlayerNumber)
            {
                EventBus.Invoke<CardData[]>(GameEvents.UPDATED_HAND_CARDS_DATA, players[i].hand);
                for (int j = 0; j < players[i].selectedCards.Length; j++)
                {
                    EventBus.Invoke<string>(GameEvents.SELECTED_CARD, players[i].selectedCards[j].instanceId);
                }

                GameStatus status = new GameStatus();
                status.turnLeft = root.gameState.currentTurn;
                status.wallet = players[i].energy;
                status.points = players[i].score;

                EventBus.Invoke<GameStatus>(GameEvents.PLAYER_STATUS, status);
                return;
            }
        }
    }

    private void InitDeck(Socket socket, Packet packet, object[] args)
    {
        var dict = args[0] as IDictionary<string, object>;
        string json = Json.Encode(dict);
        DeckData cardData = JsonUtility.FromJson<DeckData>(json);
        if (cardData.playerId == GameManager.Instance?.CurrentPlayerNumber)
        {
            EventBus.Invoke<DeckData>(GameEvents.DECK_CARDS_DATA, cardData);
            GameStatus info = new GameStatus();
            info.turnLeft = cardData.gameConfig.maxTurns;
            info.wallet = 0;
            info.points = 0;
            EventBus.Invoke<GameStatus>(GameEvents.PLAYER_STATUS, info);
            if (GameManager.Instance != null)
            {
                GameManager.Instance.MaxTurns = cardData.gameConfig.maxTurns;
            }
        }
    }
    private void TurnTimerTick(Socket socket, Packet packet, object[] args)
    {
        var dict = args[0] as IDictionary<string, object>;
        string json = Json.Encode(dict);
        TurnInfoData turnInfoData = JsonUtility.FromJson<TurnInfoData>(json);
        EventBus.Invoke<TurnInfoData>(GameEvents.TICK_TIMER_DATA, turnInfoData);
    }
    private void OnMessageReceived(Socket socket, Packet packet, object[] args)
    {
        var data = args[0] as IDictionary<string, object>;

        string typeStr = data["type"].ToString();

        EMIT_EVENT_TYPE type = (EMIT_EVENT_TYPE)Enum.Parse(typeof(EMIT_EVENT_TYPE), typeStr);

        string rawPayload = Json.Encode(data["payload"]);
        RouteMessage(type, rawPayload);
    }

    private void RouteMessage(EMIT_EVENT_TYPE type, string json)
    {
        switch (type)
        {
            case EMIT_EVENT_TYPE.WelcomeMessage:
                WelcomToGame player = JsonUtility.FromJson<WelcomToGame>(json);
                break;
            case EMIT_EVENT_TYPE.room_updated:
                PoolJoinedRoomData joinRoomData = JsonUtility.FromJson<PoolJoinedRoomData>(json);
                EventBus.Invoke<PoolJoinedRoomData>(GameEvents.POOL_JOINED, joinRoomData);
                break;
        }
    }


    // ----------------------- PUBLIC API --------------------------

    public void Emit(string eventName, object data)
    {
        MyDebug.Log($"➡ Sending Event: {eventName} | Data: {data}");
        socketManager.Socket.Emit(eventName, data);
    }

    public void EmitRaw(string eventName, params object[] args)
    {
        socketManager.Socket.Emit(eventName, args);
    }

    private void OnApplicationQuit()
    {
        DisconnectSocket();
    }

    //private void OnApplicationPause(bool paused)
    //{
    //    if (paused)
    //    {
    //        //Debug.Log("App Paused → Disconnecting socket...");
    //        DisconnectSocket();
    //    }
    //    else
    //    {
    //        //Debug.Log("App Resumed → Reconnecting socket...");
    //        ConnectToServer();
    //    }
    //}

    //private void OnApplicationFocus(bool hasFocus)
    //{
    //    if (!hasFocus)
    //    {
    //        //Debug.Log("App Lost Focus → Disconnect socket to save resources");
    //        DisconnectSocket();
    //    }
    //    else
    //    {
    //        //Debug.Log("App Focused → Reconnecting...");
    //        ConnectToServer();
    //    }
    //}

    public void DisconnectSocket()
    {
        if (socketManager != null)
        {
            //Debug.Log("🔌 Disconnecting Socket.IO...");
            socketManager.Close();  // Proper cleanup
            socketManager = null;
        }
    }
}

[Serializable]
public struct EventEnvelope
{
    public EMIT_EVENT_TYPE type;
    public string payload;
}
public enum EMIT_EVENT_TYPE
{
    NONE,
    WelcomeMessage,
    room_updated,
    turn_timer_tick
}
[System.Serializable]
public struct WelcomToGame
{
    public string msg;
}

[System.Serializable]
public class PoolJoinedRoomData
{
    public string roomId;
    public PlayerData[] players;
    public int playerCount;
    public string message;
    public string user;
}

[System.Serializable]
public class PlayerData
{
    public string id;
    public string username;
    public long joinedAt;
}

[System.Serializable]
public class TurnInfoData
{
    public int turn;
    public string currentPlayer;
    public int secondsRemaining;
    public int totalTurns;
}
