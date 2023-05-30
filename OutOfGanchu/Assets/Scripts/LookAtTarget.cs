using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LookAtTarget : MonoBehaviour
{
    GameObject targetObject;

    // Start is called before the first frame update
    void Start()
    {
        targetObject = GameObject.Find("Main Camera");
    }

    // Update is called once per frame
    void Update()
    {
        this.transform.LookAt(targetObject.transform);

        if (Vector3.Distance(this.transform.position, targetObject.transform.position) >= 30)
        {
            Destroy(this.gameObject);
        }
    }
}
