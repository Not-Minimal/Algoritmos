#include<stdio.h>

double i, a,j, numerador, denominador, resultado, base, potencia;
int n;
int main(int argc, char const *argv[])
{
    printf("Ingrese el tamaño de su arreglo: ");
    scanf("%d", &n);

    int arreglo[n];
    
    for (i = 0; i < n; i++)
    {
        
        potencia = 1;
       
        for (j = 1; j <= i; j++)
        {
            potencia = i*(i+2);
        }
        denominador = (n + 2);
        resultado = potencia/denominador;
        printf("(%lf / %lf) = %lf", potencia, denominador, resultado);
        printf("\n");
    }
    return 0;
}