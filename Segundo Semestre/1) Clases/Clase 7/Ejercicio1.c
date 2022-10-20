#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a, *b;
    printf("\nIngrese a: ");
    scanf("%d", &a);
    printf("A vale %d", a);
    b = &a;
    printf("\nLa direccion de a es [%d] y el contenido es: %d", b, *b);
    return 0;
}
