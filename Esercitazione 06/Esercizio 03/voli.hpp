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

  myList *next;

};

myList* allocazione(myList* lista, int &n);
void stampa(myList* lista);
void inizializzazione(myList* lista, int n);
void ricerca(myList* lista1, myList* lista2, int n);