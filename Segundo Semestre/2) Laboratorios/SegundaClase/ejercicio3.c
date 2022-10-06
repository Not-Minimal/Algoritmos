#include<stdio.h>

int notas, suma, i;
double promedio;


int main(int argc, char const *argv[])
{
    printf("Ingrese la cantidad de notas: ");
    scanf("%d", &notas);
    int arreglo[notas];
    
    suma = 0;
    for (i = 0; i < notas; i++)
    {
        printf("Ingrese la Nota N°%d: ", i+1);
        scanf("%d", &arreglo[i]);
        suma = suma + arreglo[i];
    }

    promedio = suma/notas;
    printf("El promedio es: %.2lf", promedio);
    printf("\n");
    
}
