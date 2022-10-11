#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void introduccion_datos(void);
int buscar_palabras();
void hor_dre(char *);
void hor_esq(char *);
void ver_bai(char palabra[]);
void ver_dal(char palabra[]);
void mostrar_tabla();
void inicializar_tabla();
void salir();

char tabla[11][11];
unsigned dimension;
int main()
{

    char sel;

    do
    {
        system("clear");
        printf("Sopa de Letras");
        printf("\n");
        printf("Elija una opcion: ");
        printf("\n");
        printf("1.- Introduccion de datos. ");
        printf("\n");
        printf("2.- Buscar palabras. ");
        printf("\n");
        printf("3.- Mostrar Tabla. ");
        printf("\n");
        printf("4.- Salir. ");
        printf("\n");
        
        do
        {
            sel = getchar();
        } while ((sel < '1' || sel > '4') && sel != 27);

        switch (sel)
        {
        case '1':
            introduccion_datos();
            break;

        case '2':
            buscar_palabras();
            break;

        case '3':
            mostrar_tabla();
            break;

        case '4':
            salir();
            ;
        };
    } while (1);

    return 0;
}

int buscar_palabras(void)
{
    char palabra[11];
    do
    {
        printf("Introducir la palabra a buscar ");
        printf("(premeu 0+INTRO per terminar)...");
        scanf(" %s", palabra);
        printf(" ");
        system("clear");
        hor_dre(palabra);
        hor_esq(palabra);
        ver_bai(palabra);
        ver_dal(palabra);
        mostrar_tabla();
        inicializar_tabla();
    } while (*palabra != '0');
    return 0;
}

void hor_dre(char palabra[])
{
    unsigned i, j;
    char texto[10];
    char *puntero;

    for (i = 0; i < dimension; i++)
    {
        for (j = 0; j < dimension; j++)
            texto[j] = tabla[i][j];

        if (!(puntero = strstr(texto, palabra)))
            continue;

        for (j = 0; j < strlen(palabra); j++)
            puntero[j] = toupper(puntero[j]);

        for (j = 0; j < dimension; j++)
            tabla[i][j] = texto[j];

        printf(" %s fila %d horitzontal hacia la derecha ", palabra, i);
        return;
    }
}
void hor_esq(char palabra[])
{
    unsigned i, j;
    char texto[10];
    char *puntero;

    for (i = 0; i < dimension; i++)
    {
        for (j = 0; j < dimension; j++)
            texto[dimension - j - 1] = tabla[i][j];

        if (!(puntero = strstr(texto, palabra)))
            continue;

        for (j = 0; j < strlen(palabra); j++)
            puntero[j] = toupper(puntero[j]);

        for (j = 0; j < dimension; j++)
            tabla[i][j] = texto[dimension - j - 1];
        printf(" %s fila %d horitzolntal hacia izquierda ", palabra, i);
        return;
    }
}
void ver_bai(char palabra[])
{
    unsigned i, j, k;
    char texto[10];
    char *puntero;

    for (i = 0; i < dimension; i++)
    {
        for (j = 0; j < dimension; j++)
            texto[j] = tabla[j][i];
        j = k;
        if (!(puntero = strstr(texto, palabra)))
            continue;

        for (j = 0; j < strlen(palabra); j++)
            puntero[j] = toupper(puntero[j]);

        for (j = 0; j < dimension; j++)
            tabla[j][i] = texto[j];

        printf(" %s columna %d hacia abajo ", palabra, i);
        return;
    }
}
void ver_dal(char palabra[])
{
    unsigned i, j;
    char texto[10];
    char *puntero;

    for (i = 0; i < dimension; i++)
    {
        for (j = 0; j < dimension; j++)
            texto[j] = tabla[dimension - j - 1][i];

        if (!(puntero = strstr(texto, palabra)))
            continue;

        for (j = 0; j < strlen(palabra); j++)
            puntero[j] = toupper(puntero[j]);

        for (j = 0; j < dimension; j++)
            tabla[dimension - j - 1][i] = texto[j];

        printf(" %s columna %d vertical hacia arriba ", palabra, i);
        return;
    }
}
void introduccion_datos(void)
{
    unsigned i;

    printf("Introducir la dimension de la sopa de letras ");
    scanf(" %d", &dimension);
    printf("Introducir el tablero por filas ");
    for (i = 0; i < dimension; i++)
        scanf(" %s", tabla[i]);
}
void inicializar_tabla()
{
    unsigned i, j;

    for (i = 0; i < dimension; i++)
    {
        for (j = 0; j < dimension; j++)
        {
            tabla[i][j] = tolower(tabla[i][j]);
        }
    }
}

void mostrar_tabla()
{
    unsigned i, j;

    for (i = 0; i < dimension; i++)
    {
        for (j = 0; j < dimension; j++)
        {
            printf("%c", tabla[i][j]);
        }
        printf(" ");
    }
}

void salir()
{
    system("exit");
}