#include "volo.hpp"

Volo::Volo(){ //COSTRUTTORE 

  partenza = new char[DIM];
  arrivo = new char [DIM];
  agenzia = " ";
  passeggeri = 0;
  prezzo = 0.0;

}

Volo::Volo(const Volo& v){ //COSTRUTTORE DI COPIA

  partenza = new char[DIM];
  arrivo = new char [DIM];

  strcpy(partenza, v.partenza);
  strcpy(arrivo, v.arrivo);
  agenzia = v.agenzia;
  passeggeri = v.passeggeri;
  prezzo = v.prezzo;

}

Volo::~Volo(){ //DISTRUTTORE

  delete partenza;
  delete arrivo;

}

Volo& Volo::operator=(const Volo& v) { // OPERATORE DI ASSEGNAZIONE

  if (&v != this) {

    strcpy(partenza, v.partenza);
    strcpy(arrivo, v.arrivo);
    agenzia = v.agenzia;
    passeggeri = v.passeggeri;
    prezzo = v.prezzo;

  }

  return *this;

}

istream& operator>>(istream& in, Volo& v) {

  in.getline(v.partenza, DIM, ',');

  in.getline(v.arrivo, DIM, ',');

  in >> v.agenzia;

  in >> v.passeggeri;

  in >> v.prezzo;

  in.ignore();

  return in;

}

ostream& operator<<(ostream& out, const Volo& v){

  out << v.partenza << ", " << v.arrivo << ", " << v.agenzia << ", " << v.passeggeri << ", " << v.prezzo << endl;

  return out;
}

nodo_v* ins_head(nodo_v* lista, Volo vo){

  nodo_v* tmp;

  tmp = new nodo_v;

  tmp->value = vo;
  tmp->next = lista;

  return  tmp;
}

nodo_v* carica_elenco(ifstream& in) {

  nodo_v* lista;
  Volo vo;

  lista = 0;

  while (in >> vo) {

    lista = ins_head(lista, vo);

  }

  if (lista == 0) {

    cout << endl << "ATTENZIONE!: elenco voli vuoto!" << endl;

  }

  return lista;
}

void ricerca(nodo_v* lista){

  char* tmp_partenza = new char[DIM];
  char* tmp_arrivo = new char [DIM];

  char* partenza = new char[DIM];
  char* arrivo = new char[DIM];

  cout << "Inserisci la citta' di partenza:";
  cin >> partenza;
    	
  cout << "Inserisci la citta' di arrivo:";
  cin >> arrivo;

  while(lista) {

    lista->value.getPartenza(tmp_partenza);
    lista->value.getArrivo(tmp_arrivo);

    if(strcmp(partenza, tmp_partenza) == 0 && strcmp(arrivo, tmp_arrivo) == 0){

      cout << lista->value;

    }

    lista = lista-> next;

  }

  return;

}
