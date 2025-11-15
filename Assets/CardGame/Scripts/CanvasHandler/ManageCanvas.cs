using NUnit.Framework;
using System.Collections.Generic;
using UnityEngine;

public class ManageCanvas : Singleton<ManageCanvas>
{
    [SerializeField] List<ToggleCanvasGroups> canvasGroupAvi;

    public void ToggleVisiablityOfCanvasGroup(CanvasType canvasType)
    {
        foreach (var item in canvasGroupAvi)
        {
            if (item.canvasGroup == null) continue;

            item.canvasGroup.alpha = 0;
            item.canvasGroup.interactable = false;
            item.canvasGroup.blocksRaycasts = false;
        }

        foreach (var item in canvasGroupAvi)
        {
            if (item.canvasType == canvasType)
            {
                item.canvasGroup.alpha = 1;
                item.canvasGroup.interactable = true;
                item.canvasGroup.blocksRaycasts = true;
                break;
            }
        }
    }
}

[System.Serializable]
public struct ToggleCanvasGroups
{
    public CanvasType canvasType;
    public CanvasGroup canvasGroup;
}
public enum CanvasType
{
    Register,
    Lobby,
    Game
}