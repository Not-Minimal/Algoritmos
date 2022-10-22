#include <stdio.h>
#include <ctype.h>
 
int main(int argc, char const *argv[])
{
	char cadena[] = "Hola mundo, esto va a ser convertido a mayuscula. parzibyte.me";
	printf("Cadena original: %s\n", cadena);
 
	// Convertir cada char a mayúscula
	// usando toupper
	for (int indice = 0; cadena[indice] != '\0'; ++indice){
		cadena[indice] = toupper(cadena[indice]);
	}
	printf("Cadena despues de ser convertida: %s\n", cadena);
	return 0;
}