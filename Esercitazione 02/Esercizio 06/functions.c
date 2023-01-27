#include <iostream>
#include <cmath>

using namespace std;

void input_cooordinate(float myArrayX[], float myArrayY[], int len){

for(int i = 0; i < len; i++){

      cout << "Inserisci la x: ";
      cin >> myArrayX[i];

      cout << "Inserisci la y: ";
      cin >> myArrayY[i];

    }

}

void stampa_array(float myArrayX[], float myArrayY[], int len){

	for(int i = 0; i < len; i++){

      cout << "x" << i+1 << ": " << myArrayX[i] << endl;
      cout << "y" << i+1 << ": " << myArrayY[i] << endl;

    }

}

void distanza(float myArrayX[], float myArrayY[], int len, float x0, float y0){

	float dmax = 0;
	float dmin = INFINITY;
	float PyMin, PxMin, PyMax, PxMax;

	for(int i = 0; i < len; i++){

		float dist = sqrt(pow(myArrayX[i] - x0, 2) + pow(myArrayY[i] - y0, 2));


		if(dist < dmin){

			dmin = dist;
			PxMin = myArrayX[i];
			PyMin = myArrayY[i];

		}
		if(dist > dmax){

			dmax = dist;
			PxMax = myArrayX[i];
			PyMax = myArrayY[i];

		}

	}

	float PxMed = (PxMax + PxMin)/2;
	float PyMed = (PyMax + PyMin)/2;

	cout << "La distanza massima dal punto e': " << dmax << endl;
	cout << "Raggiunta nei punti: " << endl;
	cout << "X: " << PxMax <<" Y: " << PyMax << endl;
	cout << "La distanza minima dal punto e' : " << dmin << endl;
	cout << "Raggiunta nei punti: " << endl;
	cout << "X: " << PxMin <<" Y: " << PyMin << endl;
	cout << "Il punto medio si trova in: " << endl;
	cout << "X: " << PxMed <<" Y: " << PyMed << endl;

}