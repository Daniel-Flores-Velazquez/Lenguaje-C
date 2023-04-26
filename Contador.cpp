#include <stdio.h>

int main(){
	int i, j, k, l, contador,num;
	
	printf("Ingresa el numero de repeticiones: ");
	scanf("%d",&contador);
	
	for(i=0; i<contador ; i++){
		printf("Ingresa numero: ");
		scanf("%d",&num);
		if(num<0){
			j++;
			}else if(num==0){
				k++;
				}else{
					l++;
					}
	}
	printf("\nHay %d numeros menores a 0",j-1);
	printf("\nHay %d numeros iguales a 0",k);
	printf("\nHay %d numeros mayores a 0",l);
}
