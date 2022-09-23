//Calculo de edades segun condicionales
#include<stdio.h>

int edad;

int main(int argc, char const *argv[])
{
    printf("Ingrese su edad: ");
    scanf("%d", &edad);
    if (edad >= 0 && edad < 18)
    {
        printf("Usted es menor de edad");
        printf("\n");
    }
    else if (edad >= 18 && edad < 111)
    {
        printf("Usted es mayor de edad");
        printf("\n");
    }
    else
    {
        printf("Edad no sirve");
        printf("\n");
    }
    return 0;
}