/* Generar matriz cuadrada y determinar cuanto toma al usuario hasta encontrar la palabra.
Solo tengo hecha la situacion donde se encuentra la palabra pero que no busca realmente
dentro de la matriz.
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int n, i, j, k, filas, aux, columnas, opcion, palabras;

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

                    // Crear mas matrices para trabajar el tamaño de las palabras
                    // Ingreso de palabras donde el tamaño de la palabra
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
                            matriz[i][j] = toupper(palabra[j]);
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

                    do
                    {
                        printf("¿Desea rellenar los espacios blancos con caracteres aleatorios? \n");
                        printf("1. Si \n");
                        printf("2. No \n");
                        printf("Ingrese la opcion: ");
                        scanf("%d", &opcion);

                        switch (opcion)
                        {
                        case 1:
                        {
                            for (i = 0; i < filas; i++) // Relleno el arreglo desde la posicion 0 hasta n-1
                            {
                                for (j = 0; j < columnas; j++)
                                {
                                    if (matriz[i][j] == 32)
                                    {
                                        matriz[i][j] = rand() % 26 + 65;
                                    }
                                    
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
                            break;
                        }
                        case 2:
                        {
                            printf("Matriz Generada\n");
                            for (i = 0; i < filas; i++) // Muestro la matriz con las palabras
                            {
                                for (j = 0; j < columnas; j++)
                                {
                                    printf("[%c] ", matriz[i][j]);
                                }
                                printf("\n");
                            }
                        }
                        }
                    } while (opcion < 1 && opcion > 2);

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
