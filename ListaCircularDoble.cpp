#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Alumno {
    char nombre[10];
    struct Alumno* siguiente;
    struct Alumno* anterior;
};

struct Alumno* inicio = NULL;
struct Alumno* fin = NULL;

void crearLista() {
    printf("Creando lista\n");
    printf("Ingresa los siguientes datos:\n");
    if (inicio == NULL) {
        inicio = (struct Alumno*)malloc(sizeof(struct Alumno));
        printf("Nombre: ");
        scanf("%s", inicio->nombre);
        inicio->siguiente = inicio;
        inicio->anterior = inicio;
        fin = inicio;
    } else {
        printf("La lista ya existe\n");
    }
}

void agregarElementos() {
    if (fin == NULL) {
        printf("No se ha creado la lista\n");
    } else {
        fin->siguiente = (struct Alumno*)malloc(sizeof(struct Alumno));
        fin->siguiente->anterior = fin;
        fin = fin->siguiente;
        printf("Nombre: ");
        scanf("%s", fin->nombre);
        fin->siguiente = inicio;
        inicio->anterior = fin;
    }
}

void mostrarListaPU() {
    struct Alumno* actual = inicio;
    printf("\t\t\tLista de alumnos del primero al ultimo\n");
    if (inicio == NULL) {
        printf("No hay lista");
    } else {
        do {
            printf("%s -> ", actual->nombre);
            actual = actual->siguiente;
        } while (actual != inicio);
        printf("\nLista completa\n");
    }
}

void mostrarListaUP() {
    struct Alumno* actual = fin;
    printf("\t\t\tLista de alumnos del ultimo al primero\n");
    if (inicio == NULL) {
        printf("No hay lista");
    } else {
        do {
            printf("%s -> ", actual->nombre);
            actual = actual->anterior;
        } while (actual != fin);
        printf("\nLista completa\n");
    }
}

int main() {
    char opcion;
    printf("\t\t\tPrograma para trabajar con una lista circular doblemente ligada\n\n");
    crearLista();
    do {
        agregarElementos();
        printf("Deseas agregar otro alumno s/n: ");
        scanf(" %c", &opcion);
    } while ((opcion == 's') || (opcion == 'S'));
    system("cls");
    mostrarListaPU();
    mostrarListaUP();
    return 0;
}

