#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;
    int matriz[10][10];

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            matriz[i][j] = 32;
        }
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%d", matriz[i][j]);
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