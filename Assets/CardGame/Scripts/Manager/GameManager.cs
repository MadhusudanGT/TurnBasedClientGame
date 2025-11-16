using UnityEngine;

public class GameManager : Singleton<GameManager>
{
    public string endPointUrl = string.Empty;
    public bool isDebug = false;
    public string fileName = string.Empty;

    public string currentPlayerNumber = string.Empty;

    public string CurrentPlayerNumber
    {
        get => currentPlayerNumber;
        set => currentPlayerNumber = value == null ? string.Empty : value;
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

    [ContextMenu("Clear Local Storage")]
    public void ClearLocalStorage()
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