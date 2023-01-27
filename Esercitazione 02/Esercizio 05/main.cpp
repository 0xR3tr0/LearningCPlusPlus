#include <iostream>

using namespace std;

int main(){
  
  int x, cont = 1;
  
  cout << "Inserisci un numero: ";
  cin >> x;
  
  if(x == 1 || x == 2 || x == 3){
    
    cout << "Il numero e' primo";
    
  }else{
    
    for(int i = 1; i <= x/2; i++){
      
      if(x%i==0){
	
	cont++;
	
      }
      
    }
    if(cont > 2){

      cout << "Il numero non e' primo";
      
    }else{cout << "Il numero e' primo";}
    
  }
  
  return 0;
  
}
