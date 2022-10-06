#include<stdio.h>

double millas, kilometros;

int main(int argc, char const *argv[])
{
    printf("Ingrese las millas por hora: ");
    scanf("%lf", &millas);

    kilometros = (millas*1.6093);
    printf("%.2lf° M/H son equivalentes a %.3lf °KM/H", millas, kilometros);
    printf("\n");
    return 0;
}
