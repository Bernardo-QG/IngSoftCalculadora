
#include <iostream>
#include <cmath>

using namespace std;

void Factorial()
{
	double numero,factorial=1;
	int aux=0;
	
	cout<<"Ingresa un numero para el factorial"<<endl;
	cin>>numero;
	
	for(int i=1;i<numero;i++)
	{
		factorial += factorial*i;
	}
	
	
	cout<<"Resultado para el factorial"<<endl;
	cout<<factorial<<endl;
}




int log_natural(){
	double num_evaluar, resultado;
	cout<<"Ingrese el numero a evaluar: ";
	cin>>num_evaluar;
	resultado = log(num_evaluar);
	cout<<"El reultado del logaritmo natural es: "<<resultado;
}



int exponencial(){
	double num_evaluar, resultado;
	cout<<"Ingrese el numero a sacar el exponencial: ";
	cin>>num_evaluar;
	resultado = exp(num_evaluar);
	cout<<"El resultado del exponencial es: "<<resultado;
}





void Potencia()
{
	double numero,potencia,resultado;
	
	
	cout<<"Ingresa un numero para elevarlo a la potencia"<<endl;
	cin>>numero;
	cout<<"Escoja una potencia"<<endl;
	cin>>potencia;
	resultado = pow(numero,potencia);
	cout<<"El resultado es"<<endl;
	cout<<resultado;
	
	
}



void Factorial()
{
	double numero,factorial=1;
	int aux=0;
	
	cout<<"Ingresa un numero para el factorial"<<endl;
	cin>>numero;
	
	for(int i=1;i<numero;i++)
	{
		factorial += factorial*i;
	}
	
	
	cout<<"Resultado para el factorial"<<endl;
	cout<<factorial<<endl;
}



//multiplicacion y division

void xCuadrada(){
	cout<<"X^2"<<endl<<"Ingrese x: ";
	int x;
	cin>>x;
	cout<<"("<<x<<")^2 = "<<x*x<<endl;
}

void xCubica(){
	cout<<"X^3"<<endl<<"Ingrese x: ";
	int x;
	cin>>x;
	cout<<"("<<x<<")^3 = "<<x*x*x<<endl;
}

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


void FuncionRaizCuadrada(){                                                    
	double numero;
	cout<<"Ingrese un numero :";
	cin>>numero;
	if(numero>=0)
	{
		double resultado=sqrt(numero);
		cout<<"\n";
		cout<<"El numero ingresado fue:  "<<numero<<"  y la raiz cuadrada es: "<<resultado<<endl;
	}
	else
	{
		cout<<"Por favor ingrese un numero mayo o igual a 0"<<endl;	
	}
}

void FuncionCuadratica(){
	double a,b,c;
	double raiz,x1,x2;
	cout<<"Ingrese el valor de a :";
	cin>>a;
	cout<<"Ingrese el valor de b :";
	cin>>b;
	cout<<"Ingrese el valor de c :";
	cin>>c;
	if(a>0){
		if(((b*b)-(4*a*c))>=0){
			x1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
			x2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
			cout<<"El resultado de x1 es: "<<x1<<endl;
			cout<<"El resultado de x2 es: "<<x2<<endl;
		}
		else
		{
		cout<<"Las raices de x son imaginarias"<<endl;	
		}
	}

	else
	{
		cout<<"Por favor ingrese un numero mayo o igual a 0 para el valor de a"<<endl;	
	}
	
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
			case 11:
				log_natural();
				break;
			case 12: break;
			case 10: 
				exponencial();
				break;
			case 11: break;
			case 12: 
				LogaritmoBase10();
				break;
			case 13: 
				Xinversa();
				break;
			case 12: 
				LogaritmoBase10();
				break;
			case 13: break;
			case 14: xCuadrada(); break;
			case 15: break;
			case 14: break;
			case 15: xCubica(); break;
			case 16: break;
			case 17:Factorial(); break;
			case 15: break;
			case 16: Potencia(); break;
			case 17: Factorial(); break;
			case 18: break;
			case 19: break;
			case 16: break;
			case 17: break;
			case 18: 
				FuncionRaizCuadrada();
			break;
			case 19: 
				FuncionCuadratica();
			break;
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
