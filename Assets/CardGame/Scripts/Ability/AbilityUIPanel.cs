using TMPro;
using UnityEngine;

public class AbilityUIPanel : MonoBehaviour
{
    [SerializeField] TMP_Text cardName, cardDescription, cardPower, cardCost;

    public void InitCardInfo(CardInfo cardInfo)
    {
        cardName.SetText(cardInfo.name);
        cardDescription.SetText(cardInfo.description);
        cardPower.SetText("Power.." + cardInfo.power.ToString());
        cardCost.SetText("Cost..." + cardInfo.cost.ToString());
    }
}
