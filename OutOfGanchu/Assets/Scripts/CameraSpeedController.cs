using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.Cameras;

public class CameraSpeedController : MonoBehaviour
{
    FreeLookCam freeLookCam;
    // Start is called before the first frame update
    void Start()
    {
        freeLookCam = GetComponent<FreeLookCam>();
        freeLookCam.m_TurnSpeed = GameSettings.cameraSpeed * 10;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
