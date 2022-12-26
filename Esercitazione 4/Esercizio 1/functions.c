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

int* VecEven(int array[], int len, int cpari){

    int* arrayEven = new int(cpari);
    
    for(int i = 0; i < len; i++){

        if(array[i] % 2 == 0){

            arrayEven[i] = array[i];

        }

    }

    return arrayEven;

}