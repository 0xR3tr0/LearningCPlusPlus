#include <iostream>

using namespace std;

int main(){

  int x = 1;
  int y = 0;
  int z;

  int n;

  do{
  
    cout << "Inserisci il valore di N: ";
    cin >> n;

  }while(n < 0);
  
  if(n == 0){

    cout << "Il coefficiente" << n << " di Fibonacci e': 0";

  }else if(n == 1){

    cout << "Il coefficiente" << n << " di Fibonacci e': 1";

  }else{

    for(int i = 2; i <= n; i++){

      z = x + y;

      y = x;

      x = z;

    }

    cout << "Il coefficiente " << n << " di Fibonacci e': " << z;
      
  }


  return 0;
  
}
