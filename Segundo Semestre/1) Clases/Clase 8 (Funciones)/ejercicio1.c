//Libreria
#include <stdio.h>

// Funciones
float factorial();
long potencia();

// Variables Globales
int base, k;

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

//Funcion para calculo de potencia con parametros de base y exponente segun definicion (Tipo long por valores gigantes)
long potencia(int base, int exponente)
{
    //Primerio la base es el primer numero retornado de la funcion main
    long resultado = base;
    if (base == 0)
    {
        //Solo retorna valor 0
        return base;
    }
    else
    {
        //Mientras que x sea mayor a 1, ya va disminuyendo el valor.
        while (exponente > 1)
        {
            //Multiplica el resultado con la base hasta que el exponente sea menor a 2
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
    //3 Funcion
    if (x > 10)
    {
        resultado = factorial(x);
        printf("El resultado de F(%d) es: %2.f \n", x, resultado);
    }
    //2 Funcion
    else if (x >= 5 && x <= 10)
    {
        printf("Para este calculo necesita un valor extra (b).");
        printf("\nIngrese el valor de b: ");
        scanf("%d", &b);
        resultado = factorial(x + b);
        resultadoPot = potencia(resultado, x);
        printf("El resultado de F(%d)! elevado a %d es: %ld \n", (x + b), x, resultadoPot);
    }
    //3 Funcion
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
    //Valor fuera de rango.
    else
    {
        printf("El valor ingresado debe estar entre ]0,+inf[");
    }
    
    return 0;
    

}
