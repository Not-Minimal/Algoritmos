//Resolver ecuacion
#include<stdio.h>

int a, resultado;

int main(int argc, char const *argv[])
{
    printf("Ingrese el valor de a: ");
    scanf("%d", &a);
    resultado = (((3*a)+2)/2);
    printf("El resultado de la ecuacion es: = %d", resultado);
    printf("\n");
    return 0;
}

