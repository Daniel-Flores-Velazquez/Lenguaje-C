/*Autor:Flores Velazquez Juan Daniel
		
  Fecha: 16-Marzo-2023*/

#include <stdio.h>
#include <stdlib.h>

//Estructura auto-referenciada
struct nodoPila{
	char dato; //Define un dato como entero
	struct nodoPila *ptrSiguiente; //Apuntador a nodoPila
}; //Fin de la estructura nodoPila

typedef struct nodoPila NodoPila; //Sinonimo de la estructura nodoPila
typedef NodoPila *ptrNodoPila; //Sinonimo para NodoPila

//Prototipos
void empujar (ptrNodoPila *ptrCima, char info);
void sacar (ptrNodoPila *ptrCima,char valorElim);
int estaVacia (ptrNodoPila ptrCima);
void imprimePila (ptrNodoPila ptrActual);
void instrucciones ( void );

//La funcion main comienza la ejecucion del programa
int main(){
	
	ptrNodoPila ptrPila = NULL; //Apunta al tope de la pila
	int eleccion; //Eleccion de menu del usuario
	char valor; //entrada entero del usuario
	
	instrucciones(); //Despliega el menu
	printf("\t\t\t");
	scanf("%d", &eleccion);
	
	//Mientras el usuario no ingrese 3
	while (eleccion != 3){
		switch (eleccion){
			case 1: //Empuja el valor dentro de la pila
				printf("Introduzca una letra: ");
				scanf("%s",&valor);
				empujar (&ptrPila, valor);
				imprimePila (ptrPila);
				break;
			case 2: //Saca el valor de la pila
				if(!estaVacia(ptrPila)){ //Si la pila no esta vacia
					imprimePila(ptrPila);
					printf("Salio el ultimo caracter agregado\n\n");
					sacar(&ptrPila,valor);
				} //Fin del if
				imprimePila(ptrPila);
				break;
			} //Fin del switch
		system("pause");
		system("cls");
		instrucciones();
		printf("\t\t\t");
		scanf("%d",&eleccion);
	} //Fin del while
	printf("\n\tFin del programa");
	return 0; //Indica terminacion exitosa
} //Fin del main

//Despliega las instrucciones del programa para el usuario
void instrucciones(void){
	printf("\t\t\tPrograma para almacenar datos en una pila\n\n");
	printf("Introduzca una eleccion\n");
	printf("1.-Empujar un valor dentro de la pila\n2.-Sacar un valor de la pila\n3.-Salir\n");
} //Fin de la funcion de instrucciones

//Inserta un nodo en la cima de la pila
void empujar(ptrNodoPila *ptrCima, char info){
	ptrNodoPila ptrNuevo; //Apuntador al nuevo nodo
	ptrNuevo =(nodoPila*) malloc(sizeof(NodoPila));
	
	//Inserta el nodo en la cima de la pila
	if(ptrNuevo != NULL){
		ptrNuevo->dato = info;
		ptrNuevo->ptrSiguiente = *ptrCima;
		*ptrCima = ptrNuevo;
	}else{
		printf("%c no se inserto, memoria insifuciente\n", info);
	}
} //Fin de la funcion empujar

//Elimina un nodo de la cima de la pila
void sacar( ptrNodoPila *ptrCima,char valorElim){
	
	ptrNodoPila ptrTemp; //Apuntador a un nodo temporal
	//char valorElim; //valor del nodo
	
	ptrTemp = *ptrCima;
	valorElim = (*ptrCima)->dato;
	*ptrCima = (*ptrCima)->ptrSiguiente;
	free(ptrTemp);
	
	//return valorElim;
} //Fin de la funcion sacar

//Imprime la pila
void imprimePila(ptrNodoPila ptrActual){
	
	//Si la pila esta vacia
	if(ptrActual == NULL){
		printf("La pila esta vacia\n\n");
	}else{
		printf("La pila es:\n");
		
		//Mientras no sea el final de la pila
		while(ptrActual != NULL){
			printf("%c -> ", ptrActual->dato);
			ptrActual = ptrActual->ptrSiguiente;
		} //Fin del while
		printf("NULL\n\n");
	}
} //Fin de la funcion imprimePila

//Devuelve 1 si la pila esta vacia, de lo contrario 0
int estaVacia(ptrNodoPila ptrCima){
	return ptrCima == NULL;
} //Fin de la funcion estaVacia
