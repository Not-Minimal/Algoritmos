#include <stdio.h>
#include <ctype.h>
int i, j;
int main(int argc, char const *argv[])
{
    char palabra[5];
    char matriz[5][5;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5;j++)
        {
           printf("Ingrese palabra: ");
           scanf("%s", &palabra);
        }
        
    }
    for (i = 0; i < 5; i++) // Muestro la matriz con las palabras
    {
        for (j = 0; j < 5; j++)
        {
            printf("[%c] ", matriz[i][j]);
        }
        printf("\n");
    }

    // Convertir cada char a mayúscula
    // usando toupper
    for (int i = 0; cadena[i] != '\0'; ++indice)
    {
        cadena[indice] = toupper(cadena[indice]);
    }
    printf("Cadena despues de ser convertida: %s\n", cadena);
    return 0;
}