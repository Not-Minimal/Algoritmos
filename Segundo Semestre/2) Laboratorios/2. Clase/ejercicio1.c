#include<stdio.h>

double grados, farenheit;

int main(int argc, char const *argv[])
{
    printf("Ingrese la temperatura en grados celsius: ");
    scanf("%lf", &grados);

    farenheit = ((grados*1.8) + 32);
    printf("%.2lf° C son equivalentes a %.2lf °F", grados, farenheit);

    return 0;
}
