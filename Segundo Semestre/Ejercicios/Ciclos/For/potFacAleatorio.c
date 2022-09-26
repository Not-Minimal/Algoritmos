//Edades aleatorias y mayor o menor de edad del rango.
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int x,b,n,f, pot, i, j;
int main(int argc, char const *argv[])
{
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);
    int v[n];
    srand(time(NULL));
    for (j = 1; j <= n; j++)
    {
        v[i] = rand() % 11 + 15;

        if (v[i] % 2 == 0)
        {
            for (i = 1; i <= (n+3); i++)
            {
                pot = pot*v[i];
                printf("La potencia de %d es : %d", v[i], (2*pot));
                printf("\n");
            }
        } 
        else
        {
            f = 1;
            for (i = 1; i < (n - 1); i++)
            {
                f = f*i;
                printf("El factorial de %d es : %d", v[i], f);
                printf("\n");
            }
            
            
        }
    }
    return 0;
}
