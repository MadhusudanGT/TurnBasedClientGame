using UnityEngine;

public class GameManager : Singleton<GameManager>
{
    public string endPointUrl = string.Empty;
    public bool isDebug = false;
    public string fileName = string.Empty;

    private string currentPlayerNumber = string.Empty;

    public string CurrentPlayerNumber
    {
        get => currentPlayerNumber;
        set => currentPlayerNumber = value == null ? string.Empty : value;
    }

    private string currentPlayerRoomID = string.Empty;

    public string CurrentPlayerRoomID
    {
        get => currentPlayerRoomID;
        set => currentPlayerRoomID = value == null ? string.Empty : value;
    }

    private int maxTurns = 0;

    public int MaxTurns
    {
        get => maxTurns;
        set => maxTurns = value == 0 ? 0 : value;
    }
    private void OnEnable()
    {
        EventBus.Subscribe<string>(GameEvents.RESET_GAME, ResetData);
    }
    private void OnDisable()
    {
        UnSubscribeFromEvents();
    }
    private void OnDestroy()
    {
        UnSubscribeFromEvents();
    }
    void UnSubscribeFromEvents()
    {
        EventBus.Unsubscribe<string>(GameEvents.RESET_GAME, ResetData);
    }
    void ResetData(string msg)
    {
        CurrentPlayerRoomID = string.Empty;
        CurrentPlayerRoomID = string.Empty;
    }
    private void Start()
    {
        string savedPhone = LocalStorageManager.Load();
        if (savedPhone != null)
        {
            CurrentPlayerNumber = savedPhone;
            ManageCanvas.Instance.ToggleVisiablityOfCanvasGroup(CanvasType.Lobby);
        }
        else
        {
            ManageCanvas.Instance.ToggleVisiablityOfCanvasGroup(CanvasType.Register);
        }
    }
    [ContextMenu("Clear Local Data")]
    public void ClearLocalData()
    {
        LocalStorageManager.Delete();
    }
}

public class MyDebug
{
    public static void Log(string log)
    {
        if (GameManager.Instance.isDebug)
        {
            Debug.Log(Time.realtimeSinceStartup + ":" + log);
        }
    }
    public static void LogRed(string log)
    {
        if (GameManager.Instance.isDebug)
        {
            Debug.Log("<color=red>" + Time.realtimeSinceStartup + ":" + log + "</color>");
        }
    }
    public static void LogGreen(string log)
    {
        if (GameManager.Instance.isDebug)
        {
            Debug.Log(log);
        }
    }
    public static void LogYellow(string log)
    {
        if (GameManager.Instance.isDebug)
        {
            Debug.Log("<color=yellow>" + Time.realtimeSinceStartup + ":" + log + "</color>");
        }
    }
    public static void LogBlue(string log)
    {
        if (GameManager.Instance.isDebug)
        {
            Debug.Log("<color=blue>" + Time.realtimeSinceStartup + ":" + log + "</color>");
        }
    }
    public static void LogPurple(string log)
    {
        if (GameManager.Instance.isDebug)
        {
            Debug.Log("<color=purple>" + Time.realtimeSinceStartup + ":" + log + "</color>");
        }
    }
    public static void LogError(string error)
    {
        if (GameManager.Instance.isDebug)
        {
            Debug.LogError(Time.realtimeSinceStartup + ":" + error);
        }
    }

}