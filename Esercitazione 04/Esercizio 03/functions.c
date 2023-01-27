#include <iostream>

using namespace std;

void stampa(int array[], int len){

    for(int i = 0; i < len; i++){

        cout << array[i] << " ";

    }

    cout << endl;

    return;

}

float media_array(int array[], int len){

    int somma = 0;

    for(int i = 0; i < len; i++){

        somma = somma + array[i];

    }

    int media = somma / len;

    return media;

}

int conta_valori_maggiori(int array[], int len, float media){

    int cont = 0;

    for(int i = 0; i < len; i++){

        if(array[i] >= media){

            cont++;

        }

    }

    return cont;

}

void spostamento(int array[], int pos, int *len){

    for(int i = pos; i < *len - 1; i++){

        array[i] = array[i+1];

    }

    array[*len-1] = 0;

    *len -= 1;

    return;

}

void assegnazione(int array1[], int array2[], int *len1, int len2, float media){

    int cont = 0;

    bool isCheck;

    for(int i = 0; i < *len1; i++){

        do{

            isCheck = false;

            if(array1[i] >= media){

                isCheck = true;

                array2[cont] = array1[i];

                cont++;

                spostamento(array1, i, &*len1);

            }

        }while(isCheck == true && i < *len1);

    }

    return;

}