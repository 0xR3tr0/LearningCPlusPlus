#include "voli.hpp"

void lettura(Voli array[], int &n){

    cout << "Quanti voli vuoi inizializzare?: ";
    cin >> n;

    for(int i = 0; i < n; i++){

        cout << "Citta' di partenza: ";
        cin >> array[i].partenza;

        cout << "Citta' di arrivo: ";
        cin >> array[i].arrivo;

        cout << "Compagnia aerea: ";
        cin >> array[i].compagnia;

        cout << "Numero di passeggeri: ";
        cin >> array[i].passeggeri;

    }

    cout << endl;
    cout << "----------------------------------" << endl;

    return;

}

void nuovoVolo(Voli array[], int &n){

    for(int i = 0; i < n; i++){
    
        cout << "Inserire la citta' di partenza: ";
        cin >> array[i].partenza;

        cout << "Inserire la citta' di arrivo";
        cin >> array[i].arrivo;

    }

}