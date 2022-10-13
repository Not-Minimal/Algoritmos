//Sumar dos numeros con Funcion, le agregue la solicitud por teclado.

#include<stdio.h>

int suma (int, int);

int main()
{
    int a, b, resultado;
    printf("Ingrese el primer valor: ");
    scanf("%d", &a);
    printf("Ingrese el segundo valor: ");
    scanf("%d", &b);
    resultado = suma(a, b);
    printf("%d + %d es: %d", a, b, resultado);
    printf("\n");
}
int suma(int a, int b)
{
    return (a+b);
}
