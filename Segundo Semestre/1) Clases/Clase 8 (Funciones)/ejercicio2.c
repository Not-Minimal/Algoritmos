#include <stdio.h>
#include <string.h>
#include <ctype.h>

int i, j, k, filas = 10, columnas = 10, n, cantidadPalabras, posicionPalabra;
char palabra[10];
char matriz[35][35];

void cadenas(char palabra[], int f, int c)
{
    if (matriz[i][j] == 32)
    {
        for (int i = 0; i < strlen(palabra); i++)
        {
            matriz[f][c + i] = palabra[i];
        }
    }
}

int main(int argc, char const *argv[])
{
    system("Clear");
    for (i = 0; i < 2; i++)
    {
        printf("Ingrese palabra N°%d: ", cantidadPalabras + 1);
        printf("\n");
        scanf("%s", palabra);

        cadenas(palabra);
    }

    return 0;
}