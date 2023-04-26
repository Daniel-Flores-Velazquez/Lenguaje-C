#include <stdio.h>

int main(){
	char letras[]={'a','b','c','d','e','f','g','h','i','j','k','l','m'
					,'n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int i;
	printf("Programa para mostrar las letras del abecedario\n");
	for(i=0; i<26;i++){
			printf("%c, ",letras[i]);
	}
	/*No funciona por que el tamaño del arreglo no es el mismo que el total
	  de las letras*/
}
