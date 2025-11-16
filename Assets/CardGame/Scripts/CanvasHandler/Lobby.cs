using NUnit.Framework;
using System;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEditor.Timeline.Actions;
using UnityEngine;
using UnityEngine.UI;

public class Lobby : MonoBehaviour
{
    [SerializeField] Button joinPoolBtn;
    [SerializeField] Transform avatarPrefab, parent;
    [SerializeField] TMP_Text lobbyMsg;
    [SerializeField] List<string> lobbyPlayer;

    private void OnEnable()
    {
        joinPoolBtn.onClick.AddListener(JoinThePool);
        EventBus.Subscribe<PoolJoinedRoomData>(GameEvents.POOL_JOINED, CreateLobbyUserData);
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
            GameManager.Instance.CurrentPlayerNumber = savedPhone;
            ManageCanvas.Instance.ToggleVisiablityOfCanvasGroup(CanvasType.Game);
        }
        else
        {
            MyDebug.LogError("Phone Number Not Exist!!");
        }
    }

    public void CreateLobbyUserData(PoolJoinedRoomData poolJoinedRoomData)
    {
        lobbyMsg.SetText(poolJoinedRoomData.message);

        for (int i = 0; i < poolJoinedRoomData.players.Length; i++)
        {
            if (!lobbyPlayer.Contains(poolJoinedRoomData.players[i].username))
            {
                lobbyPlayer.Add(poolJoinedRoomData.players[i].username);
                SpawnThePlayerLobbyIcon(poolJoinedRoomData.players[i].username);
            }
        }
    }

    void SpawnThePlayerLobbyIcon(string userName)
    {
        Transform prefab = Instantiate(avatarPrefab);
        prefab.SetParent(parent);
        prefab.localPosition = Vector3.zero;
        prefab.localRotation = Quaternion.identity;
        prefab.localScale = Vector3.one;
        prefab.GetComponent<PlayerIcon>().InitPlayerData(userName);
    }
}
