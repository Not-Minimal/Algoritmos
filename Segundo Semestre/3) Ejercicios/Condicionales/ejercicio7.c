//Calculo de una funcion
#include<stdio.h>

int x1, resultado;

int main(int argc, char const *argv[])
{
    printf("Ingrese la variable x, para el calculo de la función (2x(3) - 2) / (x + 1): ");
    scanf("%d", &x1);
    if (x1 == -1)
    {
        printf("El valor debe ser distinto de -1, de lo contrario no existe solucion en los reales");
    }
    else
    {
        resultado = ((2*(x1*x1*x1)-2)/(x1+1));
        printf("La funcion obtenida es: = %d", resultado);
        printf("\n");
    }
    return 0;
}
