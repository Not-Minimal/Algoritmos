#include<stdio.h>

int i, n, a,j, numerador, denominador, resultado, base, potencia;

int main(int argc, char const *argv[])
{
    printf("Ingrese el tamaño de su arreglo: ");
    scanf("%d", &n);

    int arreglo[n];
    
    for (i = 0; i < n; i++)
    {
        base = (i + 4);
        potencia = 1;
        denominador = (i - 2);
        for (j = 0; j < i; j++)
        {
            potencia = potencia*base;
        }
        resultado = potencia/denominador;
        printf("(%d / %d) = %d", potencia, denominador, resultado);
        printf("\n");
    }
    return 0;
}