//Imprimir numero aleatorio

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
        v[i] = rand() % 11 + 10;
        printf("f(%d) = %d", v[i], ((3*(v[i]*v[i]))+5));
        printf("\n");
    }
    return 0;
}
