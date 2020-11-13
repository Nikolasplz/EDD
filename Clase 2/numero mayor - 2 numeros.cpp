#include<stdio.h>

int numero1,numero2;

int main(){
	printf("Programa para comprobar el numero mayor entre 2 numeros.\n\n");
	printf("ingrese 2 numeros (a b) :\n");
	scanf("%d %d",&numero1,&numero2);
	 
	 if(numero1 > numero2){
	 	
	 	printf("el numero mayor es : %d",numero1);
	 }
	else if(numero1 < numero2){
		printf("el numero mayor es :%d",numero2);
	}
	else{
		printf("los numeros son iguales");
	}
	
	
	return 0;
}
