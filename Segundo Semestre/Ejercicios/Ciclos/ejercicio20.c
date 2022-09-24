//Multiplicar N x P
#include<stdio.h>

int a, b, i, resultado;

int main(int argc, char const *argv[])
{
    printf("Ingrese el primer termino a multiplicar: ");
    scanf("%d", &a);
    printf("Ingrese el segundo termino a multiplicar: ");
    scanf("%d", &b);

    resultado = a;
    if (b == 0 || a == 0)
    {
        resultado = 0;
    }

    if (b > 0)
    {
        i = 1;
        while (b > i )
        {
            resultado = resultado + a;
            i++;
        }
    }
    if (b < 0 && a < 0)
    {
        i = -1;
        while (b < i )
        {
            resultado = resultado - a;
            i--;
        }
    }

    printf("El resultado es: %d", resultado);
    printf("\n");
    return 0;
}

