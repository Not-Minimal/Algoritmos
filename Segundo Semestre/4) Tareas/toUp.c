#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{

    char palabra[10];
    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese la palabra: ");
        scanf("%s", palabra);
    }

    // Convertir cada char a mayúscula
    // usando toupper
    for (int i = 0; palabra[i] != '\0'; ++i)
    {
        palabra[i] = toupper(palabra[i]);
    }
    printf("%s\n", palabra);
    return 0;
}