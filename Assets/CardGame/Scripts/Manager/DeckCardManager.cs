using UnityEngine;

public class DeckCardManager : MonoBehaviour
{
    [SerializeField] DeckData deckCardData;
    [SerializeField] Card cardPrefab;
    [SerializeField] Transform deckParent, handParent;

    private void OnEnable()
    {
        EventBus.Subscribe<DeckData>(GameEvents.DECK_CARDS_DATA, InitDeckCardData);
    }

    private void OnDisable()
    {
        EventBus.Unsubscribe<DeckData>(GameEvents.DECK_CARDS_DATA, InitDeckCardData);
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

    void SpawnCardsInDeck(CardData data)
    {
        Card prefab = Instantiate(cardPrefab);
        prefab.transform.SetParent(deckParent);
        prefab.transform.localPosition = Vector3.zero;
        prefab.transform.localRotation = Quaternion.identity;
        prefab.transform.localScale = Vector3.one;
        prefab.InitCardData(data,CardType.DeckCard);
    }

    void SpawnCardsInHand(CardData data)
    {
        Card prefab = Instantiate(cardPrefab);
        prefab.transform.SetParent(handParent);
        prefab.transform.localPosition = Vector3.zero;
        prefab.transform.localRotation = Quaternion.identity;
        prefab.transform.localScale = Vector3.one;
        prefab.InitCardData(data, CardType.HandCad);
    }
}
