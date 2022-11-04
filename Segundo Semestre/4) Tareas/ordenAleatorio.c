#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Funciones Creadas
int menuPrincipal();
void pasarHorizontal(char palabra[], int f, int c);
void pasarHorizontalInverso(char palabra[], int f, int c);
void pasarVertical(char palabra[], int f, int c);
void pasarVerticalInverso(char palabra[], int f, int c);
void generarMatriz();
void rellenarMatriz();
void iniciarJuego();

// Funciones Globales
int i, j, k, l, filas = 10, columnas = 10, n, cantidadPalabras, posicionPalabra, opcion;
char palabra[10];
char palabra2[10];
char matriz[35][35];
char matrizBusqueda[35][35];

// Menu de Opciones de Inicio
int menuPrincipal()
{
    int opcion;
    do
    {
        printf("Opciones: \n");
        printf("1. Crear Sopa de Letras\n");
        printf("2. Salir \n");
        printf("Ingrese la opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
        {
            do
            {
                printf("Ingrese el tamaño de la Sopa de Letras con Rango [10,35]: ");
                scanf("%d", &n);
            } while (n < 10 || n > 35);
            filas = n;
            columnas = n;
            return 1;
        }
        break;
        case 2:
        {
            printf("Gracias :) \n");
            return 2;
        }
        break;
        }
    } while (opcion < 1 && opcion > 2 && opcion != 2);
    return 0;
}
// Funcion para pasar desde isquierda a derecha
void pasarHorizontal(char palabra[], int f, int c)
{
    if (matriz[i][j] == 32)
    {
        for (int i = 0; i < strlen(palabra); i++)
        {
            matriz[f][c + i] = palabra[i];
        }
    }
}
// Funcion para pasar desde Derecha a Izquierda
void pasarHorizontalInverso(char palabra[], int f, int c)
{
    int k = 0;
    if (matriz[i][j] == 32)
    {
        for (int i = strlen(palabra) - 1; i >= 0; i--)
        {
            matriz[f][c + k] = palabra[i];
            k++;
        }
    }
}
// Funcion para pasar desde Arriba hacia Abajo
void pasarVertical(char palabra[], int f, int c)
{
    if (matriz[i][j] == 32)
    {
        for (int i = 0; i < strlen(palabra); i++)
        {
            matriz[f + i][c] = palabra[i];
        }
    }
}
// Funcion para pasar desde Abajo hacia Arriba
void pasarVerticalInverso(char palabra[], int f, int c)
{
    int k = 0;
    if (matriz[i][j] == 32)
    {
        for (int i = strlen(palabra) - 1; i >= 0; i--)
        {
            matriz[f + k][c] = palabra[i];
            k++;
        }
    }
}
// Funcion para visualizar o imprimir matriz
void visualizarMatriz()
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("[%c]  ", matriz[i][j]);
        }
        printf("\n");
    }
}
// Funcion que genera la matriz con espacion vacios
void generarMatriz()
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j] = 32;
        }
    }
}
// Funcion que rellena los espacios vacios con letras aleatorias.
void rellenarMatriz()
{

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            if (matriz[i][j] == 32)
            {
                matriz[i][j] = rand() % 26 + 65;
            }
        }
    }
}
// Funcion que inicia el juego y ademas toma el tiempo.
void iniciarJuego()
{
    // Menu de opciones del juego
    system("clear");
    printf("\nOpciones: \n");
    printf("1. Iniciar Juego y Buscar palabras(3 intentos): \n");
    printf("2. Salir \n");
    scanf("%d", &opcion);
    char palabra2[strlen(palabra)];

    switch (opcion)
    {
    case 1:
    {
        rellenarMatriz();
        visualizarMatriz();
        printf("\n");
        for (i = 0; i < 3; i++)
        {
            printf("Ingrese palabra N°%d: ", i + 1);
            printf("\n");
            scanf("%s", palabra2);
            for (j = 0; j < n && palabra2[j] != '\0'; j++)
            {
                palabra2[j] = toupper(palabra2[j]);
            }
            //Contador que aumenta solo cuando encuentra los caracteres de forma linal
            int contador = 0;
            //Ciclo que recorre las filas en funcion de la cantidad de palabras ingresadas por usuario
            for (j = 0; j < cantidadPalabras; j++)
            {
                //Ciclo que recoorre las columnas para evaluar caracter a caracter
                for (k = 0, l = 0; l < strlen(palabra2); k++, l++)
                {
                    //Si los caracteres coinciden con el arreglo palabra2, aumenta el contador
                    if (matrizBusqueda[j][k] == palabra2[l])
                    {
                        contador++;
                    }
                }
                //si el contador es igual al tamaño de la palabra, ahora j o columnas sera igual a la cantidad de palabras
                if (contador == strlen(palabra2))
                {
                    j = cantidadPalabras;
                }
                else
                {
                    //Vuelve el contador a 0 si es que no encontro coincidencia.
                    contador = 0;
                }
            }
            if (contador == strlen(palabra2))
            {
                printf("Palabra encontrada\n");
            }
            else
            {
                printf("Palabra no encontrada\n");
            }
            contador = 0;
        }
        printf("\n");
        
    }
    break;
    case 2:
    {
        printf("Gracias :')");
    }
    break;
    }
}

