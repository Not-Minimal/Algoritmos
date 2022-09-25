//Cociente resto
#include<stdio.h>

int a, b, i, u, resultado;

int main(int argc, char const *argv[])
{
    do
    {
        printf("Ingrese el primer termino: ");
        scanf("%d", &a);
        printf("Ingrese el segundo termino: ");
        scanf("%d", &b);
    } while ((b > a) || ((a = 0) || (b = 0)));
    u = 0;
    i = 1;

    do
    {
        resultado = 0;
        resultado = (a-b);
        i++;
        resultado = (resultado - b);
        printf("%d", i);
        printf("\n");
    } while (b > i);
    printf("\n");
    return 0;
}
