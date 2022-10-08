#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int estaEnArreglo(int arr[], int size, int numero)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == numero)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    time_t t;
    srand((unsigned)time(&t));
    int size = 10000;
    int arr[size];
    clock_t inicio, fin;
    int n;
    double tiempo;

    // Generar arreglo con numeros aleatorios
    // Inicializar el arreglo con 0
    for (int i = 0; i < size; i++)
    {
        arr[i] = 0;
    }
    // No repetidos
    inicio = clock();
    int veces = 0;
    int max_veces = 0;
    // Se recorre el arreglo y cada vez se ingresa un número a una posición.
    for (int i = 0; i < size; i++)
    {
        int aleatorio = (rand() % 30000) + 1;

        while (1)
        {
            // se comprueba que no esté repetido en el arreglo actual.
            if (estaEnArreglo(arr, size, aleatorio))
            {
                aleatorio = (rand() % 30000) + 1;
                veces += 1;
            }
            else
            {
                arr[i] = aleatorio;
                if (veces > max_veces)
                    max_veces = veces;
                veces = 0;
                break;
            }
        }
    }
    fin = clock();
    tiempo = ((double)(fin - inicio)) / CLOCKS_PER_SEC;
printf("\nTIEMPO DE ESPERA generar valores aleatorios no repetidos: %f\n",tiempo);
printf("\n max veces: %d\n", max_veces);

int arr2[size];
for (int i = 0; i < size; i++)
    {
        arr2[i] = arr[i];
    }

//Este algoritmo se llama "Bubble Sort" para ordenar un arreglo
inicio=clock();
for(int i = 0; i<10000; i++)
    {
        // Se toma como referencia un valor en la posicion i
        for (int j = i + 1; j < 10000; j++)
        {
            // se compara con el resto de valores a la derecha y se cambia por el menor
                if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

fin = clock();
tiempo = ((double) (fin-inicio))/CLOCKS_PER_SEC;
printf("\nTIEMPO DE ESPERA ordenar arreglo 1: %f\n",tiempo);
//Imprimir
for(int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
printf("\n");

for(int i = 0; i < size; i++)
    {
        printf("%d\t", arr2[i]);
    }
    printf("\n");
return 0;
}



