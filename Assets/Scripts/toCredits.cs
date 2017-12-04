using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class toCredits : MonoBehaviour {

	float cont = 0;


	void Start () {

	}

	// Update is called once per frame
	void Update () {

		cont += Time.deltaTime;

		if (cont >= 3) {
			SceneManager.LoadScene (3);
		}
	}
}
