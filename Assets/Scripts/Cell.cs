using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Cell : MonoBehaviour {


	public int id;
	public GameObject[] arrayElements;
	private bool isEmpty;

	public void setIsEmpty(bool dato){
		isEmpty = dato;
	}

	void Start () {
		this.isEmpty = true;
	}
	

	void Update () {
		
	}


	public void Generar(){

		if(isEmpty){
			Instantiate (arrayElements[Random.Range(0,arrayElements.Length)],transform.position,Quaternion.identity);
			this.isEmpty = false;
	    }
    }


}
