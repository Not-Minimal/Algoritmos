#include <stdio.h>
#include <stdlib.h>

// include turbose

// Variables Globales
int n, i, j, contador;

// Prototipos de Funciones
void rellenarMatriz();

int main()
{

    char matriz[10][10];

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            matriz[i][j] = ' ';
        }
    }
    matriz[0][0] = '*';

    contador = 0;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            while (contador < 5)
            {
                if (matriz[i][j] == ' ')
                {
                    matriz[i][j] = 'O';
                    contador++;
                }
            }
        }
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("[%c]", matriz[i][j]);
        }
        printf("\n");
    }

    // printf("\nHacia Donde quiere mover el 1? \n");
    // printf("Letra a: Una Posicion a la izquierda\n");
    // printf("Letra d: Una Posicion a la derecha\n");
    // printf("Ingrese caracter: ");

    // i = 0;
    // int j;
    // do
    // {
    //     for (j = 0; j < n; j++)
    //     {
    //         printf("[%d]", arreglo[j]);
    //     }

    //     opcion = _getch();
    //     if (opcion == 'd' || opcion == 'D')
    //     {
    //         if (i < n - 1)
    //         {
    //             arreglo[i] = 0;
    //             arreglo[i + 1] = 1;
    //             i++;
    //         }
    //     }
    //     if (opcion == 'a' || opcion == 'A')
    //     {
    //         if (i > 0)
    //         {
    //             arreglo[i] = 0;
    //             arreglo[i - 1] = 1;
    //             i--;
    //         }
    //     }
    //     system("cls");

    // } while (i < n + 2);

    return 0;
}