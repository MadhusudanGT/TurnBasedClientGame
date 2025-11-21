using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class RegisterUI : MonoBehaviour
{
    public TMP_InputField phoneInput;
    public TMP_InputField usernameInput;
    public Button submitButton;

    private void OnEnable()
    {
        submitButton.onClick.AddListener(OnSubmit);
    }

    private void OnDisable()
    {
        submitButton.onClick.RemoveListener(OnSubmit);
    }
    private void OnSubmit()
    {
        string phone = phoneInput.text.Trim();
        string username = usernameInput.text.Trim();

        if (string.IsNullOrEmpty(phone) || string.IsNullOrEmpty(username))
        {
            Debug.LogWarning("Phone or Username is empty");
            return;
        }

        RegisterAPI.Instance.RegisterUser(phone, username, OnRegisterSuccess);
    }

    private void OnRegisterSuccess(string phone)
    {
        ManageCanvas.Instance.ToggleVisiablityOfCanvasGroup(CanvasType.Lobby);
        Debug.Log("Register Success! Moving to Lobby...");
        LocalStorageManager.Save(phone);
        GameManager.Instance.CurrentPlayerNumber = phone;
    }
}
