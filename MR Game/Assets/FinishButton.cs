﻿using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class FinishButton : MonoBehaviour {

	public GameObject PlanAText;
	public GameObject PlanBText;
	public GameObject PlanCText;
	public Dropdown dropdown;
	public GameObject FiniButton;
	public GameObject ShowButton;
	public GameObject Map;
	public GameObject tempDropDown;
	private GameObject PlanDecision;
	private bool trigger;


	// Use this for initialization
	void Start () {
		ShowButton.SetActive (false);
		trigger = true;
	}

	// Update is called once per frame
	void Update () {

	}

	public void DisableCanvas() {
		trigger = !trigger;
		PlanAText.SetActive(trigger);
		PlanBText.SetActive(trigger);
		PlanCText.SetActive(trigger);
		FiniButton.SetActive(trigger);

		if (dropdown.value == 0)
			PlanDecision = PlanAText;
		else if (dropdown.value == 1)
			PlanDecision = PlanBText;
		else
			PlanDecision = PlanCText;
		
		tempDropDown.SetActive (trigger);
		Map.SetActive (trigger);
		ShowButton.SetActive (!trigger);

	}

	public void EnableCanvas() {
		trigger = !trigger;
		Map.SetActive(trigger);
		PlanDecision.SetActive (trigger);

	}
}
