//Libreria
#include <stdio.h>

// Funciones
float factorial();

// Variables Globales
int base;

//Funcion para calculo de factorial con parametro segun definicion
float factorial(int numero)
{
    int i, base;
    base = 1;
    if (numero == 0)
    {
        return numero;
    }
    else
    {
        for (int i = 1; i <= numero; i++)
        {
            base = i * base;
        }
        return (base);
    }
}

int main(int argc, char const *argv[])
{
    int n, i, x, j;
    float resultado, resultado2, sumatioria;
    printf("\nEvaluar F(x)");
    printf("\nIngrese n ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++)
    {
        x = ((3*i)-1);
        resultado = factorial(x);
        j = ((2*i)+1);
        resultado2 = factorial(j);
        sumatioria = (resultado / resultado2);
    }
    printf("%d", &sumatioria);
    return 0;
}
