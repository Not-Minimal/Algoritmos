#include <stdio.h>

void Mundo();
int n, i, j;

int main()
{
    Mundo();
    return 0;
}

void Mundo(){
    printf("Ingrese el tamaño de la matriz: \n");
    scanf("%d", &n);

    int matriz[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
    
}
