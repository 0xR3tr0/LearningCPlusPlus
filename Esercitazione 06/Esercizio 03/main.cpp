#include "voli.hpp"

int main(){

    int n;

    myList* lista_voli = 0;
    myList* new_lista_voli = 0;

    inizializzazione(lista_voli, n);

    ricerca(new_lista_voli, lista_voli, n);

    stampa(new_lista_voli);

    return 0;

}