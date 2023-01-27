#include <iostream>

using namespace std;

int main(){

  float x, min;

  cout << "Inserisci un numero: ";
  cin >> x;

  min = x;

  do{

    cout << "Inserisci un numero: ";
    cin >> x;


    if(x > 0 && x < min){

      min = x;

    }
    
    
  }while(x > 0);


  cout << "Il valore minimo e': " << min << endl;

  
  return 0;

}
