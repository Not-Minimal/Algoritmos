#include <stdio.h>

int sumatoria(int n, int i);

int sumatoria(int n, int i)
{
    if (n == i)
        return n;
    else
    {
        int resultado = (((3 * i) + 1) / (2 * i));
        return i + sumatoria(resultado + 1, n);
    }
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Ingrese n: ");
    scanf("%d", &n);
    printf("%d \n", sumatoria(n, 1));
    return 0;
}