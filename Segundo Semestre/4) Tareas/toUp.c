#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char palabra[n];
    for (i = 0; i < k; i++)
    {
        do
        {
            // Tamaño palabra en posicion (i + 1)
            printf("Ingrese la palabra N° %d", i + 1);
            printf("\n");
            scanf("%s", palabra);

        } while ((strlen(palabra) < 1) || (strlen(palabra) > n));
        aux = n;

        for (j = 0; j < aux && palabra[j] != '\0'; j++)
        {
            matriz[i][j] = palabra[j];
        }
    }
    for (i = 0; i < filas; i++) // Muestro la matriz con las palabras
    {
        for (j = 0; j < columnas; j++)
        {
            printf("[%c] ", matriz[i][j]);
        }
        printf("\n");
    }

    // Convertir cada char a mayúscula
    // usando toupper
    for (int indice = 0; cadena[indice] != '\0'; ++indice)
    {
        cadena[indice] = toupper(cadena[indice]);
    }
    printf("Cadena despues de ser convertida: %s\n", cadena);
    return 0;
}