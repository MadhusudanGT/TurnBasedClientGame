using TMPro;
using UnityEngine;

public class PlayerLeaderBoard : MonoBehaviour
{
    [SerializeField] TMP_Text slNo, playerName, points;

    public void InitiRankData(int slNo, FinalPlayerScore playerScore)
    {
        this.slNo.SetText(slNo.ToString());
        playerName.SetText(playerScore.username.ToString());
        points.SetText(playerScore.score.ToString());
    }
}
