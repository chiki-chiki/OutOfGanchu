using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectGenerator : MonoBehaviour
{
    [SerializeField]
    GameObject[] fallObjects;

    [SerializeField]
    float unchRate;

    float rate;

    [SerializeField]
    float generateSpan;
    float timeCount;

    [SerializeField]
    float radius;
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        generateSpan = GameManager.timeLimit / 720 + 0.1f;
        //generateSpan = 0;
        timeCount += Time.deltaTime;
        if (timeCount > generateSpan)
        {
            rate = Random.Range(0f, 1f);
            float radian = Random.Range(0, Mathf.PI * 2);
            transform.position = new Vector3(Mathf.Cos(radian) * radius, Random.Range(8,10), Mathf.Sin(radian) * radius);

            if (rate > unchRate)
            {
                Instantiate(fallObjects[0], transform.position, Quaternion.identity);
            }
            else
            {
                Instantiate(fallObjects[1], transform.position, Quaternion.identity);
            }

            timeCount = 0;
        }
    }
}
