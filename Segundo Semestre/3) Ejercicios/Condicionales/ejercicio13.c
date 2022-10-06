//Evaluar multiplo 5
#include<stdio.h>

int x, multiplo7, noMuliplo10;

int main(int argc, char const *argv[])
{
    printf("Ingrese el numero: ");
    scanf("%d", &x);
    if (x % 10 == 0 && x % 7 == 0)
    {
        printf("El numero es multiplo de 7 y 10");
         printf("\n");
        return 0;
    }
    if (x % 7 == 0)
    {
        printf("El numero es multiplo de 7");
        printf("\n");
    }
    else if (x % 10 == 0)
    {
        printf("El numero es multiplo de 10");
    }
    else
    {
        printf("No es multiplo de 7 ni 10");
    }
    return 0;
}
