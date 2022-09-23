//Tabla Multiplicar del 7 con Ciclo mientras
#include<stdio.h>

int n, i, p, multiplo;

int main(int argc, char const *argv[])
{
    printf("Ingrese la cantidad de veces a multiplicar: ");
    scanf("%d", &n);
    printf("Ingrese el valor a multiplicar: ");
    scanf("%d", &i);
    p = 1;
    while ( p <= n )
    {
        multiplo = (i*p);
        printf("%d", multiplo);
        printf("\n");
        p = (p + 1);
    }
    return 0;
}
