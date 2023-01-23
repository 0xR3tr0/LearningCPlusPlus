#include <iostream>
#include <string>

using namespace std;

const int NMAX = 100;

struct Voli{

    string partenza = " ";
    string arrivo = " ";
    string compagnia = " ";
    int passeggeri = 0; 

};

void lettura(Voli array[], int &n);

void nuovoVolo(Voli* p);