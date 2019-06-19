#include <iostream>
#include <cmath>

using namespace std;

int seno(){
	float num;
	double res;
	cout<<"Ingrese el numero: ";
	cin>>num;
	res = sin(num);
	cout<<"El resultado es: "<<res;
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
				seno();
				break;
			case 2:
				
				break;
			case 3:
				
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
