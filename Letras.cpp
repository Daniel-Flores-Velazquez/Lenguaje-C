#include <stdio.h>
#include <stdlib.h>

int main(){
	char letra;
	printf("Programa para ver si es vocal o no\n");
	while(letra =='\0'){
		printf("\nIngrese una letra: ");	
		scanf("%s",&letra);
		if((letra=='a')||(letra=='e')||(letra=='i')||(letra=='o')||(letra=='u')){
			printf("\nEs una vocal");
		}else{
			printf("\nNo es una vocal");
		}
	}
}
