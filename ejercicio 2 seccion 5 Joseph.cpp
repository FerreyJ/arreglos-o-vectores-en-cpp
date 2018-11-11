/*2. Escribe un programa que defina un vector de numeros y calcule la multiplicacion
acumulada de sus elementos.*/
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[]={1,2,3,4,5},multiplicacion=1;
	
	for(int o=0;o<5;o++){
		multiplicacion*=numeros[o];
	}
	cout<<"La multiplicacion acumulada de los elementos es: "<<multiplicacion<<endl;
	getch();
	return 0;
}

