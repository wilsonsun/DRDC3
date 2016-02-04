using UnityEngine;
using System.Collections;

public class EventManager : MonoBehaviour 
{
	public delegate void TouchAction();
	public static event TouchAction OnTouch;


	void OnGUI()
	{
		if(Input.GetKeyUp("space"))
		{
			if(OnTouch != null)
				OnTouch();
		}
	}
}