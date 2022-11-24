#include <stdio.h>

int buscar_letra(char palabra[], char letra, int indice);

int main(int argc, char const *argv[])
{

    return 0;
}

int buscar_letra(char palabra[], char letra, int indice)
{

    if (palabra[indice] == letra)
    {
        return 1;
    }
    else if (palabra[indice] == '\0')
    {
        return 0;
    }
    else
    {
        return buscar_letra(palabra, letra, indice);
    }
}