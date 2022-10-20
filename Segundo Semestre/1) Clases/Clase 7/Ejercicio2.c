#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n1, n2, resta = 0, suma = 0;
    printf("\nIngrese datos de N1 y N2: ");
    scanf("%d %d", &n1, &n2);
    suma = op_basicas(n1, n2, &resta);
    direccion = &resta;
    printf("\nDireccion de la variable resta [%d]", direccion);
    printf("\n Suma = %d y resta = %d", suma, resta);
    return 0;
}

int op_basicas(int a, int b, int *r)
{
    
}
