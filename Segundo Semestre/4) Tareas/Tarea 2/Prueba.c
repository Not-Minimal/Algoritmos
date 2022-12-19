#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Agregar Prototipos de Funciones
void menuInventario();
void usuario_Login();
void agregar_Producto();
void actualizar_Producto();
void buscar_Productos();
void eliminar_Productos();

// Agregar Estructuras Predefinidas

// Estructura Teclado
struc teclado
{
    int identificador;
    char Marca[20];
    char Modelo[20];
    char Idioma[20];
}

// Estructura Mouse
struc mouse
{
    int identificador;
    char Marca[20];
    char Modelo[20];
}

// Estructura Monitor
struc monitor
{
    int identificador;
    char Marca[20];
    char Modelo[20];
    int Pulgadas[20];
}

// Estructura Notebook
struc notebook
{
    int identificador;
    char Marca[20];
    char Modelo[20];
    int CantidadRam;
    char Procesador[20];
    int Pulgadas[20];
}

// Estructura Escritorio
struc escritorio
{
    int identificador;
    char Marca[20];
    char Modelo[20];
    int CantidadRam;
    char Procesador[20];
    struct teclado;
    struct mouse;
    struct monitor;
}

// Estructura Usuario
struc usuario
{
    int identificador;
    char NombreUsuario[20];
    char Clave[20];
    char Nombres[20];
    char ApellidoPaterno[20];
    char ApellidoMaterno[20];
}

void menuInventario()
{
    int opcionMenu;
    while (opcionMenu !=6)
    {
        printf( "\n   1. Agregar Producto(s).");
        printf( "\n   2. Actualizar Productos(s)");
        printf( "\n   3. Visualizar Productos.";
        printf( "\n   4. Buscar Productos.");
        printf( "\n   5. Eliminar Productos.";
        printf( "\n   6. Salir." );
        
    }
    
}
