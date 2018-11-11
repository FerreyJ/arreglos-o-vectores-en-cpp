/*5. Desarrolle un programa que lea de la entrada estandar un vector de enteros y
determine el mayor elemento del vector.*/
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int vector[100],q,max;
	
	cout<<"Ingrese el numero de elementos del vector: ";cin>>q;
	
	for(int i=0;i<q;i++){
		cout<<"Ingrese un numero: ";cin>>vector[i];
	}
	max=vector[0];
	for(int i=0;i<q;i++){
		if(vector[i]>max){
			max=vector[i];
		}
	}
	cout<<"\nEl mayor elemento del vector es: "<<max<<endl;
	system("pause");
	return 0;
}
