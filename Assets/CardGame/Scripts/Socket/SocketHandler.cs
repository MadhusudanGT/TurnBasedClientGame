using BestHTTP.SocketIO;
using System;
using System.Collections.Generic;
using UnityEngine;
using BestHTTP.JSON;

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
        Socket.On("welcome", OnMessageReceived);

        socketManager.Open();
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

    private void OnMessageReceived(Socket socket, Packet packet, object[] args)
    {
        var data = args[0] as IDictionary<string, object>;

        string typeStr = data["type"].ToString();

        EMIT_EVENT_TYPE type = (EMIT_EVENT_TYPE)Enum.Parse(typeof(EMIT_EVENT_TYPE), typeStr);

        string rawPayload = Json.Encode(data["payload"]);

        Debug.Log("Received Type: " + type);
        Debug.Log("Payload JSON: " + rawPayload);

        RouteMessage(type, rawPayload);
    }

    private void RouteMessage(EMIT_EVENT_TYPE type, string json)
    {
        switch (type)
        {
            case EMIT_EVENT_TYPE.WelcomeMessage:
                WelcomToGame player = JsonUtility.FromJson<WelcomToGame>(json);
                MyDebug.Log(player.msg);
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

    private void OnApplicationPause(bool paused)
    {
        if (paused)
        {
            Debug.Log("App Paused → Disconnecting socket...");
            DisconnectSocket();
        }
        else
        {
            Debug.Log("App Resumed → Reconnecting socket...");
            ConnectToServer();
        }
    }

    private void OnApplicationFocus(bool hasFocus)
    {
        if (!hasFocus)
        {
            Debug.Log("App Lost Focus → Disconnect socket to save resources");
            DisconnectSocket();
        }
        else
        {
            Debug.Log("App Focused → Reconnecting...");
            ConnectToServer();
        }
    }

    public void DisconnectSocket()
    {
        if (socketManager != null)
        {
            Debug.Log("🔌 Disconnecting Socket.IO...");
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
    WelcomeMessage
}
[System.Serializable]
public struct WelcomToGame
{
    public string msg;
}