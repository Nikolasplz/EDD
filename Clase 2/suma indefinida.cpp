#include <stdio.h>

int main(){

int numero;
int suma=0;

do{
printf("Este programa lee numeros indefinidamente hasta que aparece un 0.\n");
printf("Al ingresar un 0, suma todos los numeros ingresados posteriormente y finaliza el programa.\n\n");
printf("ingrese un numero: \n\n");

scanf("%i",&numero);
suma+=numero;
}while (numero!=0);
printf ("Suma= %i\n",suma);
printf("El programa ha finalizado.\n");

return 0;
}
