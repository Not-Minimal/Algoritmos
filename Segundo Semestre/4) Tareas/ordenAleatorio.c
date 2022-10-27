#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int i, j, k, filas = 10, columnas = 10, n, cantidadPalabras;
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
    if (strlen(palabra) - f >= 0)
    {
        for (int i = 0; i < strlen(palabra); i++)
        {
            matriz[f][c + i] = palabra[i];
        }
    }
}

void pasarHorizontalInverso(char palabra[], int f, int c)
{
    if (strlen(palabra) - f <= 0)
    {
        int k = 0;

        for (int i = strlen(palabra) - 1; i >= 0; i--)
        {
            matriz[f][c + k] = palabra[i];
            k++;
        }
    }
}

void pasarVertical(char palabra[], int f, int c)
{
    if (strlen(palabra) - c >= 0)
    {
        for (int i = 0; i < strlen(palabra); i++)
        {
            matriz[f + i][c] = palabra[i];
        }
    }
}
void pasarVerticalInverso(char palabra[], int f, int c)
{
    if (strlen(palabra) - c <= 0)
    {
        int k = 0;

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

        // Crear mas matrices para trabajar el tamaño de las palabras
        // Ingreso de palabras donde el tamaño de la palabra
        char palabra[n];

        for (int cantidadPalabras = 0; cantidadPalabras < k; cantidadPalabras++)
        {
            printf("Ingrese palabra N°%d: ", cantidadPalabras + 1);
            printf("\n");
            scanf("%s", palabra);
            srand(time(NULL));
            int x, y;

            x = rand() % filas;
            y = rand() % columnas;
            opcion = (rand() % 4) + 1;
            switch (opcion)
            {
            case 1:
            {
                pasarHorizontal(palabra, x, y);
                break;
            }
            case 2:
            {
                pasarHorizontalInverso(palabra, x, y);
                break;
            }
            case 3:
            {
                pasarVertical(palabra, x, y);
                break;
            }
            case 4:
            {
                pasarVerticalInverso(palabra, x, y);
                break;
            }
            }
        }

        rellenarMatriz();
        visualizarMatriz();
    }

    return 0;
}