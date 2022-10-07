#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int n, i, j, x, bandera;

int main(int argc, char const *argv[])
{
    printf("Ingrese el tamaño del arreglo: "); //Pronar con 10K al final
    scanf("%d", &n);

    int arregloB[n], arregloA[n];

    srand(time(NULL));
    for (i = 0; i < n; i++)
    {
        x = rand();
        if (i == 0)
        {
            arregloA[i] = x;
            arregloB[i] = x;
        } else
        {
            do
            {
                bandera = 0;
                for (j = 0; j < i && bandera == 0; j++)
                {
                    if (x == arregloB[j]) bandera = 1;
                    if (bandera == 1) x = rand();                    
                }
                
            } while (bandera == 1);
            arregloB[i] = x;

            j = i - 1;
            while (x < arregloA[j]&&j >= 0)
            {
                arregloA[j+1];
            }
            
        }
        
        
    }
    
    return 0;
}
