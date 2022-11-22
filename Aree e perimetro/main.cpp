#include <iostream>
#include "funzioni.h"

using namespace std;

int main(){

  int x, figura;
  float lato, base, altezza, raggio;

  cout << "Scegli un figura tra: " << endl;
  cout << "1 - Quadrato" << endl;
  cout << "2 - Rettangolo" << endl;
  cout << "3 - Triangolo" << endl;
  cout << "4 - Cerchio" << endl;
  cout << "Scegliere la figura: ";
  
  cin >> figura;

  switch(figura){

  case 1:

    cout << "Quadrato" << endl;

    cout << "Inserisci il valore del lato: ";
    cin >> lato;

    do{
      
      cout << "Vuoi calcolare l'area (0) o il perimetro (1): ";
      cin >> x;
    
    }while( x < 0 || x > 1 );
    
    if(x == 0){

      float area = area_quadrato(lato);

      cout << "L'area corrisponde a: " << area;

    }else{

      float perimetro = perimetro_quadrato(lato);

      cout << "Il perimetro corrisponde a: " << perimetro;


    }

  case 2:

    cout << "Rettangolo" << endl;

    cout << "Inserisci il valore della base: ";
    cin >> base;

    cout << "Inserisci il valore dell'altezza:";
    cin >> altezza;

    do{
      
      cout << "Vuoi calcolare l'area (0) o il perimetro (1): ";
      cin >> x;
    
    }while( x < 0 || x > 1 );
    
    if(x == 0){

      float area = area_rettangolo(base, altezza);

      cout << "L'area corrisponde a: " << area;

    }else{

      float perimetro = perimetro_rettangolo(base, altezza);

      cout << "Il perimetro corrisponde a: " << perimetro;


    }

  case 3:

    cout << "Triangolo" << endl;

    cout << "Inserisci il valore della base: ";
    cin >> base;

    cout << "Inserisci il valore dell'altezza:";
    cin >> altezza;

    do{
      
      cout << "Vuoi calcolare l'area (0) o il perimetro (1): ";
      cin >> x;
    
    }while( x < 0 || x > 1 );
    
    if(x == 0){

      float area = area_triangolo(base, altezza);

      cout << "L'area corrisponde a: " << area;

    }else{

      float perimetro = perimetro_triangolo(base, altezza);

      cout << "Il perimetro corrisponde a: " << perimetro;


    }

  case 4:

    cout << "Cerchio" << endl;

    cout << "Inserisci il valore del raggio: ";
    cin >> raggio;

    do{
      
      cout << "Vuoi calcolare l'area (0) o la circonferenza (1): ";
      cin >> x;
    
    }while( x < 0 || x > 1 );
    
    if(x == 0){

      float area = area_cerchio(raggio);

      cout << "L'area corrisponde a: " << area;

    }else{

      float circonferenza = circonferenza_cerchio(raggio);

      cout << "La circonferenza corrisponde a: " << circonferenza;


    }
    
  }


  return 0;
}
