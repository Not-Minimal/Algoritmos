//Edades aleatorias y mayor o menor de edad del rango.
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int n, i, j, filas, columnas;
int main(int argc, char const *argv[])
{
    printf("Ingrese el tamaño de la matriz NXN: ");
    scanf("%d", &n);
    filas = n;
    columnas = n;
    int matriz[filas][columnas];
    srand(time(NULL));
    for (i = 0; i < filas; i++) //Relleno el arreglo desde la posicion 0 hasta n-1
    {
        for (j = 0; j < columnas; j++)
        {
           matriz[i][j] = rand() % 110;
        }        
    }
    for (i = 0; i < filas; i++) //Relleno el arreglo desde la posicion 0 hasta n-1
    {
        for (j = 0; j < columnas; j++)
        {
           printf("%d",matriz[i][j]);
           printf("\n");
        }        
    }

   

    return 0;
}
