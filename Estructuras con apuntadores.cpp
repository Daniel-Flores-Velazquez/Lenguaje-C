/*Autor:Flores Velazquez Juan Daniel
		
  Fecha: 21-Febrero-2023*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
# define MAX_ALUMNOS 10

using namespace std;
struct Alumno{
	char nombre[10];
	char paterno[15];
	char materno[15];
	int edad;
};

Alumno *alumnos[MAX_ALUMNOS];
    int num_alumnos = 0;

int main(){
	
	int op,i;
	
	
	do{
		system("cls");
		printf("\t\t\tPrograma para trabajar estructuras por medio de apuntadores\n");
		printf("\n\t\t\tMenu:\n1.-Agregar Alumno\n2.-Mostrar Alumnos\n3.-Borrar Alumno\n4.-Buscar Alumno\n5.-Magic Option\n6.-Salir\nSelecciona la opcion deseada:\t");
		scanf("%d",&op);
		switch(op){
			case 1:
				// Agregar un nuevo alumno
                if(num_alumnos < MAX_ALUMNOS) {
                    alumnos[num_alumnos] = (Alumno*) malloc(sizeof(Alumno));
                    printf("Ingrese el nombre del alumno: ");
                    scanf("%s", alumnos[num_alumnos]->nombre);
                    printf("Ingrese el apellido paterno del alumno: ");
                    scanf("%s", alumnos[num_alumnos]->paterno);
                    printf("Ingrese el apellido materno del alumno: ");
                    scanf("%s", alumnos[num_alumnos]->materno);
                    printf("Ingrese la edad del alumno: ");
                    scanf("%d", &alumnos[num_alumnos]->edad);
                    num_alumnos++;
                } else {
                    printf("No se pueden agregar mas alumnos\n");
                    system("pause");
                }
                break;
			case 2:
				// Mostrar lista de alumnos
                printf("Lista de alumnos:\n");
                for(int i = 0; i < num_alumnos; i++) {
                    printf("%d.",i+1);
				cout<<alumnos[i]->nombre;
				cout<< " "<< alumnos[i]->paterno;
				cout<< " "<< alumnos[i]->materno;
				cout<< " "<< alumnos[i]->edad<<"\n\n";
                }
                system("pause");
                break;
			case 3:				
				char nombre[30];
			    printf("Ingresa el nombre a borrar: \n");
			    scanf("%s", nombre);
			    for(int i = 0; i < 10; i++){
			        if(strcmp(alumnos[i] -> nombre, nombre) == 0){
			            strcpy(alumnos[i] -> nombre, "");
			            strcpy(alumnos[i] -> paterno, "");
			            strcpy(alumnos[i] -> materno, "");
			            alumnos[i] -> edad = NULL;
			            printf("Persona borrada\n");
			            break;
			        }
			    }
			    if(i == 10){
			        printf("Persona no encontrada\n");
			    }
			    system("pause");
				break;
			case 4:
				char nombre1[30];
			    printf("Ingresa el nombre a buscar: \n");
			    scanf("%s", nombre1);
			    for(int i = 0; i < 10; i++){
			        if(strcmp(alumnos[i] -> nombre, nombre1) == 0){
			            cout<<"\n"<<alumnos[i]->nombre;
						cout<< " "<< alumnos[i]->paterno;
						cout<< " "<< alumnos[i]->materno;
						cout<< " "<< alumnos[i]->edad<<"\n\n";
			            break;
			        }
			    }
			    if(i == 10){
			        printf("Persona no encontrada\n");
			    }
			    system("pause");
				break;
			case 5:
				
				break;
			case 6:
				printf("Hasta luego");
				break;
			default:
				printf("Opcion Incorrecta, vuelve a intentarlo\n");
				system("pause");
				break;
		}
	}while(op != 6);
	

}

/*bool validarApellido(){
	string palabra;
    int contadorVocales = 0;
    
    for (char letra : alumnos[num_alumnos]->paterno) {
        char letraMinuscula = tolower(letra);
        if (letraMinuscula == 'a' || letraMinuscula == 'e' || letraMinuscula == 'i' || letraMinuscula == 'o' || letraMinuscula == 'u') {
            contadorVocales++;
        }
    }
    if (contadorVocales >= 2) {
        return true;
    } else {
        return false;
    }
	
}*/
