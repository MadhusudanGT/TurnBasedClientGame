using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class Card : MonoBehaviour
{
    [SerializeField] Image cardImage;
    [SerializeField] Button cardAction;
    [SerializeField] TMP_Text cardName, cardPower, cardCost;
    [SerializeField] CardData cardData;
    [SerializeField] CardType cardType;
    [SerializeField] CanvasGroup cardCanvasGroup;
    private void OnEnable()
    {
        cardAction.onClick.AddListener(OnCardSelected);
        EventBus.Subscribe<string>(GameEvents.SELECTED_CARD, OnSelecetedCard);
    }

    private void OnDisable()
    {
        cardAction.onClick.RemoveListener(OnCardSelected);
        EventBus.Unsubscribe<string>(GameEvents.SELECTED_CARD, OnSelecetedCard);
    }
    private void Start()
    {
        OnSelecetedCard("0");
    }
    public void InitCardData(CardData cardData, CardType cardType)
    {
        this.cardData = cardData;
        cardName.SetText(this.cardData.name);
        cardPower.SetText("Power " + this.cardData.power);
        cardCost.SetText("Cost " + this.cardData.cost);
        UpdateCardType(cardType);
    }

    void UpdateCardType(CardType cardType)
    {
        this.cardType = cardType;
        ToggleCardVisibilty(cardType == CardType.DeckCard ? false : true);
    }
    public void OnCardSelected()
    {
        if (this.cardType == CardType.DeckCard)
        {
            PlayCardRequest req = new PlayCardRequest
            {
                phoneNumber = GameManager.Instance.CurrentPlayerNumber,
                roomId = GameManager.Instance?.CurrentPlayerRoomID,
                cardId = cardData.instanceId
            };
            string json = JsonUtility.ToJson(req);
            SocketHandler.Instance?.Emit("select_card", json);
        }
    }

    void OnSelecetedCard(string cardId)
    {
        if (this.cardData.instanceId == cardId)
        {
            cardImage.color = Color.green;
        }
        else
        {
            cardImage.color = Color.white;
        }
    }

    void ToggleCardVisibilty(bool isVisible)
    {
        cardCanvasGroup.alpha = isVisible ? 1 : 0;
        cardCanvasGroup.blocksRaycasts = isVisible;
        cardCanvasGroup.interactable = isVisible;
    }
}

[System.Serializable]
public class PlayCardRequest
{
    public string phoneNumber;
    public string roomId;
    public string cardId;
}

[System.Serializable]
public class DeckData
{
    public string playerId;
    public string roomId;
    public int totalCards;
    public CardData[] hand;
    public CardData[] deck;
    public GameConfig gameConfig;
    public int points;
    public int energy;
}

[System.Serializable]
public class CardData
{
    public string instanceId;
    public int cardId;
    public int id;
    public string name;
    public int cost;
    public int power;
    public string[] abilities;
}

[System.Serializable]
public class GameConfig
{
    public int maxTurns;
    public int initialHandSize;
    public int initialDeckSize;
    public int maxEnergy;
}

public enum Abilities
{
    None,
    GainPoints,
    StealPoints,
    BlockNextAttack,
    DoublePower,
    DrawExtraCard
}

public enum CardType
{
    None,
    DeckCard,
    HandCad
}