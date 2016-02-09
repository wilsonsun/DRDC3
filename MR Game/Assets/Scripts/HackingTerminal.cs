﻿using UnityEngine;
using System.Collections;

public class HackingTerminal : MonoBehaviour {

	public float maxInteractDist = 3f;
	public float minInteractDist = 0.7f;

	GameObject player;

	// Use this for initialization
	void Start () {
		player = GameObject.FindWithTag ("Player");
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnEnable(){
		EventManager.OnTouch += Signal;
	}

	void OnDisable(){
		EventManager.OnTouch -= Signal;
	}

	void Signal(){
		float dist = Mathf.Abs(Vector3.Distance(player.transform.position, transform.position));
		float dot = Vector3.Dot (player.transform.forward, (player.transform.forward - transform.position).normalized);

		print ("dot: " + dot);
		//print ("player forward: " + player.transform.forward);

		//interacting with the door
		//either opening of closing it
		if (dist <= maxInteractDist && dist >= minInteractDist && dot > 0f && dot< 0.2f) {
			print ("Player interacted with " + gameObject.name);
		}
	}

}