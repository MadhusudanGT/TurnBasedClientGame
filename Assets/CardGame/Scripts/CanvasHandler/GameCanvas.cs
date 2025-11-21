using System;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class GameCanvas : MonoBehaviour
{
    [SerializeField] TMP_Text seconds, currentPlayerOrNot, points, wallet, turns;
    [SerializeField] Button submitBtn;
    private void OnEnable()
    {
        EventBus.Subscribe<TurnInfoData>(GameEvents.TICK_TIMER_DATA, CountDownTimer);
        EventBus.Subscribe<GameStatus>(GameEvents.PLAYER_STATUS, PlayerGameStatus);
        EventBus.Subscribe<PlayerScore>(GameEvents.UPDATE_SCORE, UpdateScore);
        EventBus.Subscribe<CurrentTurnData>(GameEvents.CURRENT_TURN, UpdateCurrentTurn);
        submitBtn.onClick.AddListener(SubmitCard);
    }

    private void OnDisable()
    {
        EventBus.Unsubscribe<TurnInfoData>(GameEvents.TICK_TIMER_DATA, CountDownTimer);
        EventBus.Unsubscribe<GameStatus>(GameEvents.PLAYER_STATUS, PlayerGameStatus);
        EventBus.Unsubscribe<PlayerScore>(GameEvents.UPDATE_SCORE, UpdateScore);
        EventBus.Unsubscribe<CurrentTurnData>(GameEvents.CURRENT_TURN, UpdateCurrentTurn);
        submitBtn.onClick.RemoveListener(SubmitCard);
    }

    private void CountDownTimer(TurnInfoData turnInfoData)
    {
        seconds.SetText("Seconds : " + turnInfoData.secondsRemaining.ToString());
        currentPlayerOrNot.SetText(turnInfoData.currentPlayer == GameManager.Instance.CurrentPlayerNumber ? "Your Turn" : "Opponent Turn");
    }

    private void PlayerGameStatus(GameStatus status)
    {
        wallet.text = "Wallet : " + status.wallet;
        points.text = "Points : " + status.points;
    }

    void UpdateScore(PlayerScore playerScore)
    {
        points.SetText("Points : " + playerScore.score.ToString());
        wallet.SetText("Wallet : " + playerScore.energy.ToString());
    }
    void SubmitCard()
    {
        PlayCardRequest req = new PlayCardRequest
        {
            phoneNumber = GameManager.Instance.CurrentPlayerNumber,
            roomId = GameManager.Instance?.CurrentPlayerRoomID,
        };
        string json = JsonUtility.ToJson(req);
        SocketHandler.Instance?.Emit("end_turn", json);
    }
    void UpdateCurrentTurn(CurrentTurnData turnInfoData)
    {
        turns.text = "Turns : " + turnInfoData.turn + "/" + GameManager.Instance?.MaxTurns;
    }
}


[System.Serializable]
public class GameStatus
{
    public int turnLeft;
    public int points;
    public int wallet;
}

[System.Serializable]
public class Root
{
    public GameState gameState;
}

[System.Serializable]
public class GameState
{
    public string matchId;
    public int currentTurn;
    public int maxTurns;
    public string currentPlayer;
    public string gameStatus;
    public string winner;
    public Player[] players;
}

[System.Serializable]
public class Player
{
    public string id;
    public string username;
    public int score;
    public CardData[] hand;
    public int energy;
    public int maxEnergy;
    public CardData[] selectedCards;
    public int deckSize;
}


[System.Serializable]
public class CardData : IEquatable<CardData>
{
    public string instanceId;
    public int id;
    public string name;
    public int cost;
    public int power;
    public string[] abilities;
    public string description;

    public bool Equals(CardData other)
    {
        if (other == null) return false;
        return this.instanceId == other.instanceId;
    }

    public override bool Equals(object obj)
    {
        return Equals(obj as CardData);
    }

    public override int GetHashCode()
    {
        return instanceId.GetHashCode();
    }
}


[System.Serializable]
public class PlayerScore
{
    public string playerId;
    public int score;
    public int energy;
}

[System.Serializable]
public class TurnScoreData
{
    public int turn;
    public PlayerScore[] scores;
}

[System.Serializable]
public struct CurrentTurnData
{
    public int turn;
    public string playerId;
    public string playerName;
    public int energy;
    public CardData[] deck;
    public CardData[] hand;
}