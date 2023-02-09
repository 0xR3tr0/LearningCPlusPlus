#include "functions.hpp"

using namespace std;

int main(){

  float x0, y0; 
  int len;

  cout << "Inserisci la coordinata x0: ";
  cin >> x0;

  cout << "Inserisci la coordinata y0: ";
  cin >> y0;

  cout << "Inserisci il numero di punti: ";
  cin >> len;

  float* myArrayX = new float[len];
  float* myArrayY = new float[len];

  input_cooordinate(myArrayX, myArrayY, len);

  stampa_array(myArrayX, myArrayY, len);

  distanza(myArrayX, myArrayY, len, x0, y0);

  return 0;

}

  

