/*Autor: Flores Velazquez Juan Daniel
		 
  Fecha: 22-Febrero-2023*/

#include <stdio.h>

typedef struct{
	char nombre[15];
	char sexo[10];
	int edad;
	char duenio[15];
	char direccion[20];
} fichaMascota;

int main(){
	
	fichaMascota Mascota;
	
	printf("\t\t\tPrograma para guardar y mostrar datos de una mascota\n\n");
	printf("Ingresa el nombre de la mascota: ");
	scanf("%s",&Mascota.nombre);
	printf("Sexo: ");
	scanf("%s",&Mascota.sexo);
	printf("Ingrese la edad de la mascota: ");
	scanf("%d",&Mascota.edad);
	printf("Ingrese el nombre del duenio: ");
	scanf("%s",&Mascota.duenio);
	fflush(stdin);
	printf("Ingresa la direccion: ");
	scanf("%[^\n}]s",&Mascota.direccion);
	
	
	printf("--------------------------------------\n");
	printf("El nombre de la mascota es: %s",Mascota.nombre);
	printf("\nSexo: %s",Mascota.sexo);
	printf("\nLa edad de la mascota es: %d",Mascota.edad);
	printf("\nEl noombre del duenio es: %s",Mascota.duenio);
	printf("\nLa direccion es: %s",Mascota.direccion);
}
