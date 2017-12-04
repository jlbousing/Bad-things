using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RayCast : MonoBehaviour {

	private RaycastHit2D hit;

	void Start () {
		
	}

	// Update is called once per frame
	void Update () {

		if (Input.GetMouseButtonDown (0)) {

			hit = Physics2D.Raycast (Camera.main.ScreenToWorldPoint (Input.mousePosition), Vector2.zero);

			if ( hit.collider != null && hit != null && hit.collider.gameObject.tag != "cell") {
				Debug.Log (hit.collider.tag);
				hit.collider.gameObject.GetComponent<Element> ().Destruir ();
					
			}

		}


	}
}
