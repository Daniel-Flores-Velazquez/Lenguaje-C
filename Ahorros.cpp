#include <stdio.h>

int main(){
	int i, suma, mes[12];
	printf("\t\tPrograma para calcular ahorros");
	for(i=0; i<12; i++){
		printf("\n\nCuanto ahorraste en el mes %d: ",i+1);
		scanf("%d",&mes[i]);
		suma +=mes[i];
		printf("El total ahorrado es de: %d",suma-1);
	}
	
}
