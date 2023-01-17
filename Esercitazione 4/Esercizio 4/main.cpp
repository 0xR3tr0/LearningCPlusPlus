#include <iostream>

using namespace std;

const int NMAX = 100;

struct Studente{

    string nome;
    string cognome;
    string corso;
    int media;
    int anno;

};

void numStudenti(int array[], int *n){

    do{

    cout << "Quanti studenti vuoi inizializzare?: ";
    cin >> n;

    if(n <= 0 || n > 100){

        cout << "Numero non valido(Inserire un numero compreso tra 1 e 100)";

    }

    }while(n <= 0 || n > 100);

    for(int i = 0; i < n; i++){

        array[i] = inserisciStudente();

    }

    return;

}

void inserisciCorso(string *corso){

    int corsoTmp;

    do{

    cout << "Inserisci il corso dello studente:" << endl;
    cout << "1 - Informatica" << endl;
    cout << "2 - Industriale" << endl;
    cout << "3 - Civile" << endl;

    cin >> corsoTmp;

    }while(corsoTmp < 1 || corsoTmp > 3);

    switch (corsoTmp){

        case 1:

            *corso = "INF"
            break;
        
        case 2:

            *corso = "IND"
            break;

        case 3:

            *corso = "CIV"
            break;

    }

    //continua da qui

}

Studente inserisciStudente(){

    Studente tmp;

    cout << "Inserisci il nome dello studente: ";
    getline(cin, tmp.nome);

    cout << "Inserisci il cognome dello studente: ";
    getline(cin, tmp.cognome);




}





int main(){

    Studente arrayStud[NMAX];


}