//Calculo de menor o mayor segun condicional
#include<stdio.h>

int edad;

int main(int argc, char const *argv[])
{
    printf("Ingrese su edad: ");
    scanf("%d", &edad);
    if (edad < 0 || edad > 110)
    {
        printf("Edad no sirve");
        printf("\n");
    }
    else if (edad < 18)
    {
        printf("Usted es menor de edad");
        printf("\n");
    }
    else
    {
        printf("Usted es mayor de edad");
        printf("\n");
    }
    return 0;
}