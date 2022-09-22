//Calculo de iva con condicional
#include<stdio.h>

int neto, iva, total;

int main(int argc, char const *argv[])
{
    printf("Ingrese el valor neto de un producto o servicio: ");
    scanf("%d", &neto);
    if (neto < 180)
    {
        printf("El valor debe ser mayor a $180 pesos");
        printf("\n");
    }
    else
    {
        iva = (neto*0.19);
        total = (neto*1.19);
        printf("El valor total del producto es: = %d", total);
        printf("\n");
    }
    return 0;
}
