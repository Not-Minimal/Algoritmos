//Calcular el promedio de los productos
#include<stdio.h>
int x1, x2, resultado; 

int main(int argc, char const *argv[])
{
    printf("Ingrese primera variable: ");
    scanf("%d",&x1);
    printf("Ingrese segunda variable: ");
    scanf("%d",&x2);

    if(x2 == 0){ 
        printf("Debe ser distinto de 0");
    } else { 
        resultado = x1/x2;
        printf("La division es: %d", resultado);
        printf("\n");
    }

    return 0;
}
