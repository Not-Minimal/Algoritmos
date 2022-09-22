// Sirve para documentar o comentar en c
#include<stdio.h>
// Definicion de Variables Globales
int a, b, s;
int main(){
    //Definicion de Variables locales
    printf("Ingrese valores a sumar: ");
    scanf("%d%d", &a,&b);
    s = a + b;
    printf("El resultado de suma = %d", s);
    printf("\n");
    return 0;
}
