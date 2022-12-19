#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

//Agregar Prototipos de Funciones
void usuario_Login();
void agregar_Producto();
void actualizar_Producto();
void buscar_Productos();
void eliminar_Productos();

//Agregar Estructuras Predefinidas

//Estructura Teclado
struc teclado{
    int identificador;
    char Marca[20];
    char Modelo[20];
    char Idioma[20];
}

//Estructura Mouse
struc mouse{
    int identificador;
    char Marca[20];
    char Modelo[20];
}

//Estructura Monitor
struc monitor{
    int identificador;
    char Marca[20];
    char Modelo[20];
    int Pulgadas[20];
}

//Estructura Notebook
struc notebook{
    int identificador;
    char Marca[20];
    char Modelo[20];
    int CantidadRam;
    char Procesador[20];
    int Pulgadas[20];
}

//Estructura Escritorio
struc escritorio{
    int identificador;
    char Marca[20];
    char Modelo[20];
    int CantidadRam;
    char Procesador[20];
    struct teclado;
    struct mouse;
    struct monitor;
}

//Estructura Usuario
struc notebook{
    int identificador;
    char Marca[20];
    char Modelo[20];
    int Cantidad_Ram;
    char Procesador[20];
    int Pulgadas[20];
}


