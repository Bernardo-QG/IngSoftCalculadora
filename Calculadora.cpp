#include <iostream>
#include <cmath>

using namespace std;


double tangente(){
	int numero;
	double resultado;
	cout<<"Ingrese un numero"<<endl;
	cin>>numero;
	resultado=tan(numero);
	cout<<"El resultado es: "<<resultado<<endl;
	return(0);
}

int main(){
	int op=1,n,o;
	
	while(op!=0){
		system ("CLS");
		cout<<"Que funcion desea realizar."<<endl
			<<"1-.Seno."<<endl
			<<"2-.Coseno."<<endl
			<<"3-.Tangente."<<endl
			<<"4-.Arco Seno."<<endl
			<<"5-.Arco Coseno."<<endl
			<<"6-.Arco Tangente."<<endl;
		cin>>o;
		
		switch(o){
			case 1:
				
				break;
			case 2:
				
				break;
			case 3:
				tangente();
				break;
			case 4:
				
				break;
			case 5:
			
				break;
			case 6:
				
				break;
		}
		cout<<"Realizar otra operacion."<<endl
			<<"1-. Si"<<endl
			<<"0-. No"<<endl;
		cin>>op;
	} 
	return 0;
}
