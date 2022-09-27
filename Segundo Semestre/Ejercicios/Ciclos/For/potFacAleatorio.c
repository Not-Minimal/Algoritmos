//Edades aleatorias y mayor o menor de edad del rango.
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int x,b,n,f, potencia, i, j, exponente, bandera;
int main(int argc, char const *argv[])
{
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);
    int v[n];
    srand(time(NULL));
    for (j = 0; j < n; j++)
    {
        v[j] = rand() % 11+10;
        if (v[j] % 2 == 0)
        {
            potencia = 1;
            exponente = (n+3);
            for (i = 1; i <= exponente; i++)
            {
                potencia = potencia*v[i];
            }
            bandera = 0;
        } else if (v[j] % 2 == 1)
        {
            f = 1;
            for (i = 1; i < n-1; i++)
            {
                f = f*i;
            }
            bandera = 1;
        }
    }
    if (bandera == 0)
    {
        printf("La potencia es: %d", potencia);
        printf("\n");
    } else
    {
       printf("El factorial de %d! es %d:",n-2, f);
    printf("\n");
    }    
    return 0;
}
