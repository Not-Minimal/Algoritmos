#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int i, j, filas = 10, columnas = 10, n;
char palabra[10];
char matriz[10][10];

void pasarHorizontal(char palabra[], int f, int c)
{
    for (int i = 0; i < strlen(palabra); i++)
    {
        matriz[f][c + i] = palabra[i];
    }
}

void pasarHorizontalInverso(char palabra[], int f, int c)
{
    int k = 0;

    for (int i = strlen(palabra) - 1; i >= 0; i--)
    {
        matriz[f][c + k] = palabra[i];
        k++;
    }
}

void pasarVertical(char palabra[], int f, int c)
{

    for (int i = 0; i < strlen(palabra); i++)
    {
        matriz[f + i][c] = palabra[i];
    }
}
void pasarVerticalInverso(char palabra[], int f, int c)
{
    int k = 0;

    for (int i = strlen(palabra) - 1; i >= 0; i--)
    {
        matriz[f + k][c] = palabra[i];
        k++;
    }
}

void visualizaerMatriz()
{

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("[%c]", matriz[i][j]);
        }
        printf("\n");
    }
}

void generarMatriz()
{

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j] = 32;
        }
    }
}

int main(int argc, char const *argv[])
{
    int cantidadPalabras = 0;
    generarMatriz();
    while (cantidadPalabras != 5)
    {

        printf("Ingrese palabra: ");
        printf("\n");
        scanf("%s", palabra);
        srand(time(NULL));
        int x, y;

        x = rand() % filas;
        y = rand() % columnas;
        pasarVerticalInverso(palabra, x, y);
        visualizaerMatriz();
        cantidadPalabras += 1;
    }
    return 0;
}
