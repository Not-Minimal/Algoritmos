#include<stdio.h>
int x1, x2, y1, y2, resultado;
int main()
{
    printf("Ingrese 4 puntos del plano cartesiano, tales que sea: x1, x2, y1 e y2");
    printf("Ingrese x1");
    scanf("%d", &x1);
    printf("Ingrese x2");
    scanf("%d", &x2);
    printf("Ingrese y1");
    scanf("%d", &y1);
    printf("Ingrese y2");
    scanf("%d", &y2);
    resultado = ((((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))));
    printf("La diferencia entre los puntos es = %d", resultado);
    printf("\n");
    return 0;
}
