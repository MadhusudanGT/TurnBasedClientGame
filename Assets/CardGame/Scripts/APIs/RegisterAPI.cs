using System;
using System.Collections;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;

public class RegisterAPI : Singleton<RegisterAPI>
{
    private string registerUrl = string.Empty;

    private void Start()
    {
        registerUrl = string.Concat(GameManager.Instance.endPointUrl, "/api/auth/register");
    }

    public void RegisterUser(string phoneNumber, string username, Action<string> onSuccess)
    {
        StartCoroutine(RegisterRoutine(phoneNumber, username, onSuccess));
    }

    IEnumerator RegisterRoutine(string phoneNumber, string username, Action<string> onSuccess)
    {
        RegisterPayload payload = new RegisterPayload
        {
            phoneNumber = phoneNumber,
            username = username
        };

        string jsonData = JsonUtility.ToJson(payload);
        byte[] bodyRaw = Encoding.UTF8.GetBytes(jsonData);

        UnityWebRequest request = new UnityWebRequest(registerUrl, "POST");
        request.uploadHandler = new UploadHandlerRaw(bodyRaw);
        request.downloadHandler = new DownloadHandlerBuffer();
        request.SetRequestHeader("Content-Type", "application/json");

        yield return request.SendWebRequest();

        if (request.result == UnityWebRequest.Result.Success)
        {
            Debug.Log("Register API Success: " + request.downloadHandler.text);

            onSuccess?.Invoke(phoneNumber); // return phone number for saving
        }
        else
        {
            Debug.LogError("Register Failed: " + request.error);
        }
    }
}

[Serializable]
public class RegisterPayload
{
    public string phoneNumber;
    public string username;
}
