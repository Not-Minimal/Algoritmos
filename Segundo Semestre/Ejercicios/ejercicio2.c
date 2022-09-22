#include<stdio.h>
#include <math.h>

int x1, x2, y1, y2, resultado;

int main()
{
    printf("Ingrese 4 puntos del plano cartesiano, tales que sea: x1, x2, y1 e y2");
    scanf("%d%d%d%d", &x1,&x2,&y1,&y2);
    resultado = ((((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))));
    printf("La diferencia entre los puntos es = %d", resultado);
    printf("\n");
    return 0;
}
