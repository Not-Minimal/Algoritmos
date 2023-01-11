#include <stdio.h>
#include <stdlib.h>
//Definimos que el tamaño de N sea 5.
#define Filas 5
#define Columnas 5
int main()
{
    // Crear una matriz que represente un grafico
    int grafo[Filas][Columnas];
    // Inicializar La matriz de Adyacencia en 0
    for (int i = 0; i < Filas; i++)
    {
        for (int j = 0; j < Columnas; j++)
        {
            grafo[i][j] = 0;
        }
    }
    // Agregar Bordes Aleatorios entre los vertices
    for (int i = 0; i < Filas; i++)
    {
        for (int j = i + 1; j < Columnas; j++)
        {
            if (rand() < RAND_MAX / 2)
            {
                grafo[i][j] = 1;
                grafo[j][i] = 1;
            }
        }
    }
    // Imprimir el grafo
    for (int i = 0; i < Filas; i++)
    {
        for (int j = 0; j < Columnas; j++)
        {
            printf("%d ", grafo[i][j]);
        }
        printf("\n");
    }
    return 0;
}
