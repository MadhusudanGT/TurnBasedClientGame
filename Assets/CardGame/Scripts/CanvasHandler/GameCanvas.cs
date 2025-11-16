using TMPro;
using UnityEngine;

public class GameCanvas : MonoBehaviour
{
    [SerializeField] TMP_Text seconds;
    [SerializeField] TMP_Text currentPlayerOrNot;

    private void OnEnable()
    {
        EventBus.Subscribe<TurnInfoData>(GameEvents.TICK_TIMER_DATA, CountDownTimer);
    }

    private void OnDisable()
    {
        EventBus.Unsubscribe<TurnInfoData>(GameEvents.TICK_TIMER_DATA, CountDownTimer);
    }

    public void CountDownTimer(TurnInfoData turnInfoData)
    {
        seconds.SetText(turnInfoData.secondsRemaining.ToString());
        currentPlayerOrNot.SetText(turnInfoData.currentPlayer == GameManager.Instance.CurrentPlayerNumber ? "Your Turn" : "Opponent Turn");
    }
}
