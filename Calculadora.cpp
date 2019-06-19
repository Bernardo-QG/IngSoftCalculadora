#include <iostream>
#include <cmath>

using namespace std;


// Calcilar el Arc coseno
void ArcCoseno(double);
void ArcCoseno(double a){
	
	double c;
 c = acos(a);
	
	cout<<"El Arc Coseno es:"<<c;
}

int seno(){
	float num;
	double res;
	cout<<"Ingrese el numero: ";
	cin>>num;
	res = sin(num);
	cout<<"El resultado es: "<<res;
}


double tangente(){
	int numero;
	double resultado;
	cout<<"Ingrese un numero"<<endl;
	cin>>numero;
	resultado=tan(numero);
	cout<<"El resultado es: "<<resultado<<endl;
	return(0);
}

int arcoseno();
int arcoseno(){
	int n;
	double c;
	cout<<"Ingresa el nuemro."<<endl;
	cin>>n;
	c=asin(n);
	cout<<c<<endl;
	return (0);
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
				tangente();
				break;
			case 4:
				arcoseno();
				break;
			case 5:
			int a;
				cout<<"dame un numero"<<endl;
				cin>>a;
				ArcCoseno(a);
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
