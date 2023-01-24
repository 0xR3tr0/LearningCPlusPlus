#include <iostream>

using namespace std;

const int NMAX = 100;

struct ordini{

    string cognome = " ";
    string cf = " ";
    string tipo = " ";
    int importo = 0;

};

void stampa(ordini array[], int n);

void lettura(ordini array[], int &n);

void ordinamento(ordini array[], int n);