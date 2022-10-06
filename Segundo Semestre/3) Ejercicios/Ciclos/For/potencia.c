//Calculo de una potencia
#include<stdio.h>

int x, i, base, exponente, potencia;

int main(int argc, char const *argv[])
{
    printf("Ingrese la base: ");
    scanf("%d", &base);
    printf("Ingrese la exponente: ");
    scanf("%d", &exponente);

    potencia = 1;
    for (i = 1; i <= exponente; i++)
    {
        potencia = potencia*base;
    }
    printf("La potencia es: %d", potencia);
    printf("\n");
    return 0;
}
