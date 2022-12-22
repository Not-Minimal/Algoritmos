#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Agregar Prototipos de Funciones
int iniciar_Sesion();
void usuario_Login();
int agregar_Productos();
int actualizar_Producto();
int listar_Productos();
int eliminar_Productos();
// Funciones Encargadas de Agregar productos
void agregar_Teclado();
void agregar_Mouse();
void agregar_Monitor();
void agregar_Notebook();
void agregar_Escritorio();
// Funciones Encargadas de Actualizar productos
void actualizar_Teclado();
void actualizar_Mouse();
void actualizar_Monitor();
void actualizar_Notebook();
void actualizar_Escritorio();
// Funciones Encargadas de Listar productos
void listar_Teclado();
void listar_Mouse();
void listar_Monitor();
void listar_Notebook();
void listar_Escritorio();
// Funciones Encargadas de Eliminar productos
void eliminar_Teclado();
void eliminar_Mouse();
void eliminar_Monitor();
void eliminar_Notebook();
void eliminar_Escritorio();

// Agregar Estructuras Predefinidas
// Estructura Teclado
struct teclado
{
    int identificador;
    char Marca[20];
    char Modelo[20];
    char Idioma[20];
};

// Estructura Mouse
struct mouse
{
    int identificador;
    char Marca[20];
    char Modelo[20];
};

// Estructura Monitor
struct monitor
{
    int identificador;
    char Marca[20];
    char Modelo[20];
    float Pulgadas[20];
};

// Estructura Notebook
struct notebook
{
    int identificador;
    char Marca[20];
    char Modelo[20];
    int CantidadRam;
    char Procesador[20];
    int Pulgadas[20];
};

// Estructura Escritorio
struct escritorio
{
    int identificador;
    char Marca[20];
    char Modelo[20];
    int CantidadRam;
    char Procesador[20];
    struct teclado direccion_teclado;
    struct mouse direccion_mouse;
    struct monitor direccion_monitor;
};

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

