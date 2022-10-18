using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuButtons : MonoBehaviour
{
    public string scene;

    public void LoadScene()
    {
        SceneManager.LoadScene(scene);
    }

    public void OpenReddit()
    {
        Application.OpenURL("reddit.com");
    }

    public void OpenDiscord()
    {
        Application.OpenURL("discord.com");
    }

    public void OpenInstagram()
    {
        Application.OpenURL("instagram.com");
    }
}
