#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Agregar Prototipos de Funciones
int iniciar_Sesion();
void usuario_Login();
void menuInventario();
int agregar_Productos();
int actualizar_Producto();
int buscar_Productos();
int eliminar_Productos();

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
    int Clave;
    char Nombres[20];
    char ApellidoPaterno[20];
    char ApellidoMaterno[20];
} usuario;

void menuInventario()
{
    int opcionMenu;

    do
    {
        printf("\n1.Agregar Producto(s)");
        printf("\n2.Actualizar Productos(s)");
        printf("\n3.Visualizar Productos");
        printf("\n4.Buscar Productos");
        printf("\n5.Eliminar Productos");
        printf("\n6.Salir");
        printf("\nIngrese opcion: ");
        scanf("%d", &opcionMenu);
    } while (opcionMenu < 0 && opcionMenu > 6);
}
void usuario_Login()
{
   
}
int iniciar_Sesion()
{
    //Precargar Nombre de Usuario y Contraseña
    usuario registro_Informacion[1];
    strcpy(registro_Informacion->NombreUsuario, "Admin");
    registro_Informacion->Clave = 123456;
    
    char usuario[6];
    int clave;
    printf("Ingrese Usuario: ");
    gets(usuario);
    printf("Ingrese Clave: ");
    scanf("%d", &clave);
    if ((strcmp(usuario, registro_Informacion->NombreUsuario) == 0 && clave == registro_Informacion->Clave)) //Tiene que pertenecer a una estructura
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int agregar_Productos()
{
    int opcion;
    printf("\n1.Agregar Teclado");
    printf("\n2.Agregar Mouse");
    printf("\n3.Agregar Monitor");
    printf("\n4.Agregar Notebook");
    printf("\n5.Agregar PC de Escritorio");
    printf("\nQue desea agregar: ");
    scanf("%d", &opcion);

    if (opcion == 1)
    {
        return 1;
    }
    else if (opcion == 2)
    {
        return 2;
    }
    else if (opcion == 3)
    {
        return 3;
    }
    else if (opcion == 4)
    {
        return 4;
    }
    else if (opcion == 5)
    {
        return 5;
    }
    else
    {
        return 0;
    }
}
int actualizar_Producto()
{
    int opcion;
    printf("Ingrese opcion: ");
    scanf("%d", &opcion);

    printf("\n1.Actualizar Teclado");
    printf("\n2.Actualizar Mouse");
    printf("\n3.Actualizar Monitor");
    printf("\n4.Actualizar Notebook");
    printf("\n5.Actualizar PC de Escritorio");

    if (opcion == 1)
    {
        return 1;
    }
    else if (opcion == 2)
    {
        return 2;
    }
    else if (opcion == 3)
    {
        return 3;
    }
    else if (opcion == 4)
    {
        return 4;
    }
    else if (opcion == 5)
    {
        return 5;
    }
    else
    {
        return 0;
    }
}
int buscar_Productos()
{
    int opcion;
    printf("Ingrese opcion: ");
    scanf("%d", &opcion);

    printf("\n1.Buscar Teclado");
    printf("\n2.Buscar Mouse");
    printf("\n3.Buscar Monitor");
    printf("\n4.Buscar Notebook");
    printf("\n5.Buscar PC de Escritorio");

    if (opcion == 1)
    {
        return 1;
    }
    else if (opcion == 2)
    {
        return 2;
    }
    else if (opcion == 3)
    {
        return 3;
    }
    else if (opcion == 4)
    {
        return 4;
    }
    else if (opcion == 5)
    {
        return 5;
    }
    else
    {
        return 0;
    }
}
int eliminar_Productos()
{
    int opcion;
    printf("Ingrese opcion: ");
    scanf("%d", &opcion);

    printf("\n1.Eliminar Teclado");
    printf("\n2.Eliminar Mouse");
    printf("\n3.Eliminar Monitor");
    printf("\n4.Eliminar Notebook");
    printf("\n5.Eliminar PC de Escritorio");

    if (opcion == 1)
    {
        return 1;
    }
    else if (opcion == 2)
    {
        return 2;
    }
    else if (opcion == 3)
    {
        return 3;
    }
    else if (opcion == 4)
    {
        return 4;
    }
    else if (opcion == 5)
    {
        return 5;
    }
    else
    {
        return 0;
    }
}
int main(int argc, char const *argv[])
{
    int clave; // Admin 123456
    int opcion;
    system("clear");
    clave = iniciar_Sesion();
    if (clave == 1)
    {
        printf("Acceso Permitido\n");
        usuario_Login();
        menuInventario();
        opcion = agregar_Productos();
        if (opcion == 1)
        {
            printf("\nAgregar Teclado\n");
        }
        else if (opcion == 2)
        {
            printf("Agregar Mouse\n");
        }
        else if (opcion == 3)
        {
            printf("Agregar Monitor\n");
        }
        else if (opcion == 4)
        {
            printf("Agregar Notebook\n");
        }
        else if (opcion == 5)
        {
            printf("Agregar PC Esctritorio\n");
        }
    }
    else
    {
        printf("Acceso Denegado");
    }
    return 0;
}
