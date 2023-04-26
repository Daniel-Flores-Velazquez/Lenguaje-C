/*Autor: Flores Velazquez Juan Daniel
		 
  Fecha: 22-Febrero-2023*/

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	double x;
	int arreglo[5];
	float arreglo2[5];
	long g;
	long double j;
	
	printf("\t\t\tPrograma para saber el tamaño de los tipos de variables\n\n");
	printf("El tamanio de x es: %d",sizeof(x));
	printf("\nEl tamanio de arreglo es: %d",sizeof(arreglo));
	printf("\nEl tamanio de arreglo2 es: %d",sizeof(arreglo2));
	printf("\nEl tamanio de g es: %d",sizeof(g));
	printf("\nEl tamanio de j es: %d",sizeof(j));
	
	cout<<"\n\nEl tamanio de x es: "<< sizeof(x);
	cout<<"\nEl tamanio de arreglo es: "<< sizeof(arreglo);
	cout<<"\nEl tamanio de arreglo2 es: "<< sizeof(arreglo2);
	cout<<"\nEl tamanio de g es: "<< sizeof(g);
	cout<<"\nEl tamanio de j es: "<< sizeof(j);
}
