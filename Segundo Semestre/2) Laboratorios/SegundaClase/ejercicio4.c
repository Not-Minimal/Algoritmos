/* Programa: Letra vocal */
#include <stdio.h>

int main()
{
    char letra;

    printf("Introduzca una letra: ");
    scanf("%c", &letra);

    if ( letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' ||
         letra == 'o' || letra == 'O' || letra == 'u' || letra == 'U' )
        {
            printf( "Es Vocal");
            printf("\n");
        } else
        {
            printf( "No es Vocal");
            printf("\n");
        }
    return 0;
}