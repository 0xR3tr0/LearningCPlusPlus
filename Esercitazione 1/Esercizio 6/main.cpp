#include <iostream>

using namespace std;

int main()
{

  int anno, mese, giorno, x = 0;
  bool isbisestile = false;

  cout << "Inserire l'anno: ";
  cin >> anno;

  if(anno%400==0 || (anno%100!=0 && anno%4==0)){

    isbisestile = true;
    
  }

  do{
    cout << "Inserire il mese: ";
    cin >> mese;
  }while(mese < 1 || mese > 12);
  
  if(mese == 1 || mese == 3 || mese == 5 || mese == 7 || mese == 8 || mese == 10 || mese == 12){

    x = 3;
    
  }

  if(mese == 4 || mese == 6 || mese == 9 || mese == 11){

    x = 2;
    
  }

  if(mese == 2){

    if(isbisestile == true){

      x = 1;

    }

  }
  

  do{
    
    cout << "Inserire il giorno compreso tra 0 e " << 28 + x << ": ";
    cin >> giorno;
    
  }while(giorno < 1 || giorno > 28 + x);

  giorno = giorno + 20;

  if(giorno > 28 + x){
    
    giorno = giorno - (28 + x);

    mese = mese + 1;

    if(mese > 12){

      mese = mese - 12;
      anno = anno + 1;

    }

    
  }

  
  cout << "La nuova data e': " << anno << " " << mese << " " << giorno;
  
  return 0;
}
