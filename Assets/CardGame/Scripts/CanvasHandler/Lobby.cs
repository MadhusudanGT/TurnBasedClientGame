using Assets.CardGame.Scripts.Utils;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;


public class Lobby : MonoBehaviour
{
    [SerializeField] Button joinPoolBtn;
    [SerializeField] Transform parent;
    [SerializeField] TMP_Text lobbyMsg;
    [SerializeField] CanvasGroup matchMakingCanvasGroup;

    [SerializeField] List<string> lobbyPlayer;

    private void OnEnable()
    {
        joinPoolBtn.onClick.AddListener(JoinThePool);
        EventBus.Subscribe<PoolJoinedRoomData>(GameEvents.POOL_JOINED, CreateLobbyUserData);
        EventBus.Subscribe<string>(GameEvents.RESET_GAME, ResetTheGame);
    }
    private void OnDestroy()
    {
        UnSubscribeFromEvents();
    }
    private void OnDisable()
    {
        UnSubscribeFromEvents();
    }
    void UnSubscribeFromEvents()
    {
        joinPoolBtn.onClick.RemoveListener(JoinThePool);
        EventBus.Unsubscribe<PoolJoinedRoomData>(GameEvents.POOL_JOINED, CreateLobbyUserData);
        EventBus.Unsubscribe<string>(GameEvents.RESET_GAME, ResetTheGame);
    }

    void ResetTheGame(string msg)
    {
        Utils.RemoveAllChildren(parent);
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

        MatchMakingIcons(poolJoinedRoomData.players);

        if (lobbyPlayer.Count >= 2)
        {
            lobbyMsg.SetText("Loading the game!!");
            if (this != null && gameObject != null)
            {
                Invoke(nameof(EnableGameScreen), 2f);
            }

        }
    }
    void TooglMakeMatchMakingVisiable(bool isVisiable)
    {
        if (matchMakingCanvasGroup == null) { return; }
        matchMakingCanvasGroup.alpha = isVisiable ? 1 : 0;
        matchMakingCanvasGroup.interactable = isVisiable;
        matchMakingCanvasGroup.blocksRaycasts = isVisiable;
    }

    void EnableGameScreen()
    {
        ManageCanvas.Instance.ToggleVisiablityOfCanvasGroup(CanvasType.Game);
    }

    public void MatchMakingIcons(PlayerData[] values)
    {
        if (parent == null) { return; }

        int childCount = parent.childCount;

        // 1. Spawn missing cards
        for (int i = childCount; i < values.Length; i++)
        {
            SpawnPlayerLobbyAvatur(values[i].username);
        }

        // Refresh child count after spawn
        childCount = parent.childCount;

        if (childCount < values.Length)
        {
            Debug.LogError("Deck: Not enough children after spawn!");
            return;
        }

        // 2. Assign card data
        for (int i = 0; i < values.Length; i++)
        {
            Transform child = parent.GetChild(i);
            PlayerIcon card = child.GetComponent<PlayerIcon>();
            card.InitPlayerData(values[i].username);
            child.gameObject.SetActive(true);
        }

        // 3. Release extra cards
        for (int i = values.Length; i < childCount; i++)
        {
            PlayerIcon extraChild = parent.GetChild(i).GetComponent<PlayerIcon>();
            LobbyIconPool.Instance.Release(extraChild);
        }
    }

    void SpawnPlayerLobbyAvatur(string userName)
    {
        bool exists = lobbyPlayer.Contains(userName);

        if (exists)
        {
            Debug.Log("Deck Card already exists!");
            return;
        }

        lobbyPlayer.Add(userName);

        PlayerIcon prefab = LobbyIconPool.Instance.Spawn();
        prefab.transform.SetParent(parent);
        prefab.transform.localPosition = Vector3.zero;
        prefab.transform.localRotation = Quaternion.identity;
        prefab.transform.localScale = Vector3.one;
        prefab.InitPlayerData(userName);
    }
}
