#include <iostream>

using namespace std;

struct aereoporto{

  string citta = " ";
  string nome = " ";
  string nazione = " ";

};

struct volo{

  aereoporto partenza;
  aereoporto arrivo;
  string compagnia = " ";
  int passeggeri = 0;

};

struct myList{

  volo value;

  myList *next = NULL;

};

myList* allocazione(myList* lista, volo n);
void stampa(myList* lista);
myList* inizializzazione(int n);
myList* ricerca(myList* lista1);