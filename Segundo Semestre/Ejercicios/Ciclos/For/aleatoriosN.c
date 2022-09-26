//Imprimir numero aleatorio con una funcion aplicada

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char const *argv[])
{
    int v[5];
    int i;
    srand(time(NULL));
    for (i = 0; i < 5; i++)
    {
        v[i] = rand() % 11 + 20;
        x = v[i];
        printf("%d", v[i]);
        printf("\n");
    }
    return 0;
}
