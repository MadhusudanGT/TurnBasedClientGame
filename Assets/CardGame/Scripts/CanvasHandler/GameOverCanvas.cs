using Assets.CardGame.Scripts.Utils;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameOverCanvas : MonoBehaviour
{
    [SerializeField] Transform parent;
    [SerializeField] List<FinalPlayerScore> finalPlayerScores;
    [SerializeField] Button replayBtn;

    private void OnEnable()
    {
        EventBus.Subscribe<GameEndedData>(GameEvents.GAME_END, GameEndUpdateUI);
        replayBtn.onClick.AddListener(ReplayBtnClicked);
    }

    private void OnDisable()
    {
        EventBus.Unsubscribe<GameEndedData>(GameEvents.GAME_END, GameEndUpdateUI);
        replayBtn.onClick.RemoveListener(ReplayBtnClicked);
    }

    [ContextMenu("Delete Room")]
    public void ReplayBtnClicked()
    {
        Utils.RemoveAllChildren(parent);
        finalPlayerScores.Clear();
        ManageCanvas.Instance?.ToggleVisiablityOfCanvasGroup(CanvasType.Lobby);
        EventBus.Invoke<string>(GameEvents.RESET_GAME, "Play Again");
        SocketHandler.Instance.Emit("leave_game", GameManager.Instance?.CurrentPlayerNumber);
    }

    void GameEndUpdateUI(GameEndedData winnerData)
    {
        LeaderBoard(winnerData.finalScores);
    }

    public void LeaderBoard(FinalPlayerScore[] values)
    {
        int childCount = parent.childCount;

        // 1. Spawn missing cards
        for (int i = childCount; i < values.Length; i++)
        {
            SpawnWinnerPanel(i, values[i]);
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
            PlayerLeaderBoard card = child.GetComponent<PlayerLeaderBoard>();
            card.InitiRankData(i, values[i]);
            child.gameObject.SetActive(true);
        }

        // 3. Release extra cards
        for (int i = values.Length; i < childCount; i++)
        {
            PlayerLeaderBoard extraChild = parent.GetChild(i).GetComponent<PlayerLeaderBoard>();
            LeaderBoardPanekPool.Instance.Release(extraChild);
        }
    }

    void SpawnWinnerPanel(int sloNo, FinalPlayerScore data)
    {
        bool exists = finalPlayerScores.Contains(data);

        if (exists)
        {
            Debug.Log("Deck Card already exists!");
            return;
        }

        finalPlayerScores.Add(data);

        PlayerLeaderBoard prefab = LeaderBoardPanekPool.Instance.Spawn();
        prefab.transform.SetParent(parent);
        prefab.transform.localPosition = Vector3.zero;
        prefab.transform.localRotation = Quaternion.identity;
        prefab.transform.localScale = Vector3.one;
        prefab.InitiRankData(sloNo, data);
    }
}

[System.Serializable]
public class FinalPlayerScore
{
    public string playerId;
    public string username;
    public int score;
    public int energy;
}

[System.Serializable]
public class GameEndedData
{
    public string winner;
    public FinalPlayerScore[] finalScores;
}
