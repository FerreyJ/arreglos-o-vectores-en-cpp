/*3. Escriba un programa estandar que lea de la entrada estandar un vector de numeros
y muestre en la salida estandar los numeros del vector con sus indices asociados*/
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numeros[100],p;
	
	cout<<"Ingrese el numero de elementos del vector: ";cin>>p;
	
	for(int i=0;i<p;i++){
		cout<<"Ingrese un numero: ";cin>>numeros[i];
	}
	for(int i=0;i<p;i++){
		cout<<i<<") "<<numeros[i]<<endl;
	}
	system("pause");
	return 0;
}

