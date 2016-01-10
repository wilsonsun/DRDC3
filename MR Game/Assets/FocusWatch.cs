using UnityEngine;
using System.Collections;

public class FocusWatch : MonoBehaviour {
	public Transform secondHand;

	GameObject secondHandClone;

	// Use this for initialization
	void Start () {

		secondHandClone = (GameObject) Instantiate(secondHand, transform.position, Quaternion.identity);
		StartCoroutine (CountSeconds());
	}

	void OnEnable(){
		print ("Watch was enabled!!");
	}

	IEnumerator CountSeconds(){
		yield return null;
	}


	// Update is called once per frame
	void Update () {
		
	}
}
