/*6. Escribe un programa que defina un vector de numeros y calcule si existe algun
numero en el vector cuyo valor equivale a la suma del resto de numeros del vector.*/
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int vector[5]={23,5,6,4,8},suma=0,max=0;
	
	for(int i=0;i<5;i++){
		suma+=vector[i];
		if(vector[i]>max){
			max=vector[i];
		}
	}
	
	if(max==(suma/2)){
		cout<<"\nEl numero "<<max<<" equivale a la suma de los demas";
	}
	else{
		cout<<"\nNo existe ningun numero que sea igual a la suma de los demas"<<endl;
	}
	
	getch();
	return 0;
}
