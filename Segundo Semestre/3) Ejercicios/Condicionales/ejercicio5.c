//Calcular la funcion
#include<stdio.h>
int x;

int main(int argc, char const *argv[])
{
    printf("Ingrese el valor: ");
    scanf("%d", &x);
    if ( x < 0)
    {
        x = ((x*x)-(2*x)-5);
        printf("Opcion 1: ");
        printf("\n");
        printf("%d", x);
        printf("\n");
    } 
    else if (0 <= x && x < 3)
    {
        x = (x*x*x)+3*(x*x);
        printf("Opcion 2: ");
        printf("\n");
        printf("%d", x);
        printf("\n");
    } 
    else if (3 <= x && x < 5)
    {
        x = ((x*x*x*x)-4*(x*x*x)+(x*x));
        printf("Opcion 3: ");
        printf("\n");
        printf("%d", x);
        printf("\n");
    }
    else if (x >= 5)
    {
        x = ((x*x*x*x*x)-5*(x*x*x)+(x*x*x*x));
        printf("Opcion 4: ");
        printf("\n");
        printf("%d", x);
        printf("\n");
    }
    return 0;
}
