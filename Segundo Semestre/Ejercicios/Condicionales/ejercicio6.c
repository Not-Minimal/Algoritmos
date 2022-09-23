//Division de variables con condicional
#include<stdio.h>

int x1, x2, resultado;

int main(int argc, char const *argv[])
{
    printf("Ingrese el valor de a: ");
    scanf("%d", &x1);
    printf("Ingrese el valor de b: ");
    scanf("%d", &x2);
    if (x2 == 0)
    {
        printf("El valor de b, debe ser distinto de 0");
    }
    else
    {
        resultado = (x1 / x2);
        printf("La division es: = %d", resultado);
        printf("\n");
    }
    return 0;
}
