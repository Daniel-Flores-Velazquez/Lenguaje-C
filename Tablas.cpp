#include <stdio.h>

int main(){
	int num, mult,i;
	printf("De que tabla deseas saber su resultado: ");
	scanf("%d",&num);
	for(i=1; i<=10; i++){
		mult = i * num;
		printf("%d*%d=%d \n",num,i,mult);
		
		}
}
