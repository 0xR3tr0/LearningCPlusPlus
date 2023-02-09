#include "ordini.hpp"

void stampa(ordini array[], int n){

  for(int i = 0; i < n; i++){

    cout << "---------------------------" << endl;
    cout << "Cognome: " << array[i].cognome << endl; 
    cout << "Codice Fiscale: "<< array[i].cf << endl;
    cout << "Tipologia Cliente: "<<array[i].tipo << endl;
    cout << "Importo in euro: " << array[i].importo << endl;

  }

  cout << "---------------------------" << endl;
  cout << "Fine Stampa" << endl;
  cout << "---------------------------" << endl;

  return;

}

void lettura(ordini array[], int &n){

  cout << "Quanti ordini vuoi inizializzare?: ";
  cin >> n;

  for(int i = 0; i < n; i++){

    cout << "Inserire il cognome del cliente: ";
    cin >> array[i].cognome;

    cout << "Inserire il codice fiscale del cliente: ";
    cin >> array[i].cf;

    cout << "Inserire il tipo di cliente: ";
    cin >> array[i].tipo;

    cout << "Inserire l'importo dell'ordine: ";
    cin >> array[i].importo;

    cout << "---------------------------------" << endl;

  }

  return;

}

void ordinamento(ordini array[], int n){

  ordini tmp;

  for(int i = 0; i < n; i++){

    for(int j = i + 1; j < n; j++){

      if(array[j].cf < array[i].cf){

	tmp = array[j];
	array[j]= array[i];
	array[i] = tmp;

      }

    }

  }

  return;

}

void check(ordini array1[], ordini array2[], int &k, int &n){

  int isFound;

  cout << "Quanti ordini vuoi controllare?: ";
  cin >> k;

  for(int i = 0; i < k; i++){

    isFound = 0;

    cout << "Inserire il codice fiscale dell'utente: ";
    cin >> array2[i].cf;

    cout << "Inserire il tipo di utente: ";
    cin >> array2[i].tipo;

    cout << "Inserire l'importo dell'ordine: ";
    cin >> array2[i].importo;

    for(int j = 0; j < n; j++){

      if(array2[i].cf == array1[j].cf && array2[i].tipo == array1[j].tipo && array2[i].importo > array1[j].importo){

	isFound = 1;

	array2[i].cognome = array1[j].cognome;
	array2[i].importo = array1[j].importo;

	for(j; j < n - 1; j++){

	  array1[j] = array1[j + 1]; 

	}

	array1[n-1].cognome = " ";
	array1[n-1].cf = " ";
	array1[n-1].tipo = " ";
	array1[n-1].importo = 0; 

	n-=1;

      }

    }

    if(isFound == 0){

      k-=1;
      i-=1;

    }

  }

}
