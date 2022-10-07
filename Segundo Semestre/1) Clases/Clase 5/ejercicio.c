#include<stdio.h>
#include<time.h>
main()
{
    clock_t inicio, fin;
    int n;
    double tiempo;
    inicio = clock();
    printf("\n Ingrese un numero: ");
    scanf("%d", &n);
    fin = clock();
    tiempo = ((double) (fin-inicio)) /CLOCKS_PER_SEC;
    printf("\nTiempo de espera de ingreso de la variable: %f", tiempo);
}