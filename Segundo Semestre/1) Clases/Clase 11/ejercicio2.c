#include <stdio.h>
 
// Función recursivo para calcular el factorial de un número
unsigned long factorial(int n)
{
    // caso base: si `n` es 0 o 1
    if (n < 1) {
        return 1;
    }
    // usa la relación de recurrencia
    return n * factorial(n - 1);
}
 
int main()
{
    int n = 5;
    printf("El factorial de %d es %lu", n, factorial(n));
    return 0;
}