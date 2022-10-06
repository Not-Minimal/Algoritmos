//Calcular o aproximar la raíz cuadrada de un número ingresado por teclado, sin funciones.
#include <stdio.h>

double valorAbsoluto(double numero)
{
    if (numero < 0)
    {
        return numero * -1;
    }
    return numero;
}
double raizCuadrada(int numero)
{
    double margen = 0.000001;
    double estimacion = 1.0;
    while (valorAbsoluto((estimacion * estimacion) - numero) >= margen)
    {
        double cociente = numero / estimacion;
        double promedio = (cociente + estimacion) / 2.0;
        estimacion = promedio;
    }
    return estimacion;
}

int main(int argc, char const *argv[])
{
    int numero;
    printf("Ingresa un número: ");
    scanf("%d", &numero);
    double raiz = raizCuadrada(numero);
    printf("La raíz cuadrada de %d es %lf", numero, raiz);
    printf("\n");
    return 0;
}