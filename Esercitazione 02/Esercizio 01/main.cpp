#include <iostream>

using namespace std;

int main(){

  int x;

  do{
    
    cout << "Inserisci un numero: ";
    cin >> x;
    
  }while(x < 0);
  
  if(x == 0){
    
    cout << "Il fattoriale di 0 e' uguale a 1";
    
  }else{
    
    for(int i = x - 1; i > 1; i--){
      
      x = x * i;

    }

    cout << "Il fattoriale corrisponde a: " << x;
    
  }
  
  return 0;
  
}
