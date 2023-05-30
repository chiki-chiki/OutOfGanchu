using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class GameManager : MonoBehaviour
{
    [SerializeField]
    float BPM;

    [SerializeField]
    Text scoreText;

    float timeCount;
    int beatCount = 0;

    AudioSource audioSource;

    public static int score;


    public static float timeLimit = 60;

    [SerializeField]
    Text timeText;

    public static bool isPlaying = false;

    

    // Start is called before the first frame update
    void Start()
    {
        timeLimit = 60;
        audioSource = GetComponent<AudioSource>();
        score = 0;
    }

    // Update is called once per frame
    void Update()
    {
        if (isPlaying)
        {
        scoreText.text = score.ToString();
        timeLimit -= Time.deltaTime;
        timeText.text = timeLimit.ToString("f1");

        }

        if (timeLimit <= 0&&isPlaying)
        {
                GameObject.Find("SceneController").SendMessage("LoadResult");
            
            isPlaying = false;
        }

    }
}
