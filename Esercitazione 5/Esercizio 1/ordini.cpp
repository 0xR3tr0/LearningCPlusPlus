#include "ordini.hpp"

void stampa(ordini array[], int n){

    for(int i = 0; i < n; i++){

        cout << "Cognome: " << array[i].cognome << endl; 
        cout << "Codice Fiscale: "<< array[i].cf << endl;
        cout << "Tipologia Cliente: "<<array[i].tipo << endl;
        cout << "Importo in euro: " << array[i].importo << endl;
        cout << "---------------------------" << endl;

    }

    cout << endl;

    return;

}

void lettura(ordini array[], int &n){

    cout << "Quanti ordini vuoi inizializzare?: ";
    cin >> n;

    for(int i = 0; i < n; i++){

        cout << "Inserire il cognome del cliente: ";
        cin >> array[i].cognome;

        cout << "Inserire il codice fiscale del cliente: ";
        cin >> array[i].cf;

        cout << "Inserire il tipo di cliente: ";
        cin >> array[i].tipo;

        cout << "Inserire l'importo dell'ordine: ";
        cin >> array[i].importo;

        cout << "---------------------------------" << endl;

    }

    return;

}

void ordinamento(ordini array[], int n){

    ordini tmp;

    for(int i = 0; i < n; i++){

        for(int j = i + 1; j < n; j++){

            if(array[j].cf < array[i].cf){

				tmp = array[j];
				array[j]= array[i];
				array[i] = tmp;

            }

        }

    }

    return;

}
