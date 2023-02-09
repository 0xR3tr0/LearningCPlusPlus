#include "voli.hpp"

int main(){

    int n;

    myList* lista_voli = inizializzazione(n);

    myList* new_lista_voli = ricerca(lista_voli);

    stampa(new_lista_voli);

    return 0;

}