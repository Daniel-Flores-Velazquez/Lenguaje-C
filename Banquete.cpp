#include <stdio.h>

int main(){
	int personas,platillo;
	float total;
	printf("\t\t\tPresupuesto para banquete\n");
	printf("-Si el total de personas es menor a 200 el precio es de 95 por platillo\n");
	printf("-Si el total de personas es mayor a 200 y menor a 300 el precio es de 85 por platillo\n");
	printf("-Si el total de personas es mayor a 300 el precio es de 75 por platillo\n");
	printf("\nPara cuantas personas es el banquete: ");
	scanf("%d",&personas);
	if(personas<=200){
		platillo = 95;
		total = platillo * personas;
		printf("\nEl total a pagar es de: %.1f",total);
	}else if(personas>200 && personas<=300){
		platillo = 85;
		total = platillo * personas;
		printf("\nEl total a pagar es de: %.1f",total);
	}else if(personas>300){
		platillo = 75;
		total = platillo * personas;
		printf("\nEl total a pagar es de: %.1f",total);
	}
}
