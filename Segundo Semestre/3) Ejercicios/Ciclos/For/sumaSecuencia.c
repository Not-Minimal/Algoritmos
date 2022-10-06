//Calcular la suma de los n numeros
#include<stdio.h>
int s, i, n;

int main(int argc, char const *argv[])
{
    printf("Ingrese la cantidad de n numeros a sumar: ");
    scanf("%d", &n);

    s = 0;
    for (i = 0; i <= n ; i++)
    {
       s = s+i;
    }
    printf("La suma de los primeros %d numeros es: %d", n, s);
    printf("\n");
    return 0;
}
