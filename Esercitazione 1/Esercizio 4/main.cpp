#include <iostream>

using namespace std;

int main(void){

  double x1, x2, y1, y2;

  do{
    
    cout << "Inserire il valore di x1: ";
    cin >> x1;

    cout << "Inserire il valore di x2: ";
    cin >> x2;
  
  }while(x1 == x2);
  
  cout << "Inserire il valore di y1: ";
  cin >> y1;

  cout << "Inserire il valore di y2: ";
  cin >> y2;

  double m = (y2 - y1) / (x2 - x1);

  cout << "Il coeffieciente angolare e': " << m << endl;
  
  double q = y1 - (m * x1);

  cout << "L'intercetta corrisponde a: " << q;

  return 0;
  
}
