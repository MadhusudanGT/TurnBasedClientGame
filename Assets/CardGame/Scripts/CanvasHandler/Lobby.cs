using NUnit.Framework;
using System;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEditor.Timeline.Actions;
using UnityEngine;
using UnityEngine.UI;
using static UnityEditor.Progress;

public class Lobby : MonoBehaviour
{
    [SerializeField] Button joinPoolBtn;
    [SerializeField] PlayerIcon avatarPrefab;
    [SerializeField] Transform parent;
    [SerializeField] TMP_Text lobbyMsg;
    [SerializeField] List<string> lobbyPlayer;
    [SerializeField] CanvasGroup matchMakingCanvasGroup;

    private void OnEnable()
    {
        joinPoolBtn.onClick.AddListener(JoinThePool);
        EventBus.Subscribe<PoolJoinedRoomData>(GameEvents.POOL_JOINED, CreateLobbyUserData);
        EventBus.Subscribe<string>(GameEvents.RESET_GAME, ResetTheGame);
    }
    private void OnDisable()
    {
        joinPoolBtn.onClick.RemoveListener(JoinThePool);
        EventBus.Unsubscribe<PoolJoinedRoomData>(GameEvents.POOL_JOINED, CreateLobbyUserData);
        EventBus.Unsubscribe<string>(GameEvents.RESET_GAME, ResetTheGame);
    }

    void ResetTheGame(string msg)
    {
        lobbyPlayer.Clear();
        TooglMakeMatchMakingVisiable(false);
    }
    private void Start()
    {
        TooglMakeMatchMakingVisiable(false);
    }
    void JoinThePool()
    {
        if (!SocketHandler.Instance.Socket.IsOpen)
        {
            return;
        }
        string savedPhone = LocalStorageManager.Load();

        if (savedPhone != null)
        {
            SocketHandler.Instance.Emit("join_pool", savedPhone.ToString());
            GameManager.Instance.CurrentPlayerNumber = savedPhone;
        }
        else
        {
            MyDebug.LogError("Phone Number Not Exist!!");
        }
    }

    public void CreateLobbyUserData(PoolJoinedRoomData poolJoinedRoomData)
    {
        TooglMakeMatchMakingVisiable(true);
        lobbyMsg.SetText(poolJoinedRoomData.message);

        for (int i = 0; i < poolJoinedRoomData.players.Length; i++)
        {
            if (!lobbyPlayer.Contains(poolJoinedRoomData.players[i].username))
            {
                lobbyPlayer.Add(poolJoinedRoomData.players[i].username);
                SpawnThePlayerLobbyIcon(poolJoinedRoomData.players[i].username);
            }
        }

        if (lobbyPlayer.Count >= 2)
        {
            lobbyMsg.SetText("Loading the game!!");
            Invoke(nameof(EnableGameScreen), 2f);
        }
    }

    void SpawnThePlayerLobbyIcon(string userName)
    {
        PlayerIcon prefab = Instantiate(avatarPrefab);
        prefab.transform.SetParent(parent);
        prefab.transform.localPosition = Vector3.zero;
        prefab.transform.localRotation = Quaternion.identity;
        prefab.transform.localScale = Vector3.one;
        prefab.InitPlayerData(userName);
    }

    void TooglMakeMatchMakingVisiable(bool isVisiable)
    {
        matchMakingCanvasGroup.alpha = isVisiable ? 1 : 0;
        matchMakingCanvasGroup.interactable = isVisiable;
        matchMakingCanvasGroup.blocksRaycasts = isVisiable;
    }

    void EnableGameScreen()
    {
        ManageCanvas.Instance.ToggleVisiablityOfCanvasGroup(CanvasType.Game);
    }
}
