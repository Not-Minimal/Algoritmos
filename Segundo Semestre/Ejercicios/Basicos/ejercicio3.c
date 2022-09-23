//resultado ecuacion
#include<stdio.h>

int a, b, resultado;

int main(int argc, char const *argv[])
{
    printf("Ingrese el valor de a: ");
    scanf("%d", &a);
    printf("Ingrese el valor de b: ");
    scanf("%d", &b);
    a = ((a*a*a)*5);
    b = ((b*b)*2);
    resultado = ((a+b)-30);
    printf("El resultado de la ecuacion es = %d", resultado);
    printf("\n");
    return 0;
}
