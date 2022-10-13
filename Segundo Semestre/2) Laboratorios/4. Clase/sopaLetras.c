// Edades aleatorias y mayor o menor de edad del rango.
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int n, i, j, filas, columnas, opcion;
int main(int argc, char const *argv[])
{
    // Variables Tiempo
    time_t time;
    clock_t inicio, fin;
    double tiempo;

    do
    {
        printf("Opciones: ");
        printf("\n");
        printf("1. Crear una Sopa de Letras de Tamaño NxN");
        printf("\n");
        printf("2. Esconder una palabra");
        printf("\n");
        printf("3. Esconder dos palabras");
        printf("\n");
        printf("4. Salir");
        printf("\n");
        printf("Ingrese la opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
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
                    matriz[i][j] = rand() % 26 + 65;
                }
            }
            for (i = 0; i < filas; i++) // Relleno el arreglo desde la posicion 0 hasta n-1
            {
                for (j = 0; j < columnas; j++)
                {
                    printf("%c  ", matriz[i][j]);
                }
                printf("\n");
            }

            printf("Presione 1 si encontro la palabra: ");
            scanf("%d", &opcion);
            if (opcion)
            {
                fin = clock();
                tiempo = ((double)(fin - inicio)) / CLOCKS_PER_SEC;
                printf("El tiempo que tomo en encontrar la palabra es de: %.2f", tiempo);
                printf("\n");
            }
            break;
        }

    } while (opcion < 1 && opcion > 4);

    return 0;
}
