using System.Collections;
using UnityEngine;

namespace Assets.CardGame.Scripts.Utils
{
    public static class Utils
    {
        public static void RemoveAllChildren(Transform parent)
        {
            if (parent == null) return;

            for (int i = parent.childCount - 1; i >= 0; i--)
            {
                parent.GetChild(i).SetParent(null); // detach child
            }
        }

    }
}