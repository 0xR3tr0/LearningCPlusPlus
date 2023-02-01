#include <iostream>

using namespace std;

struct myList{

    int value;

    myList *next;

};

myList* allocazione(myList* lista, int n);

myList* riempimento(myList* list);

void stampa(myList* lista);