#include "studente.hpp"

using namespace std;

int main(){

    Studente arrayStud[NMAX];

    int n;
    string corso;
    float media;

    lettura(arrayStud, n);

    cout << endl;
    cout << "-----------------------------------------------" << endl;
    cout << endl;

    cout << "Inserire il corso (INF) (IND) (CIV): ";
    cin >> corso;

    cout << "Inserire la media: ";
    cin >> media;

    controllo(arrayStud, n, media, corso);

    return 0;

}