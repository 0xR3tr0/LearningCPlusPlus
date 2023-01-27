#include "voli.hpp"

void stampa(Voli array[], int n){

    for(int i = 0; i < n; i++){

        cout << "---------------------------" << endl;
        cout << "PARTENZA: " << endl; 
        cout << array[i].partenza.citta << endl;
        cout << array[i].partenza.nome << endl;
        cout << array[i].partenza.nazione << endl;
        cout << "\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << endl;
        cout << "ARRIVO: " << endl; 
        cout << array[i].arrivo.citta << endl;
        cout << array[i].arrivo.nome << endl;
        cout << array[i].arrivo.nazione << endl;
        cout << "\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << endl;
        cout << "Compagnia: " << array[i].compagnia << endl;
        cout << "Passeggeri: " << array[i].passeggeri << endl;
        cout << "---------------------------" << endl;

    }

    cout << endl;

    return;

}

void lettura(Voli array[], int &n){

    cout << "Quanti voli vuoi inizializzare?: ";
    cin >> n;

    for(int i = 0; i < n; i++){

        cout << "Citta' di partenza: ";
        cin >> array[i].partenza.citta;

        cout << "Nome aeroporto: ";
        cin >> array[i].partenza.nome;

        cout << "Nazione aeroporto: ";
        cin >> array[i].partenza.nazione;

        cout << "Citta' di arrivo: ";
        cin >> array[i].arrivo.citta;

        cout << "Nome aeroporto: ";
        cin >> array[i].arrivo.nome;

        cout << "Nazione aeroporto: ";
        cin >> array[i].arrivo.nazione;

        cout << "Compagnia aerea: ";
        cin >> array[i].compagnia;

        cout << "Numero di passeggeri: ";
        cin >> array[i].passeggeri;

        cout << endl;
        cout << "----------------------------------" << endl;

    }

    return;

}

void ricerca(Voli array1[], Voli array2[], int n, int &cont){

    string citta_partenza = " ";
    string nome_partenza = " ";
    string nazione_partenza = " ";

    string citta_arrivo = " ";
    string nome_arrivo = " ";
    string nazione_arrivo = " ";

    int isFound = 0;
    int i;

    cont = 0;

    cout << "Inserire la citta' di partenza: ";
    cin >> citta_partenza;

    cout << "Inserire il nome dell'aeroporto di partenza: ";
    cin >> nome_partenza;

    cout << "Inserire la nazione dell'areoporto di partenza: ";
    cin >> nazione_partenza;

    cout << "Inserire la citta' di arrivo: ";
    cin >> citta_arrivo;

    cout << "Inserire il nome dell'aeroporto di arrivo: ";
    cin >> nome_arrivo;

    cout << "Inserire la nazione dell'aeroporto di arrivo: ";
    cin >> nazione_arrivo;
        

    for(i = 0; i < n; i++){

        if(citta_partenza == array1[i].partenza.citta && citta_arrivo == array1[i].arrivo.citta &&){

            array2[cont].partenza.citta = array1[i].partenza.citta;
            array2[cont].partenza.nome = array1[i].partenza.nome;
            array2[cont].partenza.nazione = array1[i].partenza.nazione;
            array2[cont].arrivo.citta = array1[i].arrivo.citta;
            array2[cont].arrivo.nome = array1[i].arrivo.nome;
            array2[cont].arrivo.nazione = array1[i].arrivo.nazione;
            array2[cont].passeggeri = array1[i].passeggeri;
            array2[cont].compagnia = array1[i].compagnia;
                
            isFound = 1;
            cont++;

        }

    }

    return;

}

void ordinamento(Voli array[], int cont){

    Voli tmp;

    for(int i = 0; i < cont; i++){

        for(int j = i + 1; j < cont; j++){

            if(array[j].passeggeri < array[i].passeggeri){

				tmp = array[j];
				array[j]= array[i];
				array[i] = tmp;

            }

        }

    }

    return;

}

void nuovoVolo(Voli array[], int &cont){

    cout << "Inserire la citta' di partenza: ";
    cin >> array[cont].partenza.citta;

    cout << "Inserire il nome dell'aeroporto di partenza: ";
    cin >> array[cont].partenza.nome;

    cout << "Inserire la nazione dell'areoporto di partenza: ";
    cin >> array[cont].partenza.nazione;

    cout << "Inserire la citta' di arrivo: ";
    cin >> array[cont].arrivo.citta;

    cout << "Inserire il nome dell'aeroporto di arrivo: ";
    cin >> array[cont].arrivo.nome;

    cout << "Inserire la nazione dell'aeroporto di arrivo: ";
    cin >> array[cont].arrivo.nazione;

    cout << "Inserire la compagnia: ";
    cin >> array[cont].compagnia;

    cout << "Inserire il numero di passeggeri: ";
    cin >> array[cont].passeggeri;

    cont++;

    return;

}