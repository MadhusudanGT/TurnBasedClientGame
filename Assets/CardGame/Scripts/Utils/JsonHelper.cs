using System.Collections.Generic;
using UnityEngine;
using BestHTTP.JSON;

public static class JsonHelper
{
    public static string ExtractJson(object[] args)
    {
        if (args == null || args.Length == 0 || args[0] == null)
        {
            Debug.LogError("JSON ERROR: args[0] is NULL");
            return null;
        }

        // Case 1: JSON already string
        if (args[0] is string s)
            return s;

        // Case 2: Dictionary<string, object>
        if (args[0] is IDictionary<string, object> dict)
            return Json.Encode(dict);

        // Case 3: List<object> (BestHTTP sometimes wraps JSON)
        if (args[0] is List<object> list)
        {
            if (list.Count > 0)
                return ExtractJson(new object[] { list[0] });
        }

        // Case 4: Fallback
        string fallback = args[0].ToString();
        Debug.LogWarning("JSON WARNING: Using fallback ToString() for type: " + args[0].GetType());
        return fallback;
    }

    public static T Decode<T>(object[] args)
    {
        string json = ExtractJson(args);

        if (string.IsNullOrEmpty(json))
        {
            Debug.LogError("JSON ERROR: No usable JSON string extracted.");
            return default;
        }

        try
        {
            return JsonUtility.FromJson<T>(json);
        }
        catch (System.Exception e)
        {
            Debug.LogError("JSON PARSE ERROR: " + e.Message + " JSON: " + json);
            return default;
        }
    }
}
