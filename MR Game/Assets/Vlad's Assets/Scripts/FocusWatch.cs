using UnityEngine;
using System.Collections;

public class FocusWatch : MonoBehaviour {
	public Transform secondHand;

	public Vector3 secondHandRot = new Vector3 (0f, 180f, 180f);
	public Vector3 secondHandRotRate = new Vector3 (0f, 6f, 0f);

	public int skipChance = 30;

	Transform secondHandClone;
	float timePassed = 0f;
	int rand = 0;


	// Use this for initialization
	void Start () {
		secondHandClone = (Transform) Instantiate(secondHand, transform.position, Quaternion.Euler(new Vector3(0f, 0f,0f)));
		secondHandClone.transform.SetParent (this.transform);
		secondHandClone.transform.localPosition.Set (0f, 0f, 0f);
		secondHandClone.transform.localRotation = Quaternion.Euler (secondHandRot.x, secondHandRot.y, secondHandRot.z);
	}

	void OnEnable(){
		print ("Watch was enabled!!");
	}


	// Update is called once per frame
	void Update () {

		timePassed += Time.deltaTime;

		if (timePassed > 1f) {
			rand = Random.Range (1, 100);
			print (rand);

			if (rand < skipChance)
				MoveSecondHandBy (3);

			else
				MoveSecondHandBy (1);
			timePassed = 0f;
		}
	}

	void MoveSecondHandBy(int secs){
		Vector3 nextRot = secondHandClone.transform.localEulerAngles + secs * secondHandRotRate;
		secondHandClone.transform.localEulerAngles = nextRot;
	}
}
