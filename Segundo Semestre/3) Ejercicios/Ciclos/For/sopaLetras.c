//Edades aleatorias y mayor o menor de edad del rango.
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int n, i, j, filas, columnas, opcion;
int main(int argc, char const *argv[])
{
    //Variables Tiempo
    time_t t;
    clock_t inicio, fin;
    double tiempo;

    printf("Ingrese el tamaño de la Sopa de Letras ");
    scanf("%d", &n);
    filas = n;
    columnas = n;
    char matriz[filas][columnas];
    srand(time(NULL));
    for (i = 0; i < filas; i++) //Relleno el arreglo desde la posicion 0 hasta n-1
    {
        for (j = 0; j < columnas; j++)
        {
           matriz[i][j] = rand() % 26 + 65;
        }        
    }
    for (i = 0; i < filas; i++) //Relleno el arreglo desde la posicion 0 hasta n-1
    {
        for (j = 0; j < columnas; j++)
        {
           printf("%c  ",matriz[i][j]);
           
        }   
        printf("\n");     
    }

    printf("Opciones: ");
    printf("\n");
    printf("1.- Encontre la palabra.");
    printf("\n");
    printf("2.- Sigo sin encontrar la palabra.");
    printf("\n");
    
    scanf("%d", &opcion);

    if (opcion == 1)
    {
        /* code */
    } 
    else if (opcion == 2)
    {
        /* code */
    } 
    else
    {
        printf("La opcion ingresada no es valida :(");
        printf("\n");
    }
    
    
    
    
    return 0;
}
