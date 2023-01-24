#include "ordini.hpp"

int main(){

    int n;

    ordini arrayOrdini[NMAX];

    lettura(arrayOrdini, n);

    ordinamento(arrayOrdini, n);

    stampa(arrayOrdini, n);

    return 0;

}