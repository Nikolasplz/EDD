#include<stdio.h>

int numero1,numero2,numero3;


int main(){
	printf("Programa que comprueba el numero mayor entre 3 numeros.\n\n");
	printf("ingrese 3 numeros (a b c):");
	scanf("%d %d %d",&numero1,&numero2,&numero3);
	
	if(numero1 > numero2 && numero1 > numero3){
		printf("el numero mayor es : %d",numero1);
		
	}
	else if(numero2 > numero1 && numero2 > numero3){
		printf("el numero mayor es : %d",numero2);
	}
	else{
		printf("el numero mayor es : %d",numero3); 
	}
	
	
	return 0;
}
