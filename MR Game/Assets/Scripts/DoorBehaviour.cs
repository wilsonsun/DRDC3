using UnityEngine;
using System.Collections;

public class DoorBehaviour : MonoBehaviour {

	Vector3 closePos;
	public Vector3 openPos;
	public float maxInteractDist = 3f;
	public float minInteractDist = 0.7f;
	public float timeToOpen = 1.5f;
	float timePassed = 0f;

	public bool open = false;



	GameObject player;

	void Start(){
		player = GameObject.FindWithTag ("Player");
		closePos = transform.position;
	}


	void Update(){
		timePassed += Time.deltaTime;

		if (open && transform.position != openPos) {
			transform.position = Vector3.Lerp (transform.position, openPos, timePassed / timeToOpen);
		}

		else if(!open && transform.position != closePos){
			transform.position = Vector3.Lerp (transform.position, closePos, timePassed / timeToOpen);
		}
	}

	void OnEnable(){
		EventManager.OnTouch += Signal;
	}

	void OnDisable(){
		EventManager.OnTouch -= Signal;
	}

	void Signal(){
		float dist = Mathf.Abs(Vector3.Distance(player.transform.position, transform.position));

		if (dist <= maxInteractDist && dist >= minInteractDist) {
			print ("CORRECT!");
			open = !open;
			timePassed = 0f;
		}
		else
			print ("WRONG!!");
	}
		
}
