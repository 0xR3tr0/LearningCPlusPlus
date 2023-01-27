#include <iostream>
#include <string>
#include <cstring>

using namespace std;

const int NMAX = 100;

struct Studente{

    string nome = " ";
    string cognome = " ";
    string corso = " ";
    int media = 0;
    int anno = 0;

};

void lettura(Studente array[], int &n);

void controllo(Studente array[], int n, float media, string corso);