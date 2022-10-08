#include <stdio.h>
// Ejemplo simple de uso de matriz para generar un mapa de un juego simple.
// Tomar en consideración cómo se genera el arreglo y cómo se muestra
// Para calcular bien los movimientos en el eje x e y.
// En este caso están los ejes al revez, lo ideal sería corregir aquello
// Para que al sumarle al y, suba, y al restarte al y, baje.
void limpiarPantalla()
{
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}
int main()
{
    char a[10][10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            a[i][j] = ' ';
        }
    }
    int x = 4, y = 4;
    int e_x = 1, e_y = 1;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%c ", a[i][j]);
        }
        printf("\n");
    }
    char input;
    while (1)
    {
        limpiarPantalla();
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                // Mostrar una z si la pos es la del jugador.
                if (x == i && y == j)
                {
                    printf("Z%d", a[i][j]);
                }
                else
                {
                    // Mostrar una O para el enemigo.

                    if (e_x == i && e_x == j)
                    {
                        printf("O%d", a[i][j]);
                    }
                    // Mostrar el caracter almacenado en a, que es un espacio
                    else
                    {
                        printf("%c ", a[i][j]);
                    }
                }
            }
            printf("\n");
        }
        scanf("%c", &input);
        switch (input)
        {
        case 'w':
            x--;
            break;
        case 'a':
            y--;
            break;
        case 's':
            x++;
            break;
        case 'd':
            y++;
            break;
        }
    }
    return 0;
}