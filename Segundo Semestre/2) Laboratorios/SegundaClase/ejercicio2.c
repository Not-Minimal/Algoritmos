#include<stdio.h>

double pulgadas, milimetros;

int main(int argc, char const *argv[])
{
    printf("Ingrese la temperatura en grados celsius: ");
    scanf("%lf", &pulgadas);

    milimetros = (pulgadas*25.4);
    printf("%.2lf° Pulgadas son equivalentes a %.1lf °mm", pulgadas, milimetros);
    printf("\n");
    return 0;
}
