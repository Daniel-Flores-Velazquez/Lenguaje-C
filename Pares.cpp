#include <stdio.h>

int main()
{
    int numero;
    printf("Programa para imprimir pares del 1 al 100\n");
    for ( numero = 2 ; numero <= 100 ; numero += 2 ){
        printf( "%d, ", numero );
    }
}
