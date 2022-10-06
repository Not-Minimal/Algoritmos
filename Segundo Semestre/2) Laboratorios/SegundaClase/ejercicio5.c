#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int i,n;

int main(int argc, char const *argv[])
{

    
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);
    int arreglo[n];
    srand(time(NULL));
    for (i = 0; i < n; i++)
    {
        arreglo[i] = rand() % 10000;
    }
    for (i = 0; i < n; i++)
    {
        if (arreglo[i] % 2 == 0)
        {
            arreglo[i] = 0;
        }
    }

    for (i = 0; i < n; i++)
    {
       printf("%d", arreglo[i]);
       printf("\n");
    }
    return 0;
}
