#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int i, j, k, filas = 10, columnas = 10, n, cantidadPalabras, posicionPalabra;
char palabra[10];
char matriz[35][35];

int menuPrincipal()
{
    int opcion;
    do
    {
        printf("Opciones: \n");
        printf("1. Crear Sopa de Letras\n");
        printf("2. Salir \n");
        printf("Ingrese la opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
        {
            do
            {
                printf("Ingrese el tamaño de la Sopa de Letras con Rango [10,35]: ");
                scanf("%d", &n);
            } while (n < 10 || n > 35);
            filas = n;
            columnas = n;
            return 1;
        }
        break;
        case 2:
        {
            printf("Gracias :) \n");
            return 2;
        }
        break;
        }

    } while (opcion < 1 && opcion > 2 && opcion != 2);
}

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
    if (matriz[i][j] == 32)
    {
        for (int i = strlen(palabra) - 1; i >= 0; i--)
        {
            matriz[f][c + k] = palabra[i];
            k++;
        }
    }
}

void pasarVertical(char palabra[], int f, int c)
{
    if (matriz[i][j] == 32)
    {
        for (int i = 0; i < strlen(palabra); i++)
        {
            matriz[f + i][c] = palabra[i];
        }
    }
}
void pasarVerticalInverso(char palabra[], int f, int c)
{

    int k = 0;

    if (matriz[i][j] == 32)
    {
        for (int i = strlen(palabra) - 1; i >= 0; i--)
        {
            matriz[f + k][c] = palabra[i];
            k++;
        }
    }
}

void visualizarMatriz()
{

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("[%c]  ", matriz[i][j]);
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
void rellenarMatriz()
{

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            if (matriz[i][j] == 32)
            {
                matriz[i][j] = rand() % 26 + 65;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    system("cls");
    int opcion;
    opcion = menuPrincipal();

    if (opcion == 1)
    {
        generarMatriz();

        do
        {
            printf("Ingrese la cantidad de palabras: ");
            scanf("%d", &cantidadPalabras);
            k = cantidadPalabras;
        } while (k < (n / 2) || k > (2 * n));

        char palabra[n];

        for (cantidadPalabras = 0; cantidadPalabras < k; cantidadPalabras++)
        {
            do
            {
                printf("Ingrese palabra N°%d: ", cantidadPalabras + 1);
                printf("\n");
                scanf("%s", palabra);
            } while ((strlen(palabra) < 1) || (strlen(palabra) > n));

            srand(time(NULL));
            int x, y;

            x = rand() % filas;
            y = rand() % columnas;
            opcion = 4; //(rand() % 4) + 1;

            switch (opcion)
            {
            case 1:
            {
                for (i = 0; i < n; i++)
                {
                    if (y + strlen(palabra) >= 0)
                    {
                        pasarHorizontal(palabra, x, y);
                    }
                }

                visualizarMatriz();
                break;
            }

            case 2:
            {
                printf("%d \n%d \n", x, y);
                if (strlen(palabra) + y >= 0)
                {
                    pasarHorizontalInverso(palabra, x, y);
                } else if (strlen(palabra) - y <= 0)
                {
                    pasarHorizontalInverso("X", x, y);
                }
                visualizarMatriz();
                break;
            }
            case 3:
            {
                if (x + strlen(palabra) >= 0)
                {
                    pasarVertical(palabra, x, y);
                }
                visualizarMatriz();
                break;
            }

            case 4:
            {
                if (strlen(palabra) + y >= 0)
                {
                    pasarVerticalInverso(palabra, x, y);
                }
                visualizarMatriz();
                break;
            }
            }
        }
        // visualizarMatriz();
    }
    return 0;
}