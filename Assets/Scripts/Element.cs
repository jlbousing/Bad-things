using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Element : MonoBehaviour {

	private int idCell;
	private AudioSource audio;
	private Generador generador;
	public Text score;


	void Start () {

		audio = this.GetComponent<AudioSource> ();
		generador = GameObject.FindGameObjectsWithTag ("generador") [0].GetComponent<Generador> ();
		score = GameObject.FindGameObjectsWithTag ("puntos") [0].GetComponent<Text> ();

	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void OnTriggerEnter2D(Collider2D objeto){

		if (objeto.gameObject.tag == "cell") {
			idCell = objeto.GetComponent<Cell> ().id; //SE INICIALIZA EL ID DE LA CASILLA DONDE SE ENCUENTRA

		}

	}

	public void Destruir(){


		GameObject[] arrayCells = GameObject.FindGameObjectsWithTag ("cell");

		for (int i = 0; i < arrayCells.Length; i++) {

			if (arrayCells [i].GetComponent<Cell> ().id == this.idCell) {
				arrayCells [i].GetComponent<Cell> ().setIsEmpty (true); //SE MARCA LA CASILLA COMO VACIO
			}
		}


		audio.Play ();
		generador.score += 1;
		score.text = generador.score.ToString ();
		generador.contElments--;
		Destroy (this.gameObject); //SE DESTRUYE EL ELEMENTO

	}
}
