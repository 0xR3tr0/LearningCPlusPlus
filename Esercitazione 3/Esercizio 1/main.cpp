#include <iostream>
#include "functions.h"

using namespace std;

int main(){

    int x, y = 0;
    float lato, base, altezza, raggio;

    cout << "Scegli la figura: " << endl;
    cout << "1 - Quadrato" << endl;
    cout << "2 - Rettangolo" << endl;
    cout << "3 - Triangolo" << endl;
    cout << "4 - Cerchio" << endl;

    do{
    cin >> x;
    }while(x < 0 || x > 4);

    switch (x){

        case 1:

            cout << "Inserisci il valore del lato: ";
            cin >> lato;

            cout << "Area (0) / Perimetro (1)" << endl;
            cout << "Cosa vuoi calcolare?: ";

            do{
            cin >> y;   
            }while(x < 0 || x > 1);

            if(y == 0){

                cout << "L'area corrisponde a: " << area_quadrato(lato);

            }else{

                cout << "Il perimetro corrisponde a: " << perimetro_quadrato(lato);

            }

            break;

        case 2:

            cout << "Inserisci il valore della base: ";
            cin >> base;

            cout << "Inserisci il valore dell'altezza: ";
            cin >> altezza;


            cout << "Area (0) / Perimetro (1)" << endl;
            cout << "Cosa vuoi calcolare?: ";

            do{
            cin >> y;   
            }while(y < 0 || y > 1);

            if(y == 0){

                cout << "L'area corrisponde a: " << area_rettangolo(base, altezza);

            }else{

                cout << "Il perimetro corrisponde a: " << perimetro_rettangolo(base, altezza);

            }

            break;

        case 3:

            cout << "Inserisci il valore della base: ";
            cin >> base;

            cout << "Inserisci il valore dell'altezza: ";
            cin >> altezza;


            cout << "Area (0) / Perimetro (1)" << endl;
            cout << "Cosa vuoi calcolare?: ";

            do{
             cin >> y;   
            }while(y < 0 || y > 1);

            if(y == 0){

                 cout << "L'area corrisponde a: " << area_triangolo(base, altezza);

            }else{

                cout << "Il perimetro corrisponde a: " << perimetro_triangolo(base, altezza);

            }

            break;

        case 4:

            cout << "Inserisci il valore del raggio: ";
            cin >> raggio;

            cout << "Area (0) / Circonferenza (1)" << endl;
            cout << "Cosa vuoi calcolare?: ";

            do{
            cin >> y;   
            }while(y < 0 || y > 1);

            if(y == 0){

                cout << "L'area corrisponde a: " << area_cerchio(raggio);

            }else{

                cout << "La circonferenza corrisponde a: " << circonferenza_cerchio(raggio);

            }

            break; 

    }

    return 0;
}