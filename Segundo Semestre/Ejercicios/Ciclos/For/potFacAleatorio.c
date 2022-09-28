//Edades aleatorias y mayor o menor de edad del rango.
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int n,f, potencia, i, j, exponente;
int main(int argc, char const *argv[])
{
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);
    int v[n];
    srand(time(NULL));
    for (j = 0; j < n; j++)
    {
        v[j] = j+1;
    }//todo bem
    for (i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            potencia = 1;
            exponente = (n+3);
            for (j = 1; j <= v[i]; j++)
            {
                potencia = potencia*v[i];
            }
            printf("La potencia de %d elevado a %d es: %d \n", v[i], j-1, potencia);
        } else
        {
            {
            f = 1;
            for (j = 1; j <= v[i]; j++)
            {
                f = f*j;
            }
            printf("\nEl factorial de %d! es: %d \n",j-1, f);
            }
        }
        
    }
    return 0;
}