void usuario_Login()
{
    // Precargar Datos de Usuario
    usuario registro_Informacion[2];
    strcpy(registro_Informacion->Nombres, "Saul");
    strcpy(registro_Informacion->ApellidoPaterno, "Munoz");
    strcpy(registro_Informacion->ApellidoMaterno, "Pedreros");
    printf("%s %s %s\n", registro_Informacion->Nombres, registro_Informacion->ApellidoPaterno, registro_Informacion->ApellidoMaterno);
}
int iniciar_Sesion()
{
    // Precargar Nombre de Usuario y Contraseña
    usuario registro_Informacion[1];
    strcpy(registro_Informacion->NombreUsuario, "Admin");
    registro_Informacion->Clave = 123;

    char usuario[6];
    int clave;
    printf("Ingrese Usuario: ");
    scanf("%s", usuario);
    printf("Ingrese Clave: ");
    scanf("%d", &clave);
    if ((strcmp(usuario, registro_Informacion->NombreUsuario) == 0 && clave == registro_Informacion->Clave)) // Tiene que pertenecer a una estructura
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

    switch (opcion)
    {
        break;
    case 1:
    {
        return 1;
    }
    break;
    case 2:
    {
        return 2;
    }
    break;
    case 3:
    {
        return 3;
    }
    break;
    case 4:
    {
        return 4;
    }
    break;
    case 5:
    {
        return 5;
    }
    break;
    }
    if (opcion == 0)
    {
        return 0;
    }
}
void agregar_Teclado()
{
    int otro_Registro;
    FILE *fp;
    struct teclado registro_Producto;

    do
    {
        // Descripcion: Esta función despeja la ventana de texto actual
        // y coloca el cursor en la esquina superior izquierda: posición (1,1).
        printf("Agregar Teclado\n");
        fp = fopen("Registro_Teclado.txt", "a");
        printf("Identificador: \n");
        scanf("%d", &registro_Producto.identificador);
        printf("Marca: \n");
        scanf("%s", registro_Producto.Marca);
        printf("Modelo: \n");
        scanf("%s", registro_Producto.Modelo);
        printf("Idioma: \n");
        scanf("%s", registro_Producto.Idioma);
        if (fp == NULL)
        {
            fprintf(stderr, "No se puede abrir el archivo\n");
        }
        else
        {
            printf("Se ha agregado correctamente el nuevo teclado\n");
        }
        fwrite(&registro_Producto, sizeof(struct teclado), 1, fp);
        fclose(fp);
        printf("Quieres agregar otro teclado?\n");
        printf("1. Si\n");
        printf("2. No\n");
        scanf("%d", &otro_Registro);

    } while (otro_Registro == 1);
}
void agregar_Mouse()
{
    int otro_Registro;
    FILE *fp;
    struct mouse registro_Producto;

    do
    {
        // Descripcion: Esta función despeja la ventana de texto actual
        // y coloca el cursor en la esquina superior izquierda: posición (1,1).
        printf("Agregar mouse\n");
        fp = fopen("registro_mouse.txt", "a");
        printf("Identificador: \n");
        scanf("%d", &registro_Producto.identificador);
        printf("Marca: \n");
        scanf("%s", registro_Producto.Marca);
        printf("Modelo: \n");
        scanf("%s", registro_Producto.Modelo);
        if (fp == NULL)
        {
            fprintf(stderr, "No se puede abrir el archivo\n");
        }
        else
        {
            printf("Se ha agregado correctamente el nuevo mouse\n");
        }
        fwrite(&registro_Producto, sizeof(struct mouse), 1, fp);
        fclose(fp);
        printf("Quieres agregar otro mouse?\n");
        printf("1. Si\n");
        printf("2. No\n");
        scanf("%d", &otro_Registro);

    } while (otro_Registro == 1);
}
void agregar_Monitor()
{
    int otro_Registro;
    FILE *fp;
    struct monitor registro_Producto;

    do
    {
        // Descripcion: Esta función despeja la ventana de texto actual
        // y coloca el cursor en la esquina superior izquierda: posición (1,1).
        printf("Agregar monitor\n");
        fp = fopen("registro_monitor.txt", "a");
        printf("Identificador: \n");
        scanf("%d", &registro_Producto.identificador);
        printf("Marca: \n");
        scanf("%s", registro_Producto.Marca);
        printf("Modelo: \n");
        scanf("%s", registro_Producto.Modelo);
        printf("Pulgadas: \n");
        scanf("%f", &registro_Producto.Pulgadas);
        if (fp == NULL)
        {
            fprintf(stderr, "No se puede abrir el archivo\n");
        }
        else
        {
            printf("Se ha agregado correctamente el nuevo monitor\n");
        }
        fwrite(&registro_Producto, sizeof(struct monitor), 1, fp);
        fclose(fp);
        printf("Quieres agregar otro monitor?\n");
        printf("1. Si\n");
        printf("2. No\n");
        scanf("%d", &otro_Registro);

    } while (otro_Registro == 1);
}
void agregar_Notebook()
{
    int otro_Registro;
    FILE *fp;
    struct notebook registro_Producto;

    do
    {
        // Descripcion: Esta función despeja la ventana de texto actual
        // y coloca el cursor en la esquina superior izquierda: posición (1,1).
        printf("Agregar notebook\n");
        fp = fopen("registro_notebook.txt", "a");
        printf("Identificador: \n");
        scanf("%d", &registro_Producto.identificador);
        printf("Marca: \n");
        scanf("%s", registro_Producto.Marca);
        printf("Modelo: \n");
        scanf("%s", registro_Producto.Modelo);
        printf("Cantidad de Ram: \n");
        scanf("%d", &registro_Producto.CantidadRam);
        printf("Procesador: \n");
        scanf("%s", registro_Producto.Procesador);
        printf("Pulgadas: \n");
        scanf("%f", &registro_Producto.Pulgadas);
        if (fp == NULL)
        {
            fprintf(stderr, "No se puede abrir el archivo\n");
        }
        else
        {
            printf("Se ha agregado correctamente el nuevo notebook\n");
        }
        fwrite(&registro_Producto, sizeof(struct notebook), 1, fp);
        fclose(fp);
        printf("Quieres agregar otro notebook?\n");
        printf("1. Si\n");
        printf("2. No\n");
        scanf("%d", &otro_Registro);

    } while (otro_Registro == 1);
}
void agregar_Escritorio()
{
    int otro_Registro;
    FILE *fp;
    struct escritorio registro_Producto;

    do
    {
        // Descripcion: Esta función despeja la ventana de texto actual
        // y coloca el cursor en la esquina superior izquierda: posición (1,1).
        printf("Agregar escritorio\n");
        fp = fopen("registro_escritorio.txt", "a");
        printf("Identificador: \n");
        scanf("%d", &registro_Producto.identificador);
        printf("Marca: \n");
        scanf("%s", registro_Producto.Marca);
        printf("Modelo: \n");
        scanf("%s", registro_Producto.Modelo);
        printf("Cantidad de Ram: \n");
        scanf("%d", &registro_Producto.CantidadRam);
        printf("Procesador: \n");
        scanf("%s", registro_Producto.Procesador);
        printf("Identificador Teclado: \n");
        scanf("%d", &registro_Producto.direccion_teclado.identificador);
        printf("Marca Teclado: \n");
        scanf("%s", registro_Producto.direccion_teclado.Marca);
        printf("Modelo Teclado: \n");
        scanf("%s", registro_Producto.direccion_teclado.Modelo);
        printf("Idioma Teclado: \n");
        scanf("%s", registro_Producto.direccion_teclado.Idioma);
        printf("Identificador mouse: \n");
        scanf("%d", &registro_Producto.direccion_mouse.identificador);
        printf("Marca mouse: \n");
        scanf("%s", registro_Producto.direccion_mouse.Marca);
        printf("Modelo mouse: \n");
        scanf("%s", registro_Producto.direccion_mouse.Modelo);
        printf("Identificador monitor: \n");
        scanf("%d", &registro_Producto.direccion_monitor.identificador);
        printf("Marca monitor: \n");
        scanf("%s", registro_Producto.direccion_monitor.Marca);
        printf("Modelo monitor: \n");
        scanf("%s", registro_Producto.direccion_monitor.Modelo);
        printf("Pulgadas monitor: \n");
        scanf("%f", registro_Producto.direccion_monitor.Pulgadas);

        if (fp == NULL)
        {
            fprintf(stderr, "No se puede abrir el archivo\n");
        }
        else
        {
            printf("Se ha agregado correctamente el nuevo escritorio\n");
        }
        fwrite(&registro_Producto, sizeof(struct escritorio), 1, fp);
        fclose(fp);
        printf("Quieres agregar otro escritorio?\n");
        printf("1. Si\n");
        printf("2. No\n");
        scanf("%d", &otro_Registro);

    } while (otro_Registro == 1);
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

    switch (opcion)
    {
    case 0:
    {
        return 0;
    }
    break;
    case 1:
    {
        return 1;
    }
    break;
    case 2:
    {
        return 2;
    }
    break;
    case 3:
    {
        return 3;
    }
    break;
    case 4:
    {
        return 4;
    }
    break;
    case 5:
    {
        return 5;
    }
    break;
    }
}
int listar_Productos()
{
    int opcion;
    printf("Ingrese opcion: ");
    scanf("%d", &opcion);

    printf("\n1.Listar Teclado");
    printf("\n2.Listar Mouse");
    printf("\n3.Listar Monitor");
    printf("\n4.Listar Notebook");
    printf("\n5.Listar PC de Escritorio");

    switch (opcion)
    {
    case 0:
    {
        return 0;
    }
    break;
    case 1:
    {
        return 1;
    }
    break;
    case 2:
    {
        return 2;
    }
    break;
    case 3:
    {
        return 3;
    }
    break;
    case 4:
    {
        return 4;
    }
    break;
    case 5:
    {
        return 5;
    }
    break;
    }
}
void listar_Teclado()
{
    FILE *fp;
    struct teclado registro_Informacion;
    fp = fopen("Registro_Teclados.txt", "r");

    printf("Listado de Teclados\n");
    if (fp = NULL)
    {
        fprintf(stderr, "No se puede abrir el archivo\n");
    }
    else
    {
        printf("Teclados: \n");
    }
    while (fread(&registro_Informacion, sizeof(struct teclado), 1, fp))
    {
        printf("Identificador: %d", registro_Informacion.identificador);
        printf("Identificador: %s", registro_Informacion.Marca);
        printf("Identificador: %s", registro_Informacion.Modelo);
        printf("Identificador: %s", registro_Informacion.Idioma);
    }
}
void listar_Mouse() {}
void listar_Monitor() {}
void listar_Notebook() {}
void listar_Escritorio() {}
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

    switch (opcion)
    {
    case 0:
    {
        return 0;
    }
    break;
    case 1:
    {
        return 1;
    }
    break;
    case 2:
    {
        return 2;
    }
    break;
    case 3:
    {
        return 3;
    }
    break;
    case 4:
    {
        return 4;
    }
    break;
    case 5:
    {
        return 5;
    }
    break;
    }
}
int main(int argc, char const *argv[])
{
    int clave; // Admin 123
    int opcion, opcion_Menu;

    clave = iniciar_Sesion();
    if (clave == 1)
    {
        printf("Acceso Permitido\n");
        usuario_Login();
        while (opcion_Menu != 6)
        {
            printf("\n1.Agregar Producto(s)");
            printf("\n2.Listar Productos(s)");
            printf("\n3.Actualizar Productos");
            printf("\n4.Eliminar Productos");
            printf("\n5.Salir");
            printf("\nIngrese opcion: ");
            scanf("%d",&opcion_Menu);
            
            switch (opcion_Menu)
            {
            case 1:
            {
                opcion_Menu = agregar_Productos();
                printf("\nQue producto desea agregar: ");
                scanf("%d", &opcion);
                if (opcion == 1)
                {
                    agregar_Teclado();
                }
                else if (opcion == 2)
                {
                    agregar_Mouse();
                }
                else if (opcion == 3)
                {
                    agregar_Monitor();
                }
                else if (opcion == 4)
                {
                    agregar_Notebook();
                }
                else if (opcion == 5)
                {
                    agregar_Escritorio();
                }
            }
            break;
            case 2:
            {
                opcion_Menu = listar_Productos();
                printf("\nQue producto desea listar: ");
                scanf("%d", &opcion);
                if (opcion == 1)
                {
                    listar_Teclado();
                }
                else if (opcion == 2)
                {
                    listar_Mouse();
                }
                else if (opcion == 3)
                {
                    listar_Monitor();
                }
                else if (opcion == 4)
                {
                    listar_Notebook();
                }
                else if (opcion == 5)
                {
                    listar_Escritorio();
                }
            }
            break;
            case 5:
            {
                printf("Gracias :)");
                exit(0);
                break;
            }
            default:
                printf("Ingrese un numero valido\n");
                printf("Ingrese 0 para continuar: ");
                int continuar;
                scanf("%d", &continuar);
                break;
            }
        }
    }
    else
    {
        printf("Acceso Denegado");
    }
    return 0;
}
