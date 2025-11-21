using TMPro;
using UnityEngine;

public class PlayerLeaderBoard : MonoBehaviour
{
    [SerializeField] TMP_Text slNo, playerName, points;

    private void OnEnable()
    {
        EventBus.Subscribe<string>(GameEvents.RESET_GAME, ResetData);
    }
    private void OnDisable()
    {
        EventBus.Unsubscribe<string>(GameEvents.RESET_GAME, ResetData);
    }
    void ResetData(string msg)
    {
        LeaderBoardPanekPool.Instance.Release(this);
    }

    public void InitiRankData(int slNo, FinalPlayerScore playerScore)
    {
        this.slNo.SetText(slNo.ToString());
        playerName.SetText(playerScore.username.ToString());
        points.SetText(playerScore.score.ToString());
    }
}
