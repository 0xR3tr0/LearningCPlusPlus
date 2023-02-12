#include "Ordine.hpp"    

int main() {

    string file;
    Ordine tmp;
    nodo_or* elenco_or;

    ifstream in_file;
    ofstream out_file;

    cout << "Inserisci il nome del file da aprire: ";
    cin >> file;

    in_file.open(file);

    if (in_file.is_open()) {

        elenco_or = carica_elenco(in_file);

        ricerca(elenco_or);

        in_file.close();

    }
    else { 
        cout << "Errore apertura del file"; 

        return -1; 
    }


    return 0;

}