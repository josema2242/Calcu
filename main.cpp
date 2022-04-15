#include <iostream>
#include"biblioteca.hpp"


using namespace std;

int main(int argc, char** argv) {
	
	int no1, no2,r;
	double resultado;
	char x;
	
	cout<<"Ingresa el primer numero"<<endl;
	cin>>no1;
	
	cout<<"Ingresa el segundo numero"<<endl;
	cin>>no2;
	
	
	cout<<"Ingresa el signo de la operacion:"<<endl;
	cout<<"Suma: +"<<endl;
	cout<<"Resta: -"<<endl;
	cout<<"Multiplicacion: *"<<endl;
	cout<<"Division: /"<<endl;
	cin>>x;
	
	
	cout<<"........................................................................................................................";
	switch (x) 
	{
		case '+': 
		
			resultado=suma(no1, no2);
			if(resultado>0){
				cout<<endl<<"El resultado de la suma es: "<<resultado<<endl<<endl;
			}else{
				cout<<endl<<"Error, para poder sumar, ingrese numeros mayores o iguales a 0"<<endl<<endl;
			}
			break;
			
		case '-':
			
			resultado=resta(no1, no2);
			
			if (no2>no1){
				cout<<endl<<"Warning, el resultado sera un numero entero positivo y sera el valor absoluto de la resta"<<endl;
			}
			if(resultado>0){
				cout<<endl<<"El resultado de la resta es: "<<resultado<<endl;
			}else{
				cout<<endl<<"Error, para poder restar, ingrese numeros mayores o iguales a 0"<<endl<<endl;
			}
			break;

		case '*': 
			
			resultado=multiplicacion(no1,no2);
			cout<<endl<<"El resultado de la multiplicacion es: "<< resultado << endl<<endl;
			break;
			
		case '/':
			if (no1 % no2==0){
			resultado=division(no1, no2);
			cout<<"El resultado de la division es: "<< resultado << endl;
			
			
			}else {
				cout<<"La division no es exacta, si desea continuar, en la respuesta no se incluiran los decimales y existe un reciduo que se desconoce"<<endl;
				cout<<"¿Desea continuar, presione *1* para continuar o *2* para cancelar?"<<endl;
				cin>>r;
				if (r=1){
				resultado=division(no1, no2);
				cout<<"El resultado de la division es: "<< resultado << endl;
				}else{
					break;
				}	
			}
			break;
	}	
		cout<<"........................................................................................................................"<<endl;
	
	
	
	system("pause");
	return 0;
}


