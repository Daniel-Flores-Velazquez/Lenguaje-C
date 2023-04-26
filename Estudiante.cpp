/*Autor: Flores Velazquez Juan Daniel
		 
  Fecha: 22-Febrero-2023*/

#include <stdio.h>

typedef struct{
	char nombre[50];
	char sexo[10];
	int edad;
	char celular[11];
	char carrera[50];
} fichaEstudiante;

int main(){
	
	fichaEstudiante Estudiante;
	
	printf("\t\t\tPrograma para guardar y mostrar datos de un estudiante\n\n");
	printf("Ingresa el nombre del estudiante: ");
	scanf("%[^\n]s",&Estudiante.nombre);
	fflush(stdin);
	printf("Sexo: ");
	scanf("%s",&Estudiante.sexo);
	fflush(stdin);
	printf("Ingrese la edad del estudiante: ");
	scanf("%d",&Estudiante.edad);
	fflush(stdin);
	printf("Ingrese el celular del estudiante: ");
	scanf("%[^\n]s",&Estudiante.celular);
	fflush(stdin);
	printf("Ingresa la carrera del estudiante: ");
	scanf("%[^\n]s",&Estudiante.carrera);
	
	printf("--------------------------------------\n");
	printf("El nombre del estudiante es: %s",Estudiante.nombre);
	printf("\nSexo: %s",Estudiante.sexo);
	printf("\nLa edad del estudiante es: %d",Estudiante.edad);
	printf("\nEl celular del estudiante es: %s",Estudiante.celular);
	printf("\nLa carrera del estudiante es: %s",Estudiante.carrera);
}
