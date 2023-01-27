#include "functions.hpp"

int main(){

    int len;

    cout << "Inserire il numero di elementi del vettore: ";
    cin >> len;

    int* myArray = new int(len);

    inserimento(myArray, len);

    stampa(myArray, len);

    int nEven = ContEven(myArray, len); // conta i numeri pari

    int nOdd = ContOdd(myArray, len); // conta i numeri dispari

    if(nEven > 0){

        VecEven(myArray, len, nEven);

        stampa(VecEven(myArray, len, nEven), nEven);

    }else(cout << "Non vi sono numeri pari" << endl);

    if(nOdd > 0){

        VecOdd(myArray, len, nOdd);

        stampa(VecOdd(myArray, len, nOdd), nOdd);

    }else(cout << "Non vi sono numeri dispari" << endl);

    return 0;

}