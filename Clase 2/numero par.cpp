#include<stdio.h>

int numero1;

int main(){
	printf("Programa que verifica si el numero ingresado es par o no.\n\n");
	printf("escriba un numero : ");
	scanf("%d",&numero1);
	
	if(numero1 % 2== 0){
		printf("su numero es par.");
	}
	else{
		printf("su numero no es par.");
	}
	
	
	return 0;
}
