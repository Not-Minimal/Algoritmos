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

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; palabra[j] != '\0'; ++j)
        {
            palabra[j] = toupper(palabra[j]);
        }
    }

    printf("%s\n", palabra);
    return 0;
}