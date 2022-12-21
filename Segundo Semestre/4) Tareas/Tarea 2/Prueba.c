#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Agregar Prototipos de Funciones
int iniciar_Sesion();
void usuario_Login();
void menuInventario();
void agregar_Producto();
void actualizar_Producto();
void buscar_Productos();
void eliminar_Productos();

// Agregar Estructuras Predefinidas

// Estructura Teclado
typedef struct
{
    int identificador;
    char Marca[20];
    char Modelo[20];
    char Idioma[20];
} teclado;

// Estructura Mouse
typedef struct
{
    int identificador;
    char Marca[20];
    char Modelo[20];
} mouse;

// Estructura Monitor
typedef struct
{
    int identificador;
    char Marca[20];
    char Modelo[20];
    int Pulgadas[20];
} monitor;

// Estructura Notebook
typedef struct
{
    int identificador;
    char Marca[20];
    char Modelo[20];
    int CantidadRam;
    char Procesador[20];
    int Pulgadas[20];
} notebook;

// Estructura Escritorio
typedef struct
{
    int identificador;
    char Marca[20];
    char Modelo[20];
    int CantidadRam;
    char Procesador[20];
    struct teclado;
    struct mouse;
    struct monitor;
} escritorio;

// Estructura Usuario
typedef struct
{
    int identificador;
    char NombreUsuario[20];
    char Clave[20];
    char Nombres[20];
    char ApellidoPaterno[20];
    char ApellidoMaterno[20];
} usuario;

void menuInventario()
{
    int opcionMenu;

    do
    {
        printf("\n 1.Agregar Producto(s)");
        printf("\n 2.Actualizar Productos(s)");
        printf("\n 3.Visualizar Productos");
        printf("\n 4.Buscar Productos");
        printf("\n 5.Eliminar Productos");
        printf("\n 6.Salir");
        printf("\n Ingrese opcion: ");
        scanf("%d", &opcionMenu);
    } while (opcionMenu < 0 && opcionMenu > 6);
}
void usuario_Login()
{
    printf("Nombre: Saul Muñoz Pedreros\n");
}
int iniciar_Sesion()
{
    char usuario[6];
    int clave;
    printf("Ingrese Usuario: ");
    gets(usuario);
    printf("Ingrese Clave: ");
    scanf("%d", &clave);
    if ((strcmp(usuario, "Admin") == 0 && clave == 123456))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main(int argc, char const *argv[])
{
    int clave; //Admin 123456
    system("clear");
    clave = iniciar_Sesion();
    if (clave == 1)
    {
        printf("Acceso Permitido\n");
        usuario_Login();
        menuInventario();
    }else
    {
        printf("Acceso Denegado");
    }
    return 0;
}
