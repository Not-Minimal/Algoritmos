#include<stdio.h>
//Definicion de variables globales
int a;
int b;

int main()
{
    printf("Ingrese el valor del producto: ");
    scanf("%d",&a);
    b = (a*0.19);
    printf("El iva del producto es = %d", b);
    printf("\n");
    return 0;
}
