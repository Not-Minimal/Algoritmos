//Calcular Iva con Ciclo Repetir
#include<stdio.h>

int neto, total;

int main(int argc, char const *argv[])
{
    do
    {
        printf("Ingrese el valor neto de un producto o servicio: ");
        scanf("%d", &neto);
        total = (neto*1.19);
    } while (neto <= 180);
    printf("El valor del producto es: = %d",total);
    printf("\n");
    
    return 0;
}
