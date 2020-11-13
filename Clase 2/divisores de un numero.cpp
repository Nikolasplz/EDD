#include <stdio.h>

int main(){
	
	int numero;
	int i;
	
	do{
		printf("Este programa comprueba todos los posibles divisores de un numero.\n\n");
		printf("Introduce un numero: ");
		scanf("%d",&numero);
		
	}while(numero<=0);
	
	for(i=1; i<=numero/2;i++){
		if(numero % i == 0){
			printf("%d\n",i);
		}
	}
		
		printf("%d",numero);
	
	
	
	return 0;
}
