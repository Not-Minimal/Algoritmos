//Edades aleatorias y mayor o menor de edad del rango.
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int n,f, potencia, i, j, exponente;
int main(int argc, char const *argv[])
{
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);
    int v[n];
    srand(time(NULL));
    for (j = 0; j < n; j++) //Relleno el arreglo desde la posicion 0 hasta n-1
    {
        v[j] = j+1;
    }
    for (i = 0; i < n; i++) //Creo arreglo desde 0 hasta n-1 
    {
        if (v[i] % 2 == 0) //Si el valor en la posicion i es par.
        {
            potencia = 1; //Inicio la potencia con uno para que no de 0.
            exponente = (n+3); //Declaro el exponente como n+3.
            for (j = 1; j <= v[i]; j++) //Arreglo con algoritmo potencia, Inicia en 1 hasta que sea menor igual al numero par.
            {
                potencia = potencia*v[i]; //Multiplica la base que ininia en 1 por el valor de la posicion i.
            }
            printf("La potencia de %d elevado a %d es: %d \n", v[i], j-1, potencia); // El valor par elevado a j-1
        } else //De lo contrario vemos si el valor es impar y calculamos el factorial.
        {
            {
            f = 1; //Iniciamos el factorial en uno.
            for (j = 1; j <= v[i]; j++) //Arreglo recorre hasta menor o igual a la posicion i del arreglo mayor.
            {
                f = f*j; //Multiplica el valor de 1 por el valor anterior cada vez que aumenta.
            }
            printf("\nEl factorial de %d! es: %d \n",j-1, f);
            }
        }
    }
    return 0;
}
