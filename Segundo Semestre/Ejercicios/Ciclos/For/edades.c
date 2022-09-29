//Ingresar edad y calcular el promedio
#include<stdio.h>

int i, n;
double suma, promedio;

int main(int argc, char const *argv[])
{
    
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);
    int arreglo[n];
    for (i = 0; i < n; i++)
    {
        printf("Ingrese la edad en %d: ", i+1);
        do
        {
            scanf("%d", &arreglo[i]);
        } while (arreglo[i] < 0 || arreglo[i] > 120);
    }

    for (i = 0; i < n; i++)
    {
        printf("[%d]", arreglo[i]);
    }
    suma = 0;
    for (i = 0; i < n; i++)
    {
        suma = suma + arreglo[i];
    }
    promedio = (suma/n);
    printf("\n");
    printf("El promedio de edades es: %f", promedio);
    return 0;
   
}
