using Assets.CardGame.Scripts.Utils;
using NUnit.Framework;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class DeckCardManager : MonoBehaviour
{
    [SerializeField] DeckData deckCardData;
    [SerializeField] Transform deckParent, handParent;
    [SerializeField] List<CardData> handCardsData;
    [SerializeField] List<CardData> deckCardsData;
    private void OnEnable()
    {
        EventBus.Subscribe<DeckData>(GameEvents.DECK_CARDS_DATA, InitDeckCardData);
        EventBus.Subscribe<CardData[]>(GameEvents.UPDATED_DECK_CARDS_DATA, AssignDeckCards);
        EventBus.Subscribe<CardData[]>(GameEvents.UPDATED_HAND_CARDS_DATA, AssignHandCards);
        EventBus.Subscribe<string>(GameEvents.RESET_GAME, ResetData);
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
        EventBus.Unsubscribe<DeckData>(GameEvents.DECK_CARDS_DATA, InitDeckCardData);
        EventBus.Unsubscribe<string>(GameEvents.RESET_GAME, ResetData);
        EventBus.Unsubscribe<CardData[]>(GameEvents.UPDATED_DECK_CARDS_DATA, AssignDeckCards);
        EventBus.Unsubscribe<CardData[]>(GameEvents.UPDATED_HAND_CARDS_DATA, AssignHandCards);
    }
    private void Start()
    {
        string savedPhone = LocalStorageManager.Load();

        if (savedPhone != null)
        {
            GameManager.Instance.CurrentPlayerNumber = savedPhone;
            ManageCanvas.Instance.ToggleVisiablityOfCanvasGroup(CanvasType.Lobby);
        }
        else
        {
            ManageCanvas.Instance.ToggleVisiablityOfCanvasGroup(CanvasType.Register);
        }
    }
    private void ResetData(string msg)
    {
        Utils.RemoveAllChildren(deckParent);
        Utils.RemoveAllChildren(handParent);
        handCardsData.Clear();
        deckCardsData.Clear();
        deckCardData = null;
    }
    private void InitDeckCardData(DeckData deckCardData)
    {
        this.deckCardData = deckCardData;

        if (GameManager.Instance != null)
        {
            GameManager.Instance.CurrentPlayerRoomID = this.deckCardData.roomId;
        }

        for (int i = 0; i < this.deckCardData.deck.Length; i++)
        {
            SpawnCardsInDeck(this.deckCardData.deck[i]);
        }

        for (int i = 0; i < this.deckCardData.hand.Length; i++)
        {
            SpawnCardsInHand(this.deckCardData.hand[i]);
        }
    }

    public void AssignDeckCards(CardData[] values)
    {
        if (deckParent == null) { return; }

        int childCount = deckParent.childCount;

        // 1. Spawn missing cards
        for (int i = childCount; i < values.Length; i++)
        {
            SpawnCardsInDeck(values[i]);
        }

        // Refresh child count after spawn
        childCount = deckParent.childCount;

        if (childCount < values.Length)
        {
            Debug.LogError("Deck: Not enough children after spawn!");
            return;
        }

        // 2. Assign card data
        for (int i = 0; i < values.Length; i++)
        {
            Transform child = deckParent.GetChild(i);
            Card card = child.GetComponent<Card>();
            card.InitCardData(values[i], CardType.DeckCard);
            child.gameObject.SetActive(true);
        }

        // 3. Release extra cards
        for (int i = values.Length; i < childCount; i++)
        {
            Card extraChild = deckParent.GetChild(i).GetComponent<Card>();
            CardsPool.Instance.Release(extraChild);
        }
    }

    public void AssignHandCards(CardData[] values)
    {
        if(handParent == null) { return; }

        int childCount = handParent.childCount;

        // 1. Spawn missing cards
        for (int i = childCount; i < values.Length; i++)
        {
            SpawnCardsInHand(values[i]);
        }

        // Refresh child count after spawn
        childCount = handParent.childCount;

        if (childCount < values.Length)
        {
            Debug.LogError("Hand: Not enough children after spawn!");
            return;
        }

        // 2. Assign card data
        for (int i = 0; i < values.Length; i++)
        {
            Transform child = handParent.GetChild(i);
            Card card = child.GetComponent<Card>();
            card.InitCardData(values[i], CardType.HandCad);
            child.gameObject.SetActive(true);
        }

        // 3. Release extra cards
        for (int i = values.Length; i < childCount; i++)
        {
            Card extraChild = handParent.GetChild(i).GetComponent<Card>();
            CardsPool.Instance.Release(extraChild);
        }
    }



    void SpawnCardsInDeck(CardData data)
    {
        bool exists = deckCardsData.Contains(data);

        if (exists)
        {
            Debug.Log("Deck Card already exists!");
            return;
        }

        deckCardsData.Add(data);

        Card prefab = CardsPool.Instance.Spawn();
        prefab.transform.SetParent(deckParent);
        prefab.transform.localPosition = Vector3.zero;
        prefab.transform.localRotation = Quaternion.identity;
        prefab.transform.localScale = Vector3.one;
        prefab.InitCardData(data, CardType.DeckCard);
    }

    void SpawnCardsInHand(CardData data)
    {
        bool exists = handCardsData.Contains(data);

        if (exists)
        {
            Debug.Log("Hand Card already exists!");
            return;
        }

        handCardsData.Add(data);

        Card prefab = CardsPool.Instance.Spawn();
        prefab.transform.SetParent(handParent);
        prefab.transform.localPosition = Vector3.zero;
        prefab.transform.localRotation = Quaternion.identity;
        prefab.transform.localScale = Vector3.one;
        prefab.InitCardData(data, CardType.HandCad);
    }
}
