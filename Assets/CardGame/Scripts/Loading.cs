using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Loading : MonoBehaviour
{
    [SerializeField] Button play, resetUserData;
    private void OnEnable()
    {
        play.onClick.AddListener(LoadGameScene);
        resetUserData.onClick.AddListener(ResetData);
    }

    private void OnDestroy()
    {
        play.onClick.RemoveListener(LoadGameScene);
        resetUserData.onClick.RemoveListener(ResetData);
    }

    void LoadGameScene()
    {
        SceneManager.LoadScene("Game");
    }
    void ResetData()
    {
        LocalStorageManager.Delete();
    }
}
