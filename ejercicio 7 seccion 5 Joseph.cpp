/*7. Realiza un programa que defina dos vectores de caracteres y despues almacene el 
contenido de ambos vectores en un nuevo vector, situando en primer lugar los elementos
del primer vector seguido por los elementos del segundo vector. Muestre el contenido
del nuevo vector en la salida estandar.*/
#include<iostream>
#include<conio.h>

using namespace std;
int main(){
	char a[]={'a','e','i','o','u'},b[]={'A','E','I','O','U'},c[10];
	
	for(int i=0;i<10;i++){
		c[i]=a[i];	
	}
	for(int i=5;i<10;i++){
		c[i]=b[i-5];
	}
	for(int i=0;i<10;i++){
		cout<<c[i]<<" ";
	}
	
	getch();
	return 0;
}

