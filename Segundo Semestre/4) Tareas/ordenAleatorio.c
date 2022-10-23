#include <stdio.h>
#include<time.h>

void Mundo();
int n, i, j;

int main()
{
    Mundo();
    return 0;
}

void Mundo()
{
    printf("Ingrese el tamaño de la matriz: \n");
    scanf("%d", &n);

    char matriz[n][n];
    srand(time(NULL));
    // Crear matriz con caracteres en Mayuscula.
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            matriz[i][j] = srand()%26+65;
        }
        
    }

    // Mostrar matriz en pantalla
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("[%c]", matriz[i][j]);
        }
        printf("\n");
    }
}
