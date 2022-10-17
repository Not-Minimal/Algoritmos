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

        do
        {
            printf("Opciones: \n");
            printf("1. Matriz en Blanco \n");
            printf("2. Agregar palabras a la Matriz de forma aleatoria \n");
            printf("3. Rellenar espacios vacios con letras aleatorias \n");
            printf("4. Comenzar busqueda \n");
            printf("5. Resultados \n");
            printf("Ingrese la opcion: ");
            scanf("%d", &opcion);

            switch (opcion)
            {
            case 1:
            {
                inicio = clock();
                system("Clear");
                printf("Ingrese el tamaño de la Sopa de Letras ");
                scanf("%d", &n);
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
                printf("Agregar palabras a la matriz \n");
                break;
            }
            case 3:
            {
                printf("Rellenar espacios vacios con letras aleatorias \n");
                break;
            }
            case 4:
            {
                printf("Comenzar busqueda \n");
                break;
            }
            case 5:
            {
                printf("Los resultados son: \n");
                break;
            }
            }
        } while (opcion < 1 && opcion > 2);

    } while (opcion < 1 && opcion > 2);

    return 0;
}
