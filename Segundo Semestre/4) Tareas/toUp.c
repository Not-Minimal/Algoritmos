#include <stdio.h>
#include <ctype.h>
int i, j, k;
int main(int argc, char const *argv[])
{

    char palabra[10];

    printf("Ingrese la palabra: ");
    scanf("%s", palabra);

    for (int i = 0; palabra[i] != '\0'; ++i)
    {
        palabra[i] = toupper(palabra[i]);
    }
    printf("%s\n", palabra);

    return 0;
}