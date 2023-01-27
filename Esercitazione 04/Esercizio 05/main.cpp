#include "voli.hpp"

int main(){

    int n, cont = 0;
    Voli p;

    Voli arrayVoli[NMAX];
    Voli newarrayVoli[NMAX];

    lettura(arrayVoli, n);

    ricerca(arrayVoli, newarrayVoli, n, cont);

    ordinamento(newarrayVoli, cont);
    
    stampa(newarrayVoli, cont);

    nuovoVolo(newarrayVoli, cont);

    stampa(newarrayVoli, cont);

    return 0;

}