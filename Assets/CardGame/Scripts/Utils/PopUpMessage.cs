using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class PopUpMessage : MonoBehaviour
{
    [SerializeField] TMP_Text msg;
    [SerializeField] Button closeBtn;
    [SerializeField] CanvasGroup canvasGroup;
    private void OnEnable()
    {
        EventBus.Subscribe<AbilityService>(GameEvents.ABILITY_TRIGGERED, HnadleAbilityService);
        EventBus.Subscribe<string>(GameEvents.BLOCKED_ATTACK, DefenceSuccess);
        closeBtn.onClick.AddListener(DisablePopup);
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
        EventBus.Unsubscribe<AbilityService>(GameEvents.ABILITY_TRIGGERED, HnadleAbilityService);
        EventBus.Unsubscribe<string>(GameEvents.BLOCKED_ATTACK, DefenceSuccess);
        closeBtn.onClick.RemoveListener(DisablePopup);
    }
    void DisablePopup()
    {
        msg.text = "";
        TogglePopup(false);
    }
    void DefenceSuccess(string msg)
    {
        TogglePopup(true);
        this.msg.text = msg;
    }
    public string GetAbilityMessage(string ability)
    {
        switch (ability)
        {
            case "GainPoints": return "Gained +2 points.";
            case "StealPoints": return "Stole 1 point from the opponent.";
            case "BlockNextAttack": return "Blocked the opponent’s next attack.";
            case "DoublePower": return "Doubled this card’s power.";
            case "DrawExtraCard": return "Drew 1 extra card.";
            default: return "Ability activated.";
        }
    }

    void HnadleAbilityService(AbilityService abilityService)
    {
        TogglePopup(true);
        string msg = GetCardPlayMessage(abilityService);
        this.msg.text = msg;
    }
    public string GetCardPlayMessage(AbilityService abilityService)
    {
        string abilityMessage = GetAbilityMessage(abilityService.Ability.ToString());
        CardInfo cardInfo = CardAbilityList.Instance.GetCardInfo(abilityService.Ability);
        return $"{GameManager.Instance?.CurrentPlayerNumber} used {cardInfo.name} (Cost: {cardInfo.cost}, Power: {cardInfo.power}) — {cardInfo.description}";
    }

    void TogglePopup(bool status)
    {
        if (canvasGroup == null) { return; }
        canvasGroup.alpha = status ? 1 : 0;
        canvasGroup.interactable = status;
        canvasGroup.blocksRaycasts = status;
    }
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

[System.Serializable]
public struct AbilityService
{
    public string PlayerId;
    public string Ability;
    public string Message;
}