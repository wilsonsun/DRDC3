using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class NBackCoord {
	public int x;
	public int y;

	public NBackCoord()
	{
		x = 0;
		y = 0;
	}

	public NBackCoord(int x_, int y_){
		x = x_;
		y = y_;
	}
}

public class NBackAlgo : MonoBehaviour {

	public Transform square;
	public int NLevel = 1;

	//adjust so that the square appears within the centre of each slot
	public float height = 3.5f;
	public float width  = 3.5f;

	public float rateOfChange = 1f;

	Transform squareClone;
	float timePassed = 0f;
	List<NBackCoord> NBackCoords = new List<NBackCoord>();

	// Use this for initialization
	void Start () {
		squareClone = (Transform) Instantiate(square, transform.position, Quaternion.Euler(new Vector3(0f, 0f,0f)));
		squareClone.SetParent (this.transform);
		squareClone.transform.localRotation = Quaternion.Euler (new Vector3 (90f, 180f, 180f));

		squareClone.gameObject.SetActive (false);

		StartCoroutine(ListenForUserInput());
	}
	
	// Update is called once per frame
	void Update () {
		timePassed += Time.deltaTime;

		if (timePassed > rateOfChange / 4 && timePassed < rateOfChange * 0.75)
			squareClone.gameObject.SetActive (true);
		else
			squareClone.gameObject.SetActive (false);

		if (timePassed > rateOfChange){
			PlaceSquare (Random.Range (-1, 2), Random.Range (-1, 2));
			timePassed = 0f;
		}

	}

	private void PlaceSquare(int x, int y){
		//moving square in LOCAL COORDINATES
		squareClone.transform.localPosition = new Vector3 (x*width, 0f, y*height);

		//modifying the n back coordinates
		NBackCoord newCoord = new NBackCoord (x, y);

		//inserting latest coordinate to the front of the list
		NBackCoords.Insert (0, newCoord);

		//checking if list is full
		//if it is, must remove last element of the list
		if (NBackCoords.Count > NLevel) {
			NBackCoords.RemoveAt(NLevel);
		}
			
		/*print ("-------------------------------------------");
		for(int i =0; i< NBackCoords.Count; i++){
			print (NBackCoords[i].x+", "+NBackCoords[i].y);
		}*/

	}

	IEnumerator ListenForUserInput() {
		print ("Started listening for input");

		while (true) {
			while (NBackCoords.Count > 0) {
				if (NBackCoords [0].x == NBackCoords [NBackCoords.Count - 1].x
				   && NBackCoords [0].y == NBackCoords [NBackCoords.Count - 1].y)
					print ("Same N back level detected");

				yield return new WaitForSeconds(rateOfChange);
			}
			yield return new WaitForSeconds(rateOfChange);
		}

		yield return null;
	}
		
}
