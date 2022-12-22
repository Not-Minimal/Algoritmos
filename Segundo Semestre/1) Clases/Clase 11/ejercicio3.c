#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fibonacci(int termino)
{
    if ((termino == 1) || (termino == 2))
        return 1;
    else
        return fibonacci(termino - 1) + fibonacci(termino - 2);
}

int main()
{
    int r, valor;

    printf("0");
    printf("\n1");
    printf("\n1");

    printf("Ingrese el tamaño de la serie: ");
    scanf("%d", serie)


    for (valor = 1; valor <= 20; valor++)
    {
        r = fibonacci(valor);
        printf("\n%d %d", serie, r);
    }

    return 0;
}