using BestHTTP.SecureProtocol.Org.BouncyCastle.Ocsp;
using TMPro;
using UnityEngine;
using UnityEngine.Assertions.Must;
using UnityEngine.UI;

public class Card : MonoBehaviour
{
    [SerializeField] Image cardImage;
    [SerializeField] Button cardAction;
    [SerializeField] TMP_Text cardName, cardPower, cardCost;
    [SerializeField] CardData cardData;
    [SerializeField] CardType cardType;
    [SerializeField] CanvasGroup cardCanvasGroup;
    [SerializeField] bool isSelected = false;
    private void OnEnable()
    {
        cardAction.onClick.AddListener(OnCardSelected);
        EventBus.Subscribe<string>(GameEvents.SELECTED_CARD, OnSelecetedCard);
        EventBus.Subscribe<string>(GameEvents.RESET_GAME, ResetData);
    }
    private void OnDisable()
    {
        UnSubscribeTheEvents();
    }
    private void OnDestroy()
    {
        UnSubscribeTheEvents();
    }

    void UnSubscribeTheEvents()
    {
        cardAction.onClick.RemoveListener(OnCardSelected);
        EventBus.Unsubscribe<string>(GameEvents.SELECTED_CARD, OnSelecetedCard);
        EventBus.Unsubscribe<string>(GameEvents.RESET_GAME, ResetData);
    }
    void ResetData(string msg)
    {
        isSelected = false;
        cardData = null;
        cardType = CardType.None;
        CardsPool.Instance.Release(this);
    }

    private void Start()
    {
        OnSelecetedCard("0");
    }
    public void InitCardData(CardData cardData, CardType cardType)
    {
        isSelected = false;
        cardImage.color = Color.white;
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
        if (this.cardType == CardType.HandCad)
        {
            if (!isSelected)
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
            else
            {
                OnCardDeSelected();
            }
        }
    }

    public void OnCardDeSelected()
    {
        PlayCardRequest req = new PlayCardRequest
        {
            phoneNumber = GameManager.Instance.CurrentPlayerNumber,
            roomId = GameManager.Instance?.CurrentPlayerRoomID,
            cardId = cardData.instanceId
        };
        string json = JsonUtility.ToJson(req);
        SocketHandler.Instance?.Emit("deselect_card", json);
    }

    void OnSelecetedCard(string cardId)
    {
        if (this.cardData.instanceId == cardId && cardType == CardType.HandCad)
        {
            isSelected = true;
            cardImage.color = Color.green;
        }
        else
        {
            //cardImage.color = Color.white;
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
public class GameConfig
{
    public int maxTurns;
    public int initialHandSize;
    public int initialDeckSize;
    public int maxEnergy;
}

public enum CardType
{
    None,
    DeckCard,
    HandCad
}