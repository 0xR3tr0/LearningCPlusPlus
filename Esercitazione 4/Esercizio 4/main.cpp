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

            *corso = "INF";
            break;
        
        case 2:

            *corso = "IND";
            break;

        case 3:

            *corso = "CIV";
            break;

    }

    return;

}

Studente inserisciStudente(){

    Studente tmp;

    cin.ignore();

    cout << "Inserisci il nome dello studente: ";
    getline(cin, tmp.nome);

    cout << "Inserisci il cognome dello studente: ";
    getline(cin, tmp.cognome);

    inserisciCorso(&tmp.corso);

    cout << "Inserisci la media dei voti: ";
    cin >> tmp.media;

    cout << "Inserisci l'anno di corso: ";
    cin >> tmp.anno;

    return tmp;

}

void numStudenti(Studente array[], int *n){

    do{

    cout << "Quanti studenti vuoi inizializzare?: ";
    cin >> *n;

    if(*n <= 0 || *n > 100){

        cout << "Numero non valido(Inserire un numero compreso tra 1 e 100)";

    }

    }while(*n <= 0 || *n > 100);

    for(int i = 0; i < *n; i++){

        array[i] = inserisciStudente();
        
        cout << endl;
        cout << "----------------------------------------------" << endl;
        cout << endl;
    }


    return;

}

int ricercaCorsoMedia(Studente array[], string tipoCorso, int nStud, int media){

    int contStud = 0;

    for(int i = 0; i < nStud; i++){

        if(tipoCorso == array[i].corso && array[i].media >= media){

            contStud++;

        }

    }
    
    return contStud;

}

void ricerca(Studente array[], int nStud){

    int corsoTmp, media;

    string tipoCorso;

    do{

        cout << "Quale corso ti interessa?" << endl;
        cout << "1 - Informatica" << endl;
        cout << "2 - Industriale" << endl;
        cout << "3 - Civile" << endl;

        cin >> corsoTmp;

    }while(corsoTmp < 1 || corsoTmp > 3);

    switch (corsoTmp){

        case 1:

            tipoCorso = "INF";
            break;
        
        case 2:

            tipoCorso = "IND";
            break;

        case 3:

            tipoCorso = "CIV";
            break;

    }

    cout << "Inserisci la media minima di interesse: ";
    cin >> media;

    cout << "Ci sono " << ricercaCorsoMedia(array, tipoCorso, nStud, media) << " studenti nel corso di " << tipoCorso << " che hanno una media maggiore o uguale a " << media;

    



    return;

}

int main(){

    int nStud = 0;

    Studente arrayStud[NMAX];

    numStudenti(arrayStud, &nStud);

    ricerca(arrayStud, nStud);

}