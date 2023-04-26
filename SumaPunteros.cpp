/*Autor: Flores Velazquez Juan Daniel
		 
  Fecha: 22-Febrero-2023*/

#include <stdio.h>

int main(){
	
	int a, b, suma;
	int *ptrA;
	int *ptrB;
	
	printf("\t\t\tPrograma para sumar dos punteros\n\n");
	printf("Ingresa el primer valor: ");
	scanf("%d",&a);
	printf("Ingresa el segundo valor: ");
	scanf("%d",&b);
	ptrA=&a;
	ptrB=&b;
	suma = *ptrA + *ptrB;
	printf("La suma de los dos punteros es: %d",suma);
	
}
