//calcolare la media di due valori

#include <iostream>

using namespace std;

int main(void){

  int x, y;
  
  cout << "Inserisci il primo numero: ";
  cin >> x;

  cout << "Inserisci il secondo numero: ";
  cin >> y;

  float media = (x + y)/2;

  cout << "La media e': " << media;

  return 0;

}
