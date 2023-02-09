#include "voli.hpp"

myList* allocazione(myList* lista, volo n){

    myList* tmp_list = new myList; // crea e alloca una lista temporanea

    tmp_list -> value = n; // inzializza la testa della lista

    tmp_list -> next = lista; // inizializza il valore successivo

    return tmp_list; // ritorna la lista temporanea

}

void stampa(myList* lista){

    while(lista){

        cout << "--------------------------------------" << endl;
        cout << "Citta' aereoporto partenza: " << lista-> value.partenza.citta << endl;
        cout << "Nome aereoporto partenza: " << lista-> value.partenza.nome << endl;
        cout << "Nazione aereoporto partenza: " << lista-> value.partenza.nazione << endl;
        cout << "Citta' aereoporto arrivo: " << lista-> value.arrivo.citta << endl;
        cout << "Nome aereoporto arrivo: " << lista-> value.arrivo.nome << endl;
        cout << "Nazione aereoporto arrivo: " << lista-> value.arrivo.nazione << endl;
        cout << "Compagnia aerea: " << lista-> value.compagnia << endl;
        cout << "Numero passeggeri: " << lista-> value.passeggeri << endl;

        lista = lista-> next;

    }

}

myList* inizializzazione(int n){

    myList* lista = new myList;

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

    return lista;

}

myList* ricerca(myList* lista1){

    int primo_ele = 1;

    myList* lista2 = new myList;

    volo tmp_volo;

    cout << "Inserire la citta' di partenza del volo: ";
    cin >> tmp_volo.partenza.citta;

    cout << "Inserire la citta' di arrivo del volo: ";
    cin >> tmp_volo.arrivo.citta;

    while(lista1){

        if(tmp_volo.partenza.citta == lista1 -> value.partenza.citta && tmp_volo.arrivo.citta == lista1 -> value.arrivo.citta){

            if(primo_ele == 1){

                lista2 -> value = lista1 -> value;
                primo_ele = 0;

            }else{lista2 = allocazione(lista2, lista1-> value);}

        }

        lista1 = lista1 -> next;

    }

    return lista2;

}