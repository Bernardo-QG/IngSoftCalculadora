
#include <iostream>
#include <cmath>

using namespace std;
//multiplicacion y division
void MuliplicacionDivision()
{
	double a,b;
	
	cout<<"Dame un numero"<<endl;
	cin>>a;
	cout<<"Dame otro numero"<<endl;
	cin>>b;
	
	double Multiplicacion;
	double Division;
	
	Multiplicacion = a*b;
	Division = a/b;
	
	cout<<"Resultado de la divison"<<endl;
	cout<<Division<<endl;
	
	cout<<"Resultado de la multiplicacion"<<endl;
	cout<<Multiplicacion;
}


int vAbsoluto();
int vAbsoluto(){
	int n;
	cout<<"Ingresa un numero."<<endl;
	cin>>n;
	if(n<0) n = -1*n;
	cout<<n<<endl;
	return (0);
}

int suma(){
	double a, b, suma;
	cout<<"Ingrese el primer numero: ";
	cin>>a;
	cout<<"Ingrese el segundo numero: ";
	cin>>b;
	suma = a + b;
	cout<<"El resultado de la suma es: "<<suma;
}

int resta(){
	double a, b, resta;
	cout<<"Ingrese el primer numero: ";
	cin>>a;
	cout<<"Ingrese el segundo numero: ";
	cin>>b;
	resta = a - b;
	cout<<"El resultado de la resta es: "<<resta;
}

Coseno(){
	int n;
	float c;	
	cout<<"Ingresa el nuemro."<<endl;
	cin>>n;
	c=cos(n);
	cout<<c<<endl;
}


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

int LogaritmoBase10();
LogaritmoBase10(){
	int Numero;
	double Resultado;
	cout<<"Ingresa un numero"<<endl;
	cin>>Numero;
	system("CLS");
	Resultado=log10(Numero);
	cout<<"Resultado: "<<Resultado<<endl;
}

int Xinversa();
Xinversa(){
	int Numero;
	double Resultado;
	cout<<"Ingresa un numero"<<endl;
	cin>>Numero;
	system("CLS");
	Resultado=1/Numero;
	cout<<"Resultado: "<<Resultado<<endl;
}

int main(){
	int op=1,n,o;
	
	while(op!=0){
		system ("CLS");
		cout<<"Que funcion desea realizar."<<endl
			<<"1.-Seno."<<endl
			<<"2.-Coseno."<<endl
			<<"3.-Tangente."<<endl
			<<"4.-Arco Seno."<<endl
			<<"5.-Arco Coseno."<<endl
			<<"6.-Suma."<<endl
			<<"7.-Resta."<<endl
			<<"8.-Multiplicacion y division"<<endl
			<<"9.-Valor absoluto."<<endl
			<<"10.-Funcion exponencial."<<endl
			<<"11.-Logaritmo Natural."<<endl
			<<"12.-Logaritmo Base 10."<<endl
			<<"13.-1/x."<<endl
			<<"14.-x^2."<<endl
			<<"15.-x^3."<<endl
			<<"16.-x^y."<<endl
			<<"17.-x!."<<endl
			<<"18.-x^(1/2)."<<endl
			<<"19.-Resolucion cuarática."<<endl;
		cin>>o;
		
		switch(o){
			case 1:
				seno();
				break;
			case 2:
				Coseno();
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
				suma ();
				break;
			case 7: 
				resta();
				break;
			case 8: 
				MuliplicacionDivision();
				break;
			case 9: 
				vAbsoluto();
				break;
			case 10: break;
			case 11: break;
			case 12: 
				LogaritmoBase10();
				break;
			case 13: 
				Xinversa();
				break;
			case 14: break;
			case 15: break;
			case 16: break;
			case 17: break;
			case 18: break;
			case 19: break;
			default :
				cout<<"opcion no valida"<<endl;
				break;
		}
		cout<<endl<<"Realizar otra operacion."<<endl
			<<"1-. Si"<<endl
			<<"0-. No"<<endl;
		cin>>op;
	} 
	return 0;
}
