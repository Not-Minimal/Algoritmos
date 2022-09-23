//Tabla Multiplicar del 7 con Ciclo mientras
#include<stdio.h>

int n, i, multiplo;

int main(int argc, char const *argv[])
{
    printf("Ingrese la cantidad de multiplicaciones: ");
    scanf("%d", &n);
    i = 1;
    while ( i <= n )
    {
        multiplo = (i*7);
        printf("%d", multiplo);
        printf("\n");
        i = (i + 1);
    }
    return 0;
}
