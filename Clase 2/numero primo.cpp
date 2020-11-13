#include <stdio.h>


int main(){
	int a,b=0,i;
	printf("Programa para comprobar si un numero es primo o no.\n\n");
	printf("Ingrese un numero : \n");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		if(a%i==0){
			b++;
		}
	}
	if(b==2){
		printf("Es un numero primo\n");
	}
	else{
		printf("El numero no es primo\n");
	}
	
	return 0;
}
