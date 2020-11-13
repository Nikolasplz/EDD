#include <stdio.h>
#include <ctype.h>
 
int main(){
	printf("Programa para pasar de minuscula a mayuscula.\n\n");
	char cadena[] = "hola mundo chao mundo";
	printf("Cadena original: %s\n", cadena);
 
	// Convertir cada char a mayúscula
	// usando toupper
	for (int indice = 0; cadena[indice] != '\0'; ++indice){
		cadena[indice] = toupper(cadena[indice]);
	}
	printf("Cadena despues de ser convertida: %s\n", cadena);
	return 0;
}
