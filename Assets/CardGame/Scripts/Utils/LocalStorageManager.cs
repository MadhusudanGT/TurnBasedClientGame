using UnityEngine;
using System.IO;

public static class LocalStorageManager
{
    private static string GetFilePath()
    {
        // Save inside Unity’s persistent data folder
        return Path.Combine(Application.persistentDataPath, GameManager.Instance.fileName + ".json");
    }

    // Save data as plain string
    public static void Save( string data)
    {
        string filePath = GetFilePath();
        File.WriteAllText(filePath, data);
        Debug.Log("Saved to: " + filePath);
    }

    // Load data, return null if not found
    public static string Load()
    {
        string filePath = GetFilePath();

        if (!File.Exists(filePath))
            return null;

        return File.ReadAllText(filePath);
    }

    // Check if file exists
    public static bool Exists()
    {
        return File.Exists(GetFilePath());
    }

    // Delete data file
    public static void Delete()
    {
        string filePath = GetFilePath();

        if (File.Exists(filePath))
            File.Delete(filePath);
    }
}
