#include <iostream>
#include <cmath>

using namespace std;


int main(){

  float x0, x1, y0, y1, dmax, distanza;

  cout << "Inserisci il valore di x0: ";
  cin >> x0;

  cout << "Inserisci il valore di y0: ";
  cin >> y0;

  cout << "Inserisci la distanza massima: ";
  cin >> dmax;


  do{

    cout << "Inserisci il valore di x1: ";
    cin >> x1;

    cout << "Inserisci il valore di y1: ";
    cin >> y1;

    distanza = sqrt(pow(x1 - x0, 2) + pow(y1 - y0, 2));

    cout << "Distanza: " << distanza << endl;


  }while(distanza < dmax);
  
  cout << "X1: " << x1 << endl;
  cout << "Y1: " << y1 << endl;

  return 0;
}
