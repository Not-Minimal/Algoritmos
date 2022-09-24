//Edad mayor, menor, promedio y suma
#include<stdio.h>

int n, edad, i, promEdad, mayor, menor, suma;

int main(int argc, char const *argv[])
{
    do
    {
        printf("Cuantas edades quiere promediar: ");
        scanf("%d", &n);
    } while (n < 1);
    
    mayor = -999;
    menor = 999;
    i = 1;
    suma = 0;

    while (n >= i )
    {
        do
        {
            printf("Ingrese la edad N° %d: ", i);
            scanf("%d", &edad);
        } while (edad > 120 && edad < 0);
        if (mayor < edad)
        {
            mayor = edad;
        }
        if (menor > edad)
        {
            menor = edad;
        }
        i++;
        suma = (suma + edad);
    }
    promEdad = (suma / (i - 1));
    printf("El promedio es: %d", promEdad);
    printf("\n");
    printf("El mayor es: %d", mayor);
    printf("\n");
    printf("El menor es: %d", menor);
    printf("\n");

    return 0;
}
