using NUnit.Framework;
using System.Collections.Generic;
using UnityEngine;

public class CardAbilityList : Singleton<CardAbilityList>
{
    [SerializeField] AbilityUIPanel prefab;
    [SerializeField] Transform parent;
    [SerializeField] List<CardInfo> cards;
    private void OnEnable()
    {
        EventBus.Subscribe<CardInfo>(GameEvents.CARD_INFO, SpawnCardInfo);
    }

    private void OnDisable()
    {
        EventBus.Unsubscribe<CardInfo>(GameEvents.CARD_INFO, SpawnCardInfo);
    }

    void SpawnCardInfo(CardInfo cardInfo)
    {
        if (!cards.Contains(cardInfo))
        {
            cards.Add(cardInfo);
            AbilityUIPanel abilityPanel = Instantiate(prefab);
            abilityPanel.transform.SetParent(parent);
            abilityPanel.transform.localPosition = Vector3.zero;
            abilityPanel.transform.localRotation = Quaternion.identity;
            abilityPanel.transform.localScale = Vector3.one;
            abilityPanel.InitCardInfo(cardInfo);
        }
    }
    public CardInfo GetCardInfo(Abilities ablitieName)
    {
        CardInfo cardInfo = cards.Find(item => item.name == ablitieName.ToString());
        return cardInfo;
    }
}

[System.Serializable]
public class CardInfo
{
    public int id;
    public string name;
    public int cost;
    public int power;
    public string[] abilities;
    public string description;
}

[System.Serializable]
public class CardsListOfInfo
{
    public List<CardInfo> cards;
}