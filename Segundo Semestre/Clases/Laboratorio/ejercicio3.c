//Comprobar si un número ingresado por teclado es par o impar y mostrar el resultado por consola.
#include<stdio.h>

int n, resultado;

int main(int argc, char const *argv[])
{
    printf("Ingrese el numero: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("El numero es Par");
        printf("\n");
    } 
    else 
    {
        printf("El numero es Impar");
        printf("\n");
    }
    return 0;
}
