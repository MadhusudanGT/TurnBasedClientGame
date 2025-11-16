using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class PlayerIcon : MonoBehaviour
{
    [SerializeField] Image image;
    [SerializeField] TMP_Text playerName;

    public void InitPlayerData(string userName)
    {
        playerName.SetText(userName);
    }
}
