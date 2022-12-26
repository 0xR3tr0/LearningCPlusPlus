#include <iostream>
#include "functions.h"

using namespace std;

int main(){

    int len;

    cout << "Inserire il numero di elementi del vettore: ";
    cin >> len;

    int* myArray = new int(len);

    cout << "Inserisci i valori: " << endl;

    inserimento(myArray, len);

    stampa(myArray, len);

    int cpari = ContEven(myArray, len);

    VecEven(myArray, len, cpari);

    stampa(VecEven(myArray, len, cpari), cpari);

    return 0;

}