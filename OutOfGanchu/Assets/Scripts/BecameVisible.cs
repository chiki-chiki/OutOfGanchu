using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BecameVisible : MonoBehaviour
{

	[SerializeField]
	float countSpan;//カウントを減らすスパン

	int countDown = 3;//カウント数

	float timeCount = 0;//カメラに映っている時間計測

	bool isVisible;//カメラに映ってるかどうか

	[SerializeField]
	Text countDownText;
	//[SerializeField]
	//Image countDownImage;

	[SerializeField]
	AudioClip[] soundEffects;

	AudioSource audioSource;

	[SerializeField]
	ParticleSystem particle;

	void Start()
	{
		audioSource = GetComponent<AudioSource>();
        audioSource.volume = GameSettings.audioVolume;
	}

    private void Update()
    {
        if (isVisible)
        {
			timeCount += Time.deltaTime;
			
            if (timeCount >= countSpan)
            {
				countDown--;
				//countDownImage.fillAmount = 1 / countDown;
				countDownText.text = countDown.ToString();
				audioSource.PlayOneShot(soundEffects[0]);
				timeCount = 0;
                if (countDown <= 0)
                {
					Looked();
                }
            }

        }

        if (transform.position.y < -9)
        {
            Destroy(this.gameObject);
        }
		
    }

    //   void OnBecameVisible()
    //   {
    //       // 表示されるようになった時の処理
    //       //ShowText("表示されるようになったよ");
    //       isVisible = true;
    //       countDownText.gameObject.SetActive(true);


    //   }


    //   void OnBecameInvisible()
    //{
    //	// 表示されなくなった時の処理
    //	//ShowText("表示されなくなったよ");
    //	isVisible = false;
    //	countDown = 3;
    //	countDownText.text = countDown.ToString();
    //	countDownText.gameObject.SetActive(false);

    //	timeCount = 0;

    //}

    private void OnTriggerEnter(Collider other)
    {
        isVisible = true;
        countDownText.gameObject.SetActive(true);
    }

    private void OnTriggerExit(Collider other)
    {
        isVisible = false;
        countDown = 3;
        countDownText.text = countDown.ToString();
        countDownText.gameObject.SetActive(false);

        timeCount = 0;
    }

    void Looked()
    {
		Debug.Log("Looked");
        if (gameObject.tag == "Jewel")
        {
			GameManager.score += 100;
        }
        else
        {
			GameManager.score -= 300;
        }
		GetComponent<MeshRenderer>().enabled = false;
        countDownText.enabled = false;
		audioSource.PlayOneShot(soundEffects[1]);
		particle.Play();
		Destroy(gameObject,0.5f);
    }
}