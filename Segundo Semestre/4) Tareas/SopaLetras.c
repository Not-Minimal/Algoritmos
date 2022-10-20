/* Generar matriz cuadrada y determinar cuanto toma al usuario hasta encontrar la palabra.
Solo tengo hecha la situacion donde se encuentra la palabra pero que no busca realmente
dentro de la matriz.
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int n, i, j, filas, columnas, opcion;
int main(int argc, char const *argv[])
{
    // Variables Tiempo
    time_t t;
    clock_t inicio, fin;
    double tiempo;

    do
    {
        printf("Bienvenido a LetterSoap: ");
        printf("\n");
        printf("1. Crear una Sopa de Letras de Tamaño NxN");
        printf("\n");
        printf("2. Salir");
        printf("\n");
        printf("Ingrese la opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
        {
            do
            {
                printf("Opciones: \n");
                printf("1. Matriz en Blanco \n");
                printf("2. Agregar palabras a la Matriz de forma aleatoria \n");
                printf("3. Rellenar espacios vacios con letras aleatorias \n");
                printf("Ingrese la opcion: ");
                scanf("%d", &opcion);

                switch (opcion)
                {
                case 1:
                {
                    inicio = clock();
                    system("Clear");

                    do
                    {
                        printf("Ingrese el tamaño de la Sopa de Letras con rango [10,35]");
                        scanf("%d", &n);
                    } while (n >= 10 || n <= 35);

                    filas = n;
                    columnas = n;
                    char matriz[filas][columnas];
                    srand(time(NULL));
                    for (i = 0; i < filas; i++) // Relleno el arreglo desde la posicion 0 hasta n-1
                    {
                        for (j = 0; j < columnas; j++)
                        {
                            matriz[i][j] = 32;
                        }
                    }
                    for (i = 0; i < filas; i++) // Relleno el arreglo desde la posicion 0 hasta n-1
                    {
                        for (j = 0; j < columnas; j++)
                        {
                            printf("[%c] ", matriz[i][j]);
                        }
                        printf("\n");
                    }
                    break;
                }
                case 2:
                {
                    printf("Agregar palabras de forma aleatoria");
                    break;
                }
                case 3:
                {
                    printf("Rellenar espacios vacios con letras aleatorias \n");
                    break;
                }
                }
            } while (opcion < 1 && opcion > 3);
        }
        break;

        case 2:
        {
            printf("Gracias :) \n");
        }
        break;
        }

    } while (opcion < 1 && opcion > 2);

    return 0;
}