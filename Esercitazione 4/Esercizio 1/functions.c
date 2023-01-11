#include <iostream>

using namespace std;

void stampa(int array[], int len){

    for(int i = 0; i < len; i++){

        cout << array[i] << " ";

    }

    cout << endl;

    return;

}

void inserimento(int array[], int len){

    for(int i = 0; i < len; i++){

        cout << "Inserisci i valori: ";
        cin >> array[i];

    }

    return;

}

int ContEven(int array[], int len){

    int contEven = 0;

    for(int i = 0; i < len; i++){

        if(array[i]%2==0){

            contEven++;

        }

    }

    return contEven;
    
}

int* VecEven(int array[], int len, int nEven){

    int* arrayEven = new int(nEven);

    int tmp = 0;

    for (int i = 0 ; i < len ; i++){

        if(array[i] % 2 == 0){

            arrayEven[tmp] = array[i];

            tmp++;

        }

    }

    return arrayEven;

}

int ContOdd(int array[], int len){

    int contOdd = 0;

    for(int i = 0; i < len; i++){

        if(array[i]%2==1){

            contOdd++;

        }

    }

    return contOdd;

}

int* VecOdd(int array[], int len, int nOdd){

    int* arrayOdd = new int(nOdd);

    int tmp = 0;
    
    for(int i = 0; i < len; i++){

        if(array[i] % 2 == 1){

            arrayOdd[tmp] = array[i];

            tmp++;

        }

    }

    return arrayOdd;



}