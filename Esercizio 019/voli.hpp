#include <iostream>
#include <string>

using namespace std;

const int NMAX = 100;

struct Aeroporto{

    string citta = " ";
    string nome = " ";
    string nazione = " ";

};

struct Voli{

    Aeroporto partenza;
    Aeroporto arrivo;
    string compagnia = " ";
    int passeggeri = 0; 

};

void stampa(Voli array[], int n);

void lettura(Voli array[], int &n);

void ricerca(Voli array1[], Voli array2[], int n, int &cont);

void ordinamento(Voli array[], int cont);

void nuovoVolo(Voli array[], int &cont);