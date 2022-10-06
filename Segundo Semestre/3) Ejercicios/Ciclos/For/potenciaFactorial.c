//Calcular Potencia o Factorial segun par o impar
#include<stdio.h>

int x, b, a, pot, i;

int main(int argc, char const *argv[])
{
    printf("Ingrese el valor de a: ");
    scanf("%d", &a);
    printf("Ingrese el valor de b: ");
    scanf("%d", &b);

    for (x = a; x <= b ; x++)
    {
       if (x % 2 == 0)
       {
            pot = 1;
            for (i = 1; i <= (x+1); i++)
            {
               pot = pot*(x-1);
            }
       } 
       else
       {
        a = 1;
        for (i = 1; i <= (2*x); i++)
        {
            a = (a*i);
        }
       }   
    }
    printf("La potencia es: %d", pot);
    printf("\n");
    printf("El resultado de (2*%d)! es: %d", x-1 ,a);
    printf("\n");
    return 0;
}


