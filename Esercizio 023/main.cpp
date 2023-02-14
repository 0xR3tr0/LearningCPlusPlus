#include "volo.hpp"

int main(){

  string file;
  Volo tmp;
  nodo_v* elenco_v;

  ifstream in_file;
  ofstream out_file;

  cout << "Inserisci il nome del file da aprire: ";
  cin >> file;

  in_file.open(file);
    
  if(in_file.is_open()){

    elenco_v = carica_elenco(in_file);

    ricerca(elenco_v);

    in_file.close();

  }else{cout << "Errore apertura del file"; return -1;}

  return 0;

}
