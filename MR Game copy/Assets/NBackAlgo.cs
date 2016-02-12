using UnityEngine;
using System.Collections;

public class NBackAlgo : MonoBehaviour {

	public Transform square;
	public int NLevel = 1;

	//adjust so that the square appears within the centre of each slot
	public float height = 3.5f;
	public float width  = 3.5f;

	public float rateOfChange = 1f;

	Transform squareClone;
	float timePassed = 0f;

	// Use this for initialization
	void Start () {
		squareClone = (Transform) Instantiate(square, transform.position, Quaternion.Euler(new Vector3(0f, 0f,0f)));
		squareClone.SetParent (this.transform);

		squareClone.gameObject.SetActive (false);
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
	}
		
}
