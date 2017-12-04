using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


public class Generador : MonoBehaviour {

	public float cont;
	public float condition;
	private GameObject[] arrayElement;
	private bool level2, level3, level4, level5;
	public int score;
	private Text level;
	public int contElments;

	void Start () {
		cont = 0;
		arrayElement = GameObject.FindGameObjectsWithTag ("cell"); 
		condition = 5;
		level2 = false;
		level3 = false;
		level4 = false;
		level5 = false;
		score = 0;
		level = GameObject.FindGameObjectsWithTag ("level") [0].GetComponent<Text> ();
		contElments = 0;
	}
		


	void Update () {
		 

		GenerarObjeto ();


		if (score == 10) {
			level2 = true;
			level3 = false;
			level4 = false;
			level5 = false;
			condition = 3;
			level.text = "LEVEL 2";
		}

		if (score == 20) {
			level3 = true;
			level2 = false;
			level4 = false;
			level5 = false;
			condition = 1;
			level.text = "LEVEL 3";
		}

		if(score == 40){
			level4 = true;
			level2 = false;
			level3 = false;
			level5 = false;
			condition = 0.1f;
			level.text = "LEVEL 4";
		}

		if(score == 80){
			level2 = false;
			level3 = false;
			level4 = false;
			level5 = true;
			condition = 0.05f;
			level.text = "LEVEL 5";
		}

		if (contElments >= 39) {
			SceneManager.LoadScene (2);
		}

	}


	public void GenerarObjeto(){


		cont += Time.deltaTime;

		if (cont >= condition) {

			arrayElement [Random.Range (0, arrayElement.Length - 1)].GetComponent<Cell> ().Generar ();
			contElments++;
			cont = 0;
		}
	}
		
}
