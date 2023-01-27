#include <iostream>
#include "functions.h"

using namespace std;

int main(){

    int len, cont = 0;

    cout << "Quanti elementi vuoi inserire?";
    cin >> len;

    int* myArray = new int(len);

    inserimento(myArray, len);

    cout << "La media corrisponde a: " << media(myArray, len) << endl;
    cout << "La quantita' di valori positivi corrisponde a: " << conta_pari(myArray, len);

    return 0;

}