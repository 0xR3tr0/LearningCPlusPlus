#include <iostream>

using namespace std;

void inserimento(float array[], int len){

    for(int i = 0; i < len; i++){

        cout << "Inserisci i numeri: ";

        cin >> array[i];

    }

    return;

}

void ricerca_stampa(float array[], int len, float k){

    int cont = 0;

    for(int i = 0; i < len; i++){

        if(array[i] > k){

            cout << "Il " << cont + 1 << "' valore corrisponde a: " << array[i] << endl;
            cont++;

        }

        if(cont == 2){

            break;

        }
    }

    if(cont < 2){

        cout << "Vi sono meno di due elementi maggiori di K";

    }
    

}