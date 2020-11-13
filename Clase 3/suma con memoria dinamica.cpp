#include<stdio.h>

int numero1,numero2,*a,*b; // a y b son punteros






int main(){
	
	a = &numero1; 
    b = &numero2;

printf("Ingrese dos numeros: \n");
scanf("%d %d",&numero1,&numero2);

printf("el resultado es : %d\n",(*a + *b));

	
	
	
	return 0;
}
