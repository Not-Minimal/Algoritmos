#include <stdio.h>

// Funciones
// int exponente();
float factorial();
long potencia();

// Variables Globales
int base, k;

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

long potencia(int base, int exponente)
{
    long resultado = base;
    if (base == 0)
    {
        return base;
    }
    else
    {
        //Mientras que x sea mayor a 1, ya va disminuyendo el valor.
        while (exponente > 1)
        {
            //Multiplica el resultado con la base hasta que el exponente
            resultado = resultado * base;
            exponente--;
        }        
        return (resultado);
    }
}

int main(int argc, char const *argv[])
{
    int x, b;
    float resultado;
    long resultadoPot;
    printf("\nEvaluar F(x)");
    printf("\nIngrese el valor de x: ");
    scanf("%d", &x);
    if (x > 10)
    {
        resultado = factorial(x);
        printf("El resultado de F(%d) es: %2.f \n", x, resultado);
    }
    else if (x >= 5 && x <= 10)
    {
        printf("Para este calculo necesita un valor extra (b).");
        printf("\nIngrese el valor de b: ");
        scanf("%d", &b);
        resultado = factorial(x + b);
        resultadoPot = potencia(resultado, x);
        printf("El resultado de F(%d)! elevado a %d es: %ld \n", (x + b), x, resultadoPot);
    }
    else if (x > 0 && x < 5)
    {
        printf("Para este calculo necesita un valor extra (b).");
        printf("\nIngrese el valor de b: ");
        scanf("%d", &b);
        // resultado = factorial(x);
        resultadoPot = potencia(x, factorial(b - x));
        if ((b - x) == 0)
        {
            printf("El resultado de F(%d)! elevado a %d es: %d \n", x, 0, 1);
        }
        else
        {
            printf("El resultado de F(%d)! elevado a %d es: %ld \n", x, (b - x), resultadoPot);
        }
    }
    else
    {
        printf("El valor ingresado debe estar entre ]0,+inf[");
    }
    
    return 0;
}
