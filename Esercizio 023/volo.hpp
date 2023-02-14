#include <iostream>
#include <fstream>
#include <list>
#include <string>
#include <cstdlib>
#include <cstring>

using namespace std;

const int DIM = 15;

class Volo{

    public:

        Volo(); //costruttore
        Volo(const Volo& v); //costruttore di copia
        ~Volo(); //distruttore
        Volo& operator=(const Volo& vo); // operatore di assegnazione
        // FUNZIONI GET
        void getPartenza(char* str) const { strcpy(str, partenza); }
	    void getArrivo(char* str) const { strcpy(str, arrivo); }
        string getAgenzia() const;
        int getPasseggeri() const {return passeggeri; }
	    float getPrezzo() const { return prezzo; }


    private:
    
        char* partenza;
        char* arrivo;
        string agenzia;
        int passeggeri;
        float prezzo;

        friend istream& operator>>(istream &in, Volo& v);
        friend ostream& operator<<(ostream &out, const Volo& v);

};

struct nodo_v{

    Volo value;

    nodo_v* next;

};

istream& operator>>(istream &in, Volo& v);
ostream& operator<<(ostream &out, const Volo& v);

nodo_v* ins_head(nodo_v* lista, Volo vo);
nodo_v* carica_elenco(ifstream& in);

void ricerca(nodo_v* lista);