#include <stdio.h>

int main(){
	int num=1,res=0;
	float prom;
	int i=0;
	printf("Programa para detectar un 0");
	while(num !=0 ){
		printf("\n Ingresa un numero: ");
		scanf("%d",&num);
		res = num + res;
		i++;
	}
	prom = res/(i-1);
	
	printf("La suma de todos los numeros es %d", res);
	printf("\nEl promedio es %.1f",prom);
}
