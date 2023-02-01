#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

    string prova;
    string file;

    ifstream in_file;
    ofstream out_file;

    cout << "Inserisci la stringa: ";
    cin >> file;

    in_file.open(file);

    if(in_file.is_open()){

        //istruzione se il file è aperto correttamente



        // in_file.close(); da mettere alla fine delle istruzioni

    }else{cout << "Errore apertura del file"; return -1;}

    in_file.close();

    cout << "Inserisci il nome del file: ";
    cin >> file;

    cin >> prova;

    out_file.open(file);

    if(out_file.is_open()){

        //istruzione se il file è aperto correttamente



        out_file << prova;

        // out_file.close(); da mettere alla fine delle istruzioni

    }else{cout << "Errore apertura del file"; return -1;}

    out_file.close();

    return 0;
    
}