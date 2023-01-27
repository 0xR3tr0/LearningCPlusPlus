#include "ordini.hpp"

int main(){

    int n, k;

    ordini arrayOrdini[NMAX];
    ordini newarrayOrdini[NMAX];

    lettura(arrayOrdini, n);

    ordinamento(arrayOrdini, n);

    check(arrayOrdini, newarrayOrdini, k, n);

    stampa(arrayOrdini, n);

    stampa(newarrayOrdini, k);

    return 0;

}