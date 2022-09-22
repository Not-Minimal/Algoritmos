//Resolver la pendiente de una recta
#include<stdio.h>
int x1, x2, y1, y2, resultado;

int main(int argc, char const *argv[])
{
    printf("Ingrese primera coordenada (x,y): ");
    scanf("%d%d", &x1, &y1);
    printf("Ingrese segunda coordenada (x,y): ");
    scanf("%d%d", &x2, &y2);
    resultado = ((y2-y1)/(x2-x1));
    printf("La pendiente de la recta entre los puntos es: = %d", resultado);
    printf("\n");
    return 0;
}
