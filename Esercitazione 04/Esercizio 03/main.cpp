#include "functions.hpp"

int nmax = 30;

int main(){

    int len1, len2;

    cout << "Lunghezza del primo array: ";
    cin >> len1;

    int* myArray1 = new int(len1);

    for(int i = 0; i < len1; i++){

        cout << "Inserisci gli elementi: ";
        cin >> myArray1[i];

    }

    cout << "Lunghezza del secondo array: ";
    cin >> len2;

    int* myArray2 = new int(len2);

    for(int i = 0; i < len2; i++){

        cout << "Inserisci gli elementi: ";
        cin >> myArray2[i];

    }

    float media = media_array(myArray1, len1);

    int len_vec_out = conta_valori_maggiori(myArray2, len2, media);

    if(len_vec_out > 0){    
        
        int* vec_out = new int(len_vec_out);

        assegnazione(myArray2, vec_out, &len2, len_vec_out, media);

        stampa(myArray2, len2);

        stampa(vec_out, len_vec_out);

    }else{

        cout << "Non ci sono valori maggiori delle media.";

    }
    
    return 0;

}