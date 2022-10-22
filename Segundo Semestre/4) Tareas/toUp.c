#include <stdio.h>
#include <ctype.h>
int i, j;
int main(int argc, char const *argv[])
{
    char palabra[5];
    char matriz[5][5];
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1;j++)
        {
           printf("Ingrese palabra: N°%d ", i+1);
           scanf("%s", &palabra);
        }
        
    }

    // Convertir cada char a mayúscula
    // usando toupper
    for (int i = 0; matriz[i] != '\0'; ++i)
    {
        for (j = 0; matriz[j] != '\0'; j++)
        {
            matriz[i][j] = toupper(matriz[i][j]);
        }
        
    }

    for (i = 0; i < 5; i++) // Muestro la matriz con las palabras
    {
        for (j = 0; j < 1; j++)
        {
            printf("[%c] ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}