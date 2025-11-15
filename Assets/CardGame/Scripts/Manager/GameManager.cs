using UnityEngine;

public class GameManager : Singleton<GameManager>
{
    public string webSocketUrl = string.Empty;
    public bool isDebug = false;
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