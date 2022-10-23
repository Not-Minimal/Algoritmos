#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int i, j, filas, columnas, n;
int filas = 10;
int columnas = 10;
char palabra[10];

void pasarHorizontal(char matriz[filas][columnas], char palabra[], int f, int c)
{

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j] = 32;
        }
    }

    for (int i = 0; i < strlen(palabra); i++)
    {
        matriz[f][c + i] = palabra[i];
    }
}

void pasarHorizontalInverso(char matriz[filas][columnas], char palabra[], int f, int c)
{
    int k = 0;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j] = 32;
        }
    }

    for (int i = strlen(palabra) - 1; i >= 0; i--)
    {
        matriz[f][c + k] = palabra[i];
        k++;
    }
}

void pasarVertical(char matriz[filas][columnas], char palabra[], int f, int c)
{

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j] = 32;
        }
    }

    for (int i = 0; i < strlen(palabra); i++)
    {
        matriz[f + i][c] = palabra[i];
    }
}
void pasarVerticalInverso(char matriz[filas][columnas], char palabra[], int f, int c)
{
    int k = 0;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j] = 32;
        }
    }

    for (int i = strlen(palabra) - 1; i >= 0; i--)
    {
        matriz[f + k][c] = palabra[i];
        k++;
    }
}

void visualizaerMatriz(char matriz[filas][columnas])
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

int main(int argc, char const *argv[])
{
    char matriz[filas][columnas];
    printf("Ingrese palabra: ");
    printf("\n");
    scanf("%s", palabra);
    srand(time(NULL));
    pasarVerticalInverso(matriz, palabra, rand() % filas, rand() % columnas);
    visualizaerMatriz(matriz);
    return 0;
}
