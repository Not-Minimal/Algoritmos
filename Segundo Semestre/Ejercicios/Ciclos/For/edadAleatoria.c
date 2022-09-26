//Edades aleatorias y mayor o menor de edad del rango.
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int n, i, x, mayor, menor;
int main(int argc, char const *argv[])
{
    printf("Ingrese la cantidad de personas: ");
    scanf("%d", &n);
    int v[n];
    mayor = 0;
    menor = 0;
    srand(time(NULL));
    for (i = 1; i <= n; i++)
    {
        v[i] = rand() % 110 + 10;
        printf("%d", v[i]);
        printf("\n");
        if (v[i] >= 18)
        {
            mayor++;
        } 
        else if (v[i] <= 17 && v[i] >= 0)
        {
             menor++;
        }
    }
    printf("Los mayores de edad son: %d", mayor);
    printf("\n");
    printf("Los menores de edad son: %d", menor);
    printf("\n");
    return 0;
}
