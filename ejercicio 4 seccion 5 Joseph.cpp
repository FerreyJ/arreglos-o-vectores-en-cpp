/*4. Escribe un programa que defina un vector de numeros y muestre en la salida
estandar el vector en orden inverso-del ultimo al primer elemento.*/
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int vector[5]={4,5,2,7,6},n=5;
	
	for(int i=0;i<n;i++){
		cout<<vector[n-i-1]<<" ";
	}
	getch();
	return 0;
}
