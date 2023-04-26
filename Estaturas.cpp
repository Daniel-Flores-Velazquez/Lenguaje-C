#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define enter 13

int main(){
	int contador,i,estudiantes[i];
	float promedio,suma=0;
	printf("\t\tPrograma para calcular el promedio de estaturas de estudiantes\n");
	printf("\nCuantos estudiantes vas a registrar: ");
	scanf("%d",&contador);
	for(i=0; i<contador; i++){
		printf("\nIngresa la estatura del estudiante %d: ",i+1);
		scanf("%d",&estudiantes[i]);
		int estaturaActual = estudiantes[i];
		if(estudiantes[i] != enter){
			suma += estaturaActual;
		}else{
			printf("No ingresaste nada");
			i--;
		}
	}
	promedio = suma/i;
	printf("\n\t\tEl promedio de estatura de los %d estudiantes es de: %.1f",i,promedio);
}
