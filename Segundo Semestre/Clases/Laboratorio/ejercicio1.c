//Calcular el cuadrado de un número entero ingresado por teclado e imprimirlo en la consola.
#include<stdio.h>

int n, resultado;

int main(int argc, char const *argv[])
{
    printf("Ingrese el numero: ");
    scanf("%d", &n);

    resultado = (n*n);
    printf("%d al cuadrado es: %d ", n, resultado);
    printf("\n");
    return 0;
}
