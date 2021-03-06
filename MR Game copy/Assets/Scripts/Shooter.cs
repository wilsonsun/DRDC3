﻿using UnityEngine;
using System.Collections;

public class Shooter : MonoBehaviour {

	public Rigidbody projectile;
	public float speed = 20f;
	public Texture2D buttonImage = null;

	// Update is called once per frame
	void Update ()
	{

	}

	private void OnGUI() {
		if (GUI.Button(new Rect(15, 450, buttonImage.width/2, buttonImage.height/2), buttonImage)) {
			Rigidbody instantiatedProjectile = Instantiate(projectile,transform.position,transform.rotation)as Rigidbody;
			instantiatedProjectile.velocity = transform.TransformDirection(new Vector3(0, 0,-speed));
			Destroy (instantiatedProjectile.gameObject, 3);
		}
	}
}