/*4. Escribe un programa que defina un vector de numeros y muestre en la salida
estandar el vector en orden inverso-del ultimo al primer elemento.*/
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int vector[5]={4,5,2,7,6};
	
	for(int i=4;i>=0;i--){
		cout<<vector[i]<<endl;
	}
	getch();
	return 0;
}
