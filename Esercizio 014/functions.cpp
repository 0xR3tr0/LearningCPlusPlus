#include "functions.hpp"

void inserimento(int array[], int len){

    for(int i = 0; i < len; i++){

        cout << "Inserisci i numeri: ";
        cin >> array[i];

    }

    return;

}

int media(int array[], int len){

    int tmp = 0, media;

    for(int i = 0; i < len; i++){

        tmp += array[i];

    }

    media = tmp / len;

    return media;
}

int conta_pari(int array[], int len){

    int cont = 0;
    
    for(int i = 0; i < len; i++){

        if(array[i] > 0){

            cont++;

        }

    }

    return cont;

}