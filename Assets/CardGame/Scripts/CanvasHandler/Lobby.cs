using System;
using UnityEngine;
using UnityEngine.UI;

public class Lobby : MonoBehaviour
{
    [SerializeField] Button joinPoolBtn;

    private void OnEnable()
    {
        joinPoolBtn.onClick.AddListener(JoinThePool);
    }
    private void OnDisable()
    {
        joinPoolBtn.onClick.RemoveListener(JoinThePool);
    }

    void JoinThePool()
    {
        string savedPhone = LocalStorageManager.Load();

        if (savedPhone != null)
        {
            SocketHandler.Instance.Emit("join_pool", savedPhone.ToString());

            ManageCanvas.Instance.ToggleVisiablityOfCanvasGroup(CanvasType.Game);
        }
        else
        {
            MyDebug.LogError("Phone Number Not Exist!!");
        }
    }
}
