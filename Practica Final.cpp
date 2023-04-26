/* Autor: Flores Velazquez Juan Daniel
	Fecha: 21-Marzo-2023
	Descripcion: Menu de Ordenamientos*/

#include <stdio.h>
#include <windows.h>
#define N 10

int i, j, k, clave, aux = 0, numeros[N];

void Agregar();
void MostrarLista();
void OrdenarIntercambio();
void OrdenarSeleccion();
void OrdenarInsercion();

int main(){
	int op;
	char opcion;
	
	do{
		system("cls");
		printf("\t\tPrograma para ordenar los datos del usuario de acuerdo al tipo de ordenamiento que desee\n\n");
		 Agregar();
		
		printf("\nSeleccione como desea ordenar los valores:\n");
		printf("\n1.-Ordenamiento por intercambio\n2.-Ordenamiento por Seleccion\n3.-Ordenamiento por Insercion\n4.-Salir\n\t\t\t\t");
		scanf("%d",&op);
		switch(op){
			case 1:
				printf("\t\t\tOrdenamiento por Intercambio\n");
				printf("Arreglo No Ordenado\n");
				MostrarLista();
				OrdenarIntercambio();
				printf("\nArreglo Ordenado\n");
				MostrarLista();
				
				break;
			case 2:
				printf("\t\t\tOrdenamiento por Seleccion\n");
				printf("Arreglo No Ordenado\n");
				MostrarLista();
				OrdenarSeleccion();
				printf("\nArreglo Ordenado\n");
				MostrarLista();
				
				break;
			case 3:
				printf("\t\t\tOrdenamiento por Insercion\n");
				printf("Arreglo No Ordenado\n");
				MostrarLista();
				OrdenarInsercion();
				printf("\nArreglo Ordenado\n");
				MostrarLista();
				
				break;
			case 4:
				
				break;
			default:
				
				break;
		}
		printf("\n\nDesea realizar otra operacion s/n: ");
		scanf("%s",&opcion);
	}while((opcion=='s')||(opcion=='S'));
	
}

void Agregar(){
	for(i=0; i<N; i++){
		printf("Agrega valor %d: ",i+1);
		scanf("%d",&numeros[i]);		
	}
}

void MostrarLista(){
	for(i=0; i<N; i++){ //Mostrar el arreglo ordenado
		printf("%d\t", numeros[i]);
	}
}

void OrdenarIntercambio(){
	for(i=0; i<N-1; i++){
		for(j=i+1; j<N; j++){
			if(numeros[i] > numeros[j]){
				aux = numeros[i];
				numeros[i] = numeros[j];
				numeros[j] = aux;
				
			}
		}
	}
}

void OrdenarSeleccion(){
	for (i = 1; i < N; i++){	   
		clave = *(numeros+i);
		j = i-1;
		while (j >= 0 && *(numeros+j) > clave){
			*(numeros+j+1) = *(numeros+j);
			j = j-1;
		}
		*(numeros+j+1) = clave;
	}    
}

void OrdenarInsercion(){
	for (i= 1 ; i< N ; i++) {
        j=i;
            while (j>= 0 && numeros[j]<numeros[j- 1 ]) {
                k=numeros[j];
                numeros[j]=numeros[j- 1 ];
                numeros[j- 1 ]=k;
                j--;
            }
    }
}
