using UnityEngine;
using System.Collections;

public class PlayerMotor : MonoBehaviour {

	public float moveSpeed = 5.0f;
	public float drag = 0.5f;
	public float terminalRotationSpeed = 25.0f;
	public Vector3 MoveVector{ set; get; }
	public VirtualJoystick joystick;

	private Rigidbody thisRigidbody;

	// Use this for initialization
	void Start () {
		/*thisRigidbody = gameObject.AddComponent<Rigidbody> ();
		thisRigidbody.maxAngularVelocity = terminalRotationSpeed;
		thisRigidbody.drag = drag;
		thisRigidbody.isKinematic = true;*/



	}
	
	// Update is called once per frame
	void Update () {
		CharacterController controller = GetComponent<CharacterController>();
		MoveVector = PoolInput ();
		Debug.Log (MoveVector);
		controller.Move(MoveVector * Time.deltaTime * moveSpeed);
	}

	/*
	private void Move() {
		thisRigidbody.AddForce ((MoveVector * moveSpeed));
	}*/

	private Vector3 PoolInput() {
		Vector3 dir = Vector3.zero;

		if (joystick == null)
			Debug.Log ("where is it");

		dir.x = joystick.Horizontal ();
		dir.z = joystick.Vertical ();

		if (dir.magnitude > 1)
			dir.Normalize ();

		return dir;
	}
		

}
