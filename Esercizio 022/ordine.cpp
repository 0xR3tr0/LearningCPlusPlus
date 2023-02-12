#include "ordine.hpp"

Ordine::Ordine() { // COSTRUTTORE 

	nome = new char[DIM_NOME];
	tipo = new char[DIM_TIPO];
	importo = 0.0;

}

Ordine::Ordine(const Ordine& t) { // COSTRUTTORE DI COPIA

	nome = new char[DIM_NOME];
	tipo = new char[DIM_TIPO];

	strcpy(nome, t.nome);
	strcpy(tipo, t.tipo);
	importo = t.importo;

}

Ordine::~Ordine() { // DISTRUTTORE

	delete nome;
	delete tipo;

}

Ordine& Ordine::operator=(const Ordine& t) { // OPERATORE DI ASSEGNAZIONE

	if (&t != this) {

		strcpy(nome, t.nome);
		strcpy(tipo, t.tipo);
		importo = t.importo;

	}

	return *this;

}

istream& operator>>(istream& in, Ordine& t) {

	in.getline(t.nome, DIM_NOME, ',');

	in.getline(t.tipo, DIM_TIPO, ',');

	in >> t.importo;

	in.ignore();

	return in;

}

ostream& operator<<(ostream& out, const Ordine& t){  

	out<< t.nome << ", " << t.tipo << ", " << t.importo << endl;

	return out;
}

nodo_or* carica_elenco(ifstream& in) {

	nodo_or* lista;
	Ordine or1 ;

	lista = 0;

	while (in >> or1) {

		lista = ins_head(lista, or1);

		if (lista == 0) {

			cout << endl << "ATTENZIONE!: elenco terremoti vuoto!" << endl;

		}

	}

	return lista;
}

nodo_or* ins_head(nodo_or* lista, Ordine or1 ) {

	nodo_or* tmp;

	tmp = new nodo_or;

	tmp->value = or1 ;
	tmp->next = lista;

	return  tmp;
}

void ricerca(nodo_or* lista) {

	char* tmp_nome = new char[DIM_NOME];

	char* nome = new char[DIM_NOME];

	cout << "Inserisci il nome da cercare:";
	cin >> nome;

	while (lista) {

		lista->value.getNome(tmp_nome);

		if (strcmp(nome, tmp_nome) == 0) {

			cout << lista->value;

		}

		lista = lista->next;

	}

	return;

}