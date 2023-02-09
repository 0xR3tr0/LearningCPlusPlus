#include "voli.hpp"

myList* allocazione(myList* lista, volo n){

    myList* tmp_list = new myList; // crea e alloca una lista temporanea

    tmp_list -> value = n; // inzializza la testa della lista

    tmp_list -> next = lista; // inizializza il valore successivo

    return tmp_list; // ritorna la lista temporanea

}

void stampa(myList* lista){

    while(lista){

        cout << "Citta' aereoporto partenza: " << lista-> value.partenza.citta << endl;

        lista = lista-> next;

    }

}

void inizializzazione(myList* lista, int n){

    volo tmp_volo; //creazione di una struct temporanea 

    cout << "Quanti voli vuoi inizializzare?: ";
    cin >> n;

    for(int i = 0; i < n; i++){ //riempimento della struct 

        cout << "Citta' di partenza: ";
        cin >> tmp_volo.partenza.citta;

        cout << "Nome aeroporto: ";
        cin >> tmp_volo.partenza.nome;

        cout << "Nazione aeroporto: ";
        cin >> tmp_volo.partenza.nazione;

        cout << "Citta' di arrivo: ";
        cin >> tmp_volo.arrivo.citta;

        cout << "Nome aeroporto: ";
        cin >> tmp_volo.arrivo.nome;

        cout << "Nazione aeroporto: ";
        cin >> tmp_volo.arrivo.nazione;

        cout << "Compagnia aerea: ";
        cin >> tmp_volo.compagnia;

        cout << "Numero di passeggeri: ";
        cin >> tmp_volo.passeggeri;

        lista = allocazione(lista, tmp_volo); // riallocazione della lista

        cout << endl;
        cout << "----------------------------------" << endl;

    }

    return;

}

void ricerca(myList* lista1, myList* lista2, int n){

    volo tmp_volo;

    cout << "Inserire la citta' di partenza del volo: ";
    cin >> tmp_volo.partenza.citta;

    cout << "Inserire il nome dell'aeroporto di partenza: ";
    cin >> tmp_volo.partenza.nome;

    cout << "Inserire la nazione dell'aeroporto di partenza: ";
    cin >> tmp_volo.partenza.nazione;

    cout << "Inserire la citta' di arrivo del volo: ";
    cin >> tmp_volo.arrivo.citta;

    cout << "Inserire il nome dell'aeroporto di arrivo: ";
    cin >> tmp_volo.arrivo.nome;

    cout << "Inserire la nazione dell'aeroporto di arrivo: ";
    cin >> tmp_volo.arrivo.nazione;

    cout << "Inserire la compagnia aerea del volo: ";
    cin >> tmp_volo.compagnia;

    cout << "Inserirei il numero di passeggeri del volo: ";
    cin >> tmp_volo.passeggeri;

    lista2 = allocazione(lista2, tmp_volo);

    for(int i = 0; i < n; i++){

        if(lista2-> value.partenza.citta == lista1 -> value.partenza.citta && lista2-> value.arrivo.citta == lista1 -> value.arrivo.citta){

            lista2 = allocazione(lista2, lista1->value);

        }

    }

    return;

}