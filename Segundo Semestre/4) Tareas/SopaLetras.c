/* Generar matriz cuadrada y determinar cuanto toma al usuario hasta encontrar la palabra.
Solo tengo hecha la situacion donde se encuentra la palabra pero que no busca realmente
dentro de la matriz.
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int n, i, j, k, filas, columnas, opcion, palabras;

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
                printf("1. Crear Sopa de Letras en blanco\n");
                printf("2. Agregar palabras a la Matriz de forma aleatoria \n");
                printf("3. Rellenar espacios vacios con letras aleatorias \n");
                printf("Ingrese la opcion: ");
                scanf("%d", &opcion);

                switch (opcion)
                {
                case 1:
                {
                    system("Clear");
                    do
                    {
                        printf("Ingrese el tamaño de la Sopa de Letras con rango [10,35]: ");
                        scanf("%d", &n);
                    } while (n < 10 || n > 35);

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

                    // Validacion para ingreso cantidad de palabras
                    do
                    {
                        printf("Ingrese la cantidad de palabras: ");
                        scanf("%d", &palabras);
                        k = palabras;
                    } while (k < (n / 2) || k > (2 * n));

                    char palabra[n];
                    for (i = 0; i < k; i++)
                    {
                        do
                        {
                            printf("Ingrese la palabra N° %d", i + 1);
                            printf("\n");
                            scanf("%s", palabra);
                        } while ((strlen(palabra) > n) || (strlen(palabra) < 5));

                        for (j = 0; j < k && palabra[j] != NULL; j++)
                        {
                            matriz[i][j] = palabra[j];
                        }
                        for (i = 0; i < filas; i++) // Relleno el arreglo desde la posicion 0 hasta n-1
                        {
                            for (j = 0; j < columnas; j++)
                            {
                                printf("[%c] ", matriz[i][j]);
                            }
                            printf("\n");
                        }
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
