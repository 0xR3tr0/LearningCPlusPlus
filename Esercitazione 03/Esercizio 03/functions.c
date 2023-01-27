#include <iostream>

void inserimento(int myArray[], int len){

    for(int i = 0; i < len; i++){

        std::cout << "Inserisci i numeri: ";
        std::cin >> myArray[i];

    }

    return;

}

float media(int myArray[], int len){

    float tmp = 0, media;

    for(int i = 0; i < len; i++){

        tmp += myArray[i];

    }

    media = tmp / len;

    return media;
}

int conta_pari(int myArray[], int len){

    int cont = 0;
    
    for(int i = 0; i < len; i++){

        if(myArray[i] > 0){

            cont++;

        }

    }

    return cont;

}