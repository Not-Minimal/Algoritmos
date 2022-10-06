//Edades aleatorias y mayor o menor de edad del rango.
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int n, i, sumaNotas, promedioNotas;
int main(int argc, char const *argv[])
{
    printf("Ingrese la cantidad de notas: ");
    scanf("%d", &n);
    int v[n];
    srand(time(NULL));
    sumaNotas = 0;
    for (i = 1; i <= n; i++)
    {
        v[i] = rand() % 71 + 10;
        printf("%d", v[i]);
        printf("\n");
        if (v[i] < 40)
        {
            printf("Es una Nota Reprobada.");
            printf("\n");
        } 
        else 
        {
            printf("Es una Nota Aprobada.");
            printf("\n");
        }
        sumaNotas = sumaNotas + v[i];
    }
    promedioNotas = (sumaNotas / n);
    printf("El promedio de notas es: %d", promedioNotas);
    printf("\n");

    if (promedioNotas < 40)
    {
        printf("Es un Promedio Reprobado.");
        printf("\n");
    } 
    else
    {
        printf("Es un Promedio Aprobado.");
        printf("\n");
    }
    
    
    return 0;
}
