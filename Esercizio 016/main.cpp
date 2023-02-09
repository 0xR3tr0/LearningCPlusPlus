#include "functions.hpp"

int main(){

    int len;

    float k;

    cout << "Inserisci la dimensione dell'array: ";
    cin >> len;

    float* myArray = new float(len);

    inserimento(myArray, len);

    cout << "Inserisci il valore da confrontare: ";
    cin >> k;

    ricerca_stampa(myArray, len, k);


    return 0;
}