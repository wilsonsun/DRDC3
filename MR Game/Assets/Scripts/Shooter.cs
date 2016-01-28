using UnityEngine;
using System.Collections;

public class Shooter : MonoBehaviour {

	public Rigidbody projectile;
	public float speed = 20f;

	// Update is called once per frame
	void Update ()
	{
		if (Input.GetMouseButtonDown(0))
		{
			Rigidbody instantiatedProjectile = Instantiate(projectile,transform.position,transform.rotation)as Rigidbody;
			instantiatedProjectile.velocity = transform.TransformDirection(new Vector3(0, 0,-speed));
		}
	}
}