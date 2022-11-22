#include <iostream>
#include "funzioni.h"

using namespace std;

int main(){

    int len, pos_min, pos_max;

    double* myArray = crea_array(len);

    ricerca_min_max(myArray, len, pos_min, pos_max);

    cout << "Il valore minimo corrisponde a: " << myArray[pos_min] << " che si trova nella posizione: " << pos_min + 1 << endl;
    cout << "Il valore massimo corrisponde a: " << myArray[pos_max] << " che si trova nella posizione: " << pos_max + 1;

}