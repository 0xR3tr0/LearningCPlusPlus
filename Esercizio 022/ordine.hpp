#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <list>

using namespace std;

const int DIM_NOME = 20;
const int DIM_TIPO = 10;

class Ordine {

public:

	Ordine(); //costruttore
	Ordine(const Ordine& t); //costruttore di copia
	~Ordine(); //distruttore
	Ordine& operator=(const Ordine& op); // operatore di assegnazione
	bool operator<(const Ordine& op) const; // operatore di confronto 
	void getNome(char* str) const { strcpy(str, nome); }
	void getTipo(char* str) const { strcpy(str, tipo); }
	float getImporto() const { return importo; }

private:

	char* nome;
	char* tipo;
	float importo;

	friend istream& operator>>(istream& in, Ordine& t);
	friend ostream& operator<<(ostream& out, const Ordine& t);

};

struct nodo_or {

	Ordine value;
	nodo_or* next;

};

istream& operator>>(istream& in, Ordine& t);
ostream& operator<<(ostream& out, const Ordine& t);

nodo_or* carica_elenco(ifstream& in);

void ricerca(nodo_or* lista);
nodo_or* ins_head(nodo_or* lista, Ordine or1);