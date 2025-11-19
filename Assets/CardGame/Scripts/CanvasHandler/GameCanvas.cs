using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class GameCanvas : MonoBehaviour
{
    [SerializeField] TMP_Text seconds, currentPlayerOrNot, points, wallet, turns;

    private void OnEnable()
    {
        EventBus.Subscribe<TurnInfoData>(GameEvents.TICK_TIMER_DATA, CountDownTimer);
        EventBus.Subscribe<GameStatus>(GameEvents.PLAYER_STATUS, PlayerGameStatus);
    }

    private void OnDisable()
    {
        EventBus.Unsubscribe<TurnInfoData>(GameEvents.TICK_TIMER_DATA, CountDownTimer);
        EventBus.Unsubscribe<GameStatus>(GameEvents.PLAYER_STATUS, PlayerGameStatus);
    }

    private void CountDownTimer(TurnInfoData turnInfoData)
    {
        seconds.SetText(turnInfoData.secondsRemaining.ToString());
        currentPlayerOrNot.SetText(turnInfoData.currentPlayer == GameManager.Instance.CurrentPlayerNumber ? "Your Turn" : "Opponent Turn");
    }

    private void PlayerGameStatus(GameStatus status)
    {
        turns.text = "Turns : " + turns + "/6";
        wallet.text = "Wallet : " + wallet;
        points.text = "Points : " + points;
    }
}


[System.Serializable]
public class GameStatus
{
    public int turnLeft;
    public int points;
    public int wallet;
}