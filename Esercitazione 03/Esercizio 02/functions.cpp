#include "functions.hpp"

double* crea_array(int& len){

    cout << "Inserisci la lunghezza: ";
    cin >> len;

    double* myArray = new double[len];

    for(int i = 0; i < len; i++){

        cout << "Inserisci i valori nell'Array:";
        cin >> myArray[i];

    }

    return myArray;

}

void ricerca_min_max(double array[], int len, int& pos_min, int& pos_max){

    int min, max;

    min = array[0];
    max = array[0];

    pos_min = 0;
    pos_max = 0;

    for(int i = 1; i < len; i++){

        if(max < array[i]){

            max = array[i];

            pos_max = i;

        }

        if(min > array[i]){

            min = array[i];

            pos_min = i;

        }

    }

    return;

}

void stampa(double array[], int len){

    for(int i = 0; i < len; i++){

        cout << array[i] << " ";

    }

    cout << endl;

}

