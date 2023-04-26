#include <stdio.h>

int main(){
	int N, pares[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23
					,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42};
	printf("Programa para mostrar numeros pares en un arreglo\n");
	for(N=0; N<40;N++){
		if(pares[N]%2 ==0){
			printf("%d\n",pares[N]);
		}
	}
}
