//calcolare area e circonferenza con double (raggio)

#include <iostream>

using namespace std;

int main(){

  double raggio;
  double pigreco = 3.14;
  
  cout << "Inserire il raggio della circonferenza: ";
  cin >> raggio;

  double circonferenza = 2 * pigreco * raggio;

  cout << "La circonferenza del cerchio e': " << circonferenza << endl;

  double area = pigreco * (raggio * raggio);

  cout << "L'area del cerchio e': " << area;

  

  return 0;
  
}
