#include<stdio.h>

int n, x, i;

int main(int argc, char const *argv[])
{
    int suma;
    while (n <= 0)
    {
        printf("Ingrese la cantidad de valores a sumar: ");
        scanf("%d", &n);
    }

    suma = 0;
    x = 1;

    while (n >= x)
    {
        printf("Ingrese el valor N° %d: ", x);
        scanf("%d", &i);
        suma = suma + i;
        x = x + 1;
    }
    printf("El resultado es: %d", suma);
    printf("\n");
    return suma;
}
