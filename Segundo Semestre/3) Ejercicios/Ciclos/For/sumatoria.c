//Calcular la sumatoria
#include<stdio.h>

int f, i, n;

int main(int argc, char const *argv[])
{
    printf("Ingrese el valor del factorial a calcular: ");
    scanf("%d", &n);
    f = 1;
    for (i = 1; i <= n; i++)
    {
        f = f*i;
    }
    printf("El factorial de %d! es: %d", n, f);
    printf("\n");
    return 0;
}
