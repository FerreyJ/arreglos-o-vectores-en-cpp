/*8. Hacer un programa que lea 5 numeros en un arreglo, los copie a otro arreglo 
multiplicados por dos y muestre el segundo arreglo.*/
#include<iostream>
#include<conio.h>

using namespace std;
int main(){
	int n[5],c[5];
	
	for(int i=0;i<5;i++){
		cout<<"Ingrese un numero: ";cin>>n[i];
	}
	cout<<"\nEl segundo arreglo es igual a: {";for(int i=0;i<5;i++){
		c[i]=n[i];
		c[i]*=2;
		cout<<c[i]<<" ";
	}
	cout<<"}"<<endl;
	getch();
	return 0;
}
