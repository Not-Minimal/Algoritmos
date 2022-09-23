//Evaluar Numero Par o no
#include<stdio.h>

int x, par, impar;

int main(int argc, char const *argv[])
{
    printf("Ingrese el numero: ");
    scanf("%d", &x);
    if (x%2 == 0)
    {
        printf("El numero es Par");
        par = ((2*x)-5);
        printf("El resultado de: (2X-5), es: = %d ", par);
        printf("\n");
    }
    else
    {
        printf("El numero es Impar");
        impar = ((3*x)-2);
        printf("El resultado de: (3X-2), es: = %d ", impar);
        printf("\n");
    }
    return 0;
}
