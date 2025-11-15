using BestHTTP.SocketIO;
using System;
using UnityEngine;

public class SocketHandler : Singleton<SocketHandler>
{
    private SocketManager socketManager;
    public Socket Socket => socketManager.Socket;

    private string serverUrl = string.Empty;

    void Start()
    {
        serverUrl = GameManager.Instance.webSocketUrl;
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
        socketManager.Socket.On(SocketIOEventTypes.Connect, OnConnected);
        socketManager.Socket.On(SocketIOEventTypes.Disconnect, OnDisconnected);
        socketManager.Socket.On(SocketIOEventTypes.Error, OnErrorReceived);

        // Custom events
        socketManager.Socket.On("welcome", OnMessageReceived);

        socketManager.Open();
    }

    // ------------------------- EVENTS ----------------------------

    private void OnConnected(Socket socket, Packet packet, object[] args)
    {
        MyDebug.Log("✅ Connected to server!");

        // (Optional) Emit a join event once connected
        Emit("join", "UnityPlayer");
    }

    private void OnDisconnected(Socket socket, Packet packet, object[] args)
    {
        MyDebug.Log("❌ Disconnected from server");
    }

    private void OnErrorReceived(Socket socket, Packet packet, object[] args)
    {
        MyDebug.LogError("⚠ Socket Error: " + args[0]);
    }

    private void OnMessageReceived(Socket socket, Packet packet, object[] args)
    {
        MyDebug.Log("📩 Message from server: " + args[0]);
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
}

[System.Serializable]
public class Message
{
    public string type;
    public string data;

    public GAME_WS_STATE GetMessageType()
    {
        if (Enum.TryParse(type, true, out GAME_WS_STATE messageType))
        {
            return messageType;
        }
        else
        {
            Debug.LogError($"Unknown message type: {type}");
            return GAME_WS_STATE.NONE;
        }
    }
}



public enum GAME_WS_STATE
{
    NONE,
}