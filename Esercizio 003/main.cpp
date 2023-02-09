#include <iostream>

using namespace std;

int main(){

	double g = 9.81;
	double t;
	
	do{
		cout << "Inserire il tempo trascorso (secondi): ";
  		cin >> t;
	} while(t <= 0);

	double v = g * t;
	double s = (g / 2) * (t * t);

	cout << "La velocita' del corpo e': " << v << "m/s" << endl;
	cout << "La distanza percorsa e'  : " << s << "m" << endl;

	return 0;
  
}
