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
        v[j] = i+1;
    }
    for (i = 1; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            potencia = 1;
            exponente = (n+3);
            for (i = 1; i < exponente; i++)
            {
                potencia = potencia*v[j];
                printf("La potencia de %d elavado a %d es: %d", v[j], i, potencia);
                printf("\n");
            }
        } 
    }
    for (i = 1; i < n; i++)
    {
        if (!(v[i] % 2 == 0))
        {
            f = 1;
            for (i = 1; i < n; i++)
            {
                f = f*i;
                printf("El factorial de %d! es: %d",i, f);
                printf("\n");
            }
        }
    }
    return 0;
}
