#include "studente.hpp"

void lettura(Studente array[], int &n){

    cout << "Quanti studenti vuoi inizializzare? ";
    cin >> n;

    for(int i = 0; i < n; i++){

        cout << "Inserire il nome: ";
        cin >> array[i].nome;

        cout << "Inserire il cognome: ";
        cin >> array[i].cognome;

        do{
            
        cout << "Inserire il corso (INF) (IND) (CIV): ";
        cin >> array[i].corso;

        }while(array[i].corso != "INF" && array[i].corso != "IND" && array[i].corso != "CIV");


        cout << "Inserire la media dei voti: ";
        cin >> array[i].media;

        cout << "Inserire l'anno di studi: ";
        cin >> array[i].anno;

    }

    return;

}

void controllo(Studente array[], int n, float media, string corso){

    int cont = 0;

    for(int i = 0; i < n; i++){

        if(array[i].media > media && corso == array[i].corso){

            cont++;

        }

    }

    cout << "Ci sono " << cont << " studenti nel corso di " << corso << " che hanno una media superiore a " << media;

    return;

}