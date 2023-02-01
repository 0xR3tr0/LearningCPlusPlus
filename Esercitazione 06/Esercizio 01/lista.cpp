#include "lista.hpp"

myList* allocazione(myList* lista, int n){

    myList* tmp_list = new myList; // crea e alloca una lista temporanea

    tmp_list -> value = n; // inzializza la testa della lista

    tmp_list -> next = lista; // inizzializza il valore successivo

    return tmp_list; // ritorna la lista temporanea

}

myList* riempimento(myList* lista){

    int num;

    myList* lista1 = 0; // inizializza il puntatore al prototipo della lista a 0

    cout << "Inserisci i numeri: ";

    for(int i = 0; i < 5; i++){

        cin >> num;

        lista1 = allocazione(lista1, num);

    }

    return lista1;

}

void stampa(myList* lista){

    while(lista){

        cout << lista -> value << " ";

        lista = lista -> next;

    }

    return;

}