#include "complesso.hpp"    
  
int main(){  
		
    Complesso c1, c2, cs, cp;
    ifstream in;
				  
	/** INPUT **/ 		
	cout<<endl<<"inserire due numeri complessi:"<<endl;
	cout<<"Complesso #1:"; 
	cin>>c1;   
	cout<<"Complesso #2:"; 
	cin>>c2;
		
	cout<<"Sono stati inseriti i seguenti numeri complessi:"<<endl;
    cout<<"complesso #1:"<<c1<<endl<<"complesso #2:"<<c2;

    // FASE E MODULO
		// #1
 		cout<<endl<<"La fase del complesso #1 è:"<<c1.getFase();
		cout<<endl<<"Il modulo del complesso #1 è:"<<c1.getModulo();
		// #2
		cout<<endl<<"La fase del complesso #2 è:"<<c1.getFase();
		cout<<endl<<"Il modulo del complesso #2 è:"<<c1.getModulo();
		

    /** ELABORAZIONE **/
	cs = c1 + c2; //  --> cs = c1.operator+(c2);
    cp = c1 * c2;

    /** OUTPUT **/
    cout<<endl<<"la somma dei due numeri è:"<<cs;
    cout<<endl<<"il prodotto dei due numeri è:"<<cp<<endl;

   		
		return 0; 
  }