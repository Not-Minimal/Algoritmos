//Evaluar multiplo 5
#include<stdio.h>

int x, multiplo, noMuliplo;

int main(int argc, char const *argv[])
{
    printf("Ingrese el numero: ");
    scanf("%d", &x);
    if (x%5 == 0)
    {
        printf("El numero es multiplo de 5");
        printf("\n");
        multiplo = (2*x);
        printf("El resultado de: (2X), es: = %d ", multiplo);
        printf("\n");
    }
    else
    {
        printf("El numero no es multiplo");
        printf("\n");
        noMuliplo = ((-1)*x);
        printf("El resultado de: (-1X), es: = %d ", noMuliplo);
        printf("\n");
    }
    return 0;
}