int main(int argc, char const *argv[])
{
    system("clear");
    int opcion, l;
    opcion = menuPrincipal();

    if (opcion == 1)
    {
        //Lamar a funcion para generar inicialmente la matriz vacia
        generarMatriz();
        //Validacion de la cantidad de palabras en funcion del tamaño de la matriz
        do
        {
            printf("Ingrese la cantidad de palabras: ");
            scanf("%d", &cantidadPalabras);
            k = cantidadPalabras;
        } while (k < (n / 2) || k > (2 * n));
        
        char palabra[n];
        //Ciclo para ingresar palabras al arreglo en funcion de la cantidad elegida anteriormente
        for (cantidadPalabras = 0; cantidadPalabras < k; cantidadPalabras++)
        {
            i = 0;
            //Ingresar palabras
            do
            {
                printf("Ingrese palabra N°%d: ", cantidadPalabras + 1);
                printf("\n");
                scanf("%s", palabra);
                // Agregar palabras en una matriz
                for (j = 0; j < n && palabra[j] != '\0'; j++)
                {
                    //Ingresar palabra a la matriz con Mayusculas
                    matrizBusqueda[cantidadPalabras][j] = toupper(palabra[j]);
                }
                i++;
            } while ((strlen(palabra) < 1) || (strlen(palabra) > n));
            
            //Reiniciar el tiempo
            srand(time(NULL));
            int x, y;
            opcion = 0 + rand() % (5 - 1);

            switch (opcion)
            {
            case 1:
            {
                x = rand() % filas;
                y = 0 + rand() % (columnas + 1 - strlen(palabra));
                if (y + strlen(palabra) >= 0)
                {
                    pasarHorizontal(palabra, x, y);
                }
                break;
            }
            case 2:
            {
                x = rand() % filas;
                y = 0 + rand() % (columnas + 1 - strlen(palabra));
                if (strlen(palabra) + y >= 0)
                {
                    pasarHorizontalInverso(palabra, x, y);
                }
                break;
            }
            case 3:
            {
                x = 0 + rand() % (filas + 1 - strlen(palabra));
                y = rand() % columnas;
                if (x + strlen(palabra) >= 0)
                {
                    pasarVertical(palabra, x, y);
                }
                break;
            }

            case 4:
            {
                x = 0 + rand() % (filas + 1 - strlen(palabra));
                y = rand() % columnas;
                if (strlen(palabra) + y >= 0)
                {
                    pasarVerticalInverso(palabra, x, y);
                }
                break;
            }
            }
        }
    }
    iniciarJuego();
    return 0;
}
