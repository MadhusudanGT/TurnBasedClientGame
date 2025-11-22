using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class PlayerIcon : MonoBehaviour
{
    [SerializeField] Image image;
    [SerializeField] TMP_Text playerName;

    private void OnEnable()
    {
        EventBus.Subscribe<string>(GameEvents.RESET_GAME, ResetData);
    }
    private void OnDestroy()
    {
        EventBus.Unsubscribe<string>(GameEvents.RESET_GAME, ResetData);
    }
    public void InitPlayerData(string userName)
    {
        playerName.SetText(userName);
    }
    void ResetData(string msg)
    {
        LobbyIconPool.Instance.Release(this);
    }
}
