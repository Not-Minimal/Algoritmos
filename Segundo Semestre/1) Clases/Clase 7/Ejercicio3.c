#include <stdio.h>
#include <time.h>

void lectura(int a[], int cap);
void imprime(int a[], int cap);


int main(int argc, char const *argv[])
{
    int v1[100], v2[100], v3[100];
    lectura(v1,25);
    lectura(v2,10);
    printf("");
    return 0;
}

void lectura(int a[], int cap)
{
    time_t t;
    srand(time(NULL));
    int i;
    for (i = 0; i < cap; i++)
    {
        a[i] = rand()%4;
    }
    
}
void imprime(int a[], int cap)
{
    int i;
    for (i = 0; i < cap; i++)
    {
        printf("%d - ", a[i]);
    }
    
}