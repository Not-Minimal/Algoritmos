#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Funcion para buscar un numero dentro del arreglo [A].
int buscarNumero(int arreglo[], int tamaño, int numero)
{
    for (int i = 0; i < tamaño; i++)
    {
        if (arreglo[i] == numero)
        {
            return 1; // Si encuentra un mismo valor, retorna 1, de lo contrario sale del ciclo y retorna 0.
        }
    }
    return 0;
}

// Crear funcion principal que genera todo el proceso.

int main()
{
    //Generan un numero aleatorio en funcion del tiempo.
    time_t t;
    srand((unsigned)time(&t));

    int n;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);
    double tiempo;
    int tamaño = n;
    int arreglo[tamaño];
    clock_t inicio, fin; //Permite crear valores de inicio y fin para calcular el tiempo de ejecución.

    for (int i = 0; i < tamaño; i++)
    {
        arreglo[i] = 0;
    }
    //Los no repetidos
    inicio = clock();
    int veces = 0;
    int max_veces = 0;

    //
    for (int i = 0; i < tamaño; i++)
    {
        int aleatorio = ((rand() % 30000) + 1);

        while (1)
        {
            //Primero comprobar si existe en el arreglo actual A con la funcion [Search].
            if (buscarNumero(arreglo, tamaño, aleatorio))
            {
                aleatorio = ((rand() % 30000) + 1); //Volvemos a ocupar numeros random pero que ya no estan en el arreglo A.
                veces = veces + 1; //Aumentamos el contador veces para verificar cuantas veces se repite.
            }
            else
            {
                arreglo[i] = aleatorio; //Llenamos el arreglo en posicion i con valor aleatorio gracias a rand()
                if (veces > max_veces)
                {
                    max_veces = veces;
                    veces = 0;
                    break;
                }
            }
        }
        //Salimos del ciclo.
        //Para saber cuanto tiempo toma generar un arreglo con valores no repetidos.
        fin = clock();
        tiempo = (((double)(fin - inicio)) / CLOCKS_PER_SEC);
        printf("Tiempo Arreglo con valores no repetidos: %f", tiempo);
        printf("\n");
        printf("Cantidad maxima de veces repetidos: %d", max_veces);
        printf("\n");

        //Creamos el arreglo B en base al anterior.
        int arreglo2[tamaño];
        for (i = 0; i < tamaño; i++)
        {
            arreglo2[i] = arreglo[i];
        }
        
        //Ordenamos el arreglo segun metodo que deseemos.

        //Calculamos el tiempo que toma ordenar el arreglo de manera creciente.
        fin = clock();
        tiempo = (((double) (fin - inicio))/CLOCKS_PER_SEC);
        printf("Ordenar el arreglo tomo: %f", tiempo);
        printf("\n");

        //Imprimir el arreglo A.
        for (int i = 0; i < tamaño; i++)
        {
            printf("%d\t", arreglo[i]);
        }
        printf("\n");

        //Imprimir el arreglo B.
        for (int i = 0; i < tamaño; i++)
        {
            printf("%d\t", arreglo2[i]);
        }
        printf("\n");
    }
    return 0;
}