using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using DG.Tweening;
using UnityEngine.UI;

public class SceneController : MonoBehaviour
{
    [SerializeField]
    Image backImage;

    [SerializeField]
    Text statusText;

    AudioSource audioSource;

    // Start is called before the first frame update
    void Start()
    {
        audioSource = GetComponent<AudioSource>();
        DontDestroyOnLoad(this.gameObject);
    }

    // Update is called once per frame
    void Update()
    {
        audioSource.volume = GameSettings.audioVolume;
    }
    public void LoadGame()
    {
        Debug.Log("loadGame");
        var startSeqence = DOTween.Sequence();

        statusText.rectTransform.localPosition = new Vector2(0, 150);
        statusText.rectTransform.localScale = Vector3.zero;
        statusText.text = "3";

        startSeqence.Append(backImage.rectTransform.DOScale(Vector3.one * 10, 0.5f))//image大きく
        .Join(backImage.rectTransform.DOLocalRotate(new Vector3(0, 0, 360f), 0.5f, RotateMode.FastBeyond360))//同時にimage回す
        .Append(statusText.rectTransform.DOScale(Vector3.one, 0.2f))//text大きく
        .Append(statusText.rectTransform.DOLocalMoveY(0f, 3))//text落とす
        .Join(statusText.DOCounter(3, 1, 1.5f).SetEase(Ease.Linear).SetDelay(0.5f))//textカウントダウン
        .AppendCallback(() => statusText.text = "START")
        //.InsertCallback(3.5f,()=>statusText.text = "START")
        .AppendCallback(() => SceneManager.LoadScene("Main"))
        //.InsertCallback(4f, () => SceneManager.LoadScene("Main"))
        .Append(backImage.rectTransform.DOScale(Vector3.zero , 0.5f))//image小さく
        .Join(backImage.rectTransform.DOLocalRotate(new Vector3(0, 0, 360f), 0.5f, RotateMode.FastBeyond360))//同時にimage回す
        .Join(statusText.rectTransform.DOScale(Vector3.zero, 0.5f))//text小さく
        .AppendCallback(() => GameManager.isPlaying = true);

    }
    int score = 0;
    public void LoadResult()
    {
        Debug.Log("loadResult");
        var resultSeqence = DOTween.Sequence();

        statusText.rectTransform.localPosition = Vector2.zero;
        statusText.text = 0.ToString();

        resultSeqence.Append(backImage.rectTransform.DOScale(Vector3.one * 10, 0.5f))//image大きく
        .Join(backImage.rectTransform.DOLocalRotate(new Vector3(0, 0, 360f), 0.5f, RotateMode.FastBeyond360))//同時にimage回す
        .AppendCallback(() => SceneManager.LoadScene("Result"))
        .Append(statusText.rectTransform.DOScale(Vector3.one, 0.2f))//text大きく
        .Append(DOTween.To(() => score,AddScore,GameManager.score,1.0f))
        .Append(backImage.rectTransform.DOScale(Vector3.zero, 0.5f))//image小さく
        .Join(backImage.rectTransform.DOLocalRotate(new Vector3(0, 0, 360f), 0.5f, RotateMode.FastBeyond360))//同時にimage回す
        .AppendCallback(()=>naichilab.RankingLoader.Instance.SendScoreAndShowRanking(GameManager.score));



    }

    private void AddScore(int val)
    {
        score = val;
        statusText.text = string.Format("{0:#,0}", val);
    }
}
