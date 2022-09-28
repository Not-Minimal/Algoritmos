//Calcular el cuadrado de un número decimal ingresado por teclado e imprimirlo en la consola.
#include<stdio.h>

float n, resultado;

int main(int argc, char const *argv[])
{
    printf("Ingrese el numero: ");
    scanf("%f", &n);

    resultado = (n*n);
    printf("%f al cuadrado es: %f ", n, resultado);
    printf("\n");
    return 0;
}
