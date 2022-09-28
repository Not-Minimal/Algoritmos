/*Se tiene una variable inicial n con un valor por defecto (ejemplo: 100). Programar un ciclo
infinito en que cada ciclo solicite por teclado ingresar un número d. Luego se divide n por d, se
reemplaza el valor de n y se imprime por consola. El ciclo debe terminar cuando n es menor a 1. */
#include<stdio.h>

int n, i;


int main(int argc, char const *argv[])
{
    printf("Ingrese el numero: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
    {
        printf("FizzBuzz");
        printf("\n");
    } 
    else if (i % 3 == 0)
    {
        printf("Fizz");
        printf("\n");
    }
    else if (i % 5 == 0)
    {
        printf("Buzz");
        printf("\n");
    }
    else
    {
        printf("%d", i);
        printf("\n");
    }
    }
    return 0;
}
