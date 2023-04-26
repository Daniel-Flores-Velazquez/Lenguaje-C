#include <iostream>

using namespace::std;

struct Alumno{
	char Nombre[10];
	char Boleta[10];
	int Edad;
	struct Alumno *siguiente;
	struct Alumno *atras;
} ;

struct Alumno *primero, *ultimo;

void insertarAlumno();
void desplegarListaPU();
void desplegarListaUP();

int main(){
	int op;
	char menu;
	do{
		system("cls");
		printf("\t\t\tListas doblemente enlazadas de alumnos");
		printf("\n1.-Agregar Alumno\n2.-Mostrar lista del primero al ultimo\n3.-Mostrar lista del ultimo al primero\n4.-Salir\n\nSelecciona una opcion: ");
		scanf("%d",&op);
		switch(op){
			case 1:
				system("cls");
				insertarAlumno();
				break;
			case 2:
				system("cls");
				printf("Lista de Alumnos del primero al ultimo\n");
				desplegarListaPU();
				break;
			case 3:
				system("cls");
				printf("Lista de Alumnos del ultimo al primero\n");
				desplegarListaUP();
				break;
			case 4:
				system("cls");
				printf("\n\n\n\t\t\t\t--------------------");
				printf("\n\t\t\t\t| Fin del programa |");
				printf("\n\t\t\t\t--------------------\n\n\n");
				exit(1);
				break;
			default:
				printf("Opcion no valida");
				break;
		}
		printf("\n\nDeseas regresar al menu principal s/n: ");
		scanf("%s",&menu);
	}while((menu=='s')||(menu=='S'));
}

void insertarAlumno(){
	Alumno *inicio = new Alumno();
	cout << "Ingresa los siguientes datos:\n";
	printf("\n Nombre: ");
	scanf("%s",&inicio->Nombre);
	printf("\n Boleta: ");
	scanf("%s",&inicio->Boleta);
	printf("\n Edad: ");
	scanf("%d",&inicio->Edad);
	if(primero==NULL){
		primero = inicio;
		primero->siguiente = NULL;
		primero->atras = NULL;
		ultimo = primero;
	}else{
		ultimo->siguiente = inicio;
		inicio->siguiente = NULL;
		inicio->atras = ultimo;
		ultimo = inicio;
	}
	printf("\n Alumno Ingresado\n\n");
}

void desplegarListaPU(){
	int i=1;
	Alumno *actual = new Alumno();
	actual = primero;
	if(primero!=NULL){
		while(actual!=NULL){
			printf("\n%d.- ",i);
			printf("Nombre: %s", actual->Nombre); 
			printf("\nBoleta: %s", actual->Boleta); 
			printf("\nEdad: %d\n", actual->Edad); 
			actual = actual->siguiente;
			i++;
		}
	}else{
		printf("\n La listas se encuentra Vacia\n\n");
	}
}

void desplegarListaUP(){
	int i=1;
	Alumno* actual = new Alumno();
	actual = ultimo;
	if(primero!=NULL){
		while(actual!=NULL){
			printf("\n%d.- ",i);
			printf("Nombre: %s", actual->Nombre); 
			printf("\nBoleta: %s", actual->Boleta); 
			printf("\nEdad: %d\n", actual->Edad);  
			actual = actual->atras;
			i++;
		}
	}else{
		printf("\n La listas se encuentra Vacia\n\n");
	}
}
