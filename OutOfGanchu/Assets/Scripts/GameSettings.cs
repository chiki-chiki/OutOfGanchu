using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

public class GameSettings : MonoBehaviour
{
    public static float audioVolume;
    public static float cameraSpeed;

    [SerializeField]
    Slider volumeSlider;
    [SerializeField]
    Slider cameraSpeedSlider;
    [SerializeField]
    Button closeButton;

    [SerializeField]
    GameObject settings;

    [SerializeField]
    GameObject howToPlay;

    [SerializeField]
    Image UIWindow;

    bool isSetting;
    bool isHowToPlay;



    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        audioVolume = volumeSlider.value;
        cameraSpeed = cameraSpeedSlider.value;
    }

    public void LoadSettings()
    {
        isSetting = true;
        var settingsSeqence = DOTween.Sequence();

        settingsSeqence.Append(UIWindow.rectTransform.DOScale(Vector3.one * 5, 0.5f))//image大きく
            .AppendCallback(() => settings.gameObject.SetActive(true))
            .AppendCallback(() => closeButton.gameObject.SetActive(true));
    }
    public void UnLoadSettings()
    {
        isSetting = false;
        var settingsSeqence = DOTween.Sequence();

        settingsSeqence.AppendCallback(() => settings.gameObject.SetActive(false))
            .AppendCallback(() => closeButton.gameObject.SetActive(false))
            .Append(UIWindow.rectTransform.DOScale(Vector3.zero, 0.5f));//image大きく
    }
    public void LoadHowToPlay()
    {
        isHowToPlay = true;
        var howToPlaySeqence = DOTween.Sequence();

        howToPlaySeqence.Append(UIWindow.rectTransform.DOScale(Vector3.one * 5, 0.5f))//image大きく
            .AppendCallback(() => howToPlay.gameObject.SetActive(true))
            .AppendCallback(() => closeButton.gameObject.SetActive(true));
    }
    public void UnLoadHowToPlay()
    {
        isHowToPlay = false;
        var howToPlaySeqence = DOTween.Sequence();

        howToPlaySeqence.AppendCallback(() => howToPlay.gameObject.SetActive(false))
            .AppendCallback(() => closeButton.gameObject.SetActive(false))
            .Append(UIWindow.rectTransform.DOScale(Vector3.zero, 0.5f));//image大きく
    }


    public void CloseButton()
    {
        if (isSetting)
        {
            UnLoadSettings();
        }
        else if (isHowToPlay)
        {
            UnLoadHowToPlay();
        }
    }
    public void SettingButton()
    {
        if (!isSetting)
        {
            LoadSettings();
        }
    }
    public void HowToPlayButton()
    {
        if (!isHowToPlay)
        {
            LoadHowToPlay();
        }
    }
}
