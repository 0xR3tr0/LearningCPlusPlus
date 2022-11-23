#include <iostream>
#include <cmath>

using namespace std;

double calc_delta(double a , double b, double c){

  double delta = pow(b, 2) - (4 * a * c);

  return delta;
  
}

int main(void){

  double a, b, c;
  double x1, x2;
  double re, im;
  
  cout << "Inserisci a: ";
  cin >> a;

  cout << "Inserisci b: ";
  cin >> b;

  cout << "Inserisci c: ";
  cin >> c;

  if(a == 0){

    x1 = (-c / b);
    cout << "L'equazione ha una soluzione in quanto di primo grado: " << x1;

  }else{
  
    double delta = calc_delta(a, b, c);
  
    if(delta > 0){

      x1 = (-b + sqrt(delta)) / (2 * a);
      x2 = (-b - sqrt(delta)) / (2 * a);

      cout << "L'equazione ha due soluzioni: " << endl;
      cout << x1 << endl;
      cout << x2;

    }else if(delta == 0){

      x1 = -b / (2 * a);

      cout << "L'equazione ha una soluzione: " << x1;
     
    }else{

      re = -b / (2 * a);
      
      im = sqrt(-delta);
      
      cout << "L'equazione ha due soluzioni in C(numeri complessi)" << endl;

      cout << re << " + " << im << "i" << endl;
      cout << re << " - " << im << "i";
    }
  }
  
  return 0;
  
}
