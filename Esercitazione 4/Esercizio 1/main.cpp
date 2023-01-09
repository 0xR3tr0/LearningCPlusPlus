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

    int nEven = ContEven(myArray, len); // conta i numeri pari

    int nOdd = ContOdd(myArray, len); // conta i numeri dispari

    VecEven(myArray, len, nEven);

    VecOdd(myArray, len, nOdd);

    stampa(VecEven(myArray, len, nEven), nEven);
    
    stampa(VecOdd(myArray, len, nOdd), nOdd);

    return 0;

}