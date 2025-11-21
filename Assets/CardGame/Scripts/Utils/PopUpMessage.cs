using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class PopUpMessage : MonoBehaviour
{
    [SerializeField] TMP_Text msg;
    [SerializeField] Button closeBtn;
    private CanvasGroup canvasGroup;
    private void OnEnable()
    {
        EventBus.Subscribe<AbilityService>(GameEvents.ABILITY_TRIGGERED, HnadleAbilityService);
        closeBtn.onClick.AddListener(() =>
        {
            msg.text = "";
        });
    }
    private void OnDisable()
    {
        EventBus.Unsubscribe<AbilityService>(GameEvents.ABILITY_TRIGGERED, HnadleAbilityService);
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
        string msg = GetCardPlayMessage(abilityService);
        this.msg.text = msg;
    }
    public string GetCardPlayMessage(AbilityService abilityService)
    {
        string abilityMessage = GetAbilityMessage(abilityService.Ability.ToString());
        CardInfo cardInfo = CardAbilityList.Instance.GetCardInfo(abilityService.Ability);
        return $"{GameManager.Instance?.CurrentPlayerNumber} used {cardInfo.name} (Cost: {cardInfo.cost}, Power: {cardInfo.power}) — {cardInfo.description}";
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
    public Abilities Ability;
    public string Message;
}