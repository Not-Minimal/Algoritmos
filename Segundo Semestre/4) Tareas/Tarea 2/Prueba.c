#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Prototipos de Funciones Principales
int iniciar_Sesion();
void usuario_Login();
int agregar_Productos();
int actualizar_Productos();
int listar_Productos();
int eliminar_Productos();
// Funciones Secundarias Encargadas de Agregar productos
void agregar_Teclado();
void agregar_Mouse();
void agregar_Monitor();
void agregar_Notebook();
void agregar_Escritorio();
// Funciones Secundarias Encargadas de Actualizar productos
void actualizar_Teclado();
void actualizar_Mouse();
void actualizar_Monitor();
void actualizar_Notebook();
void actualizar_Escritorio();
// Funciones Secundarias Encargadas de Listar productos
void listar_Teclado();
void listar_Mouse();
void listar_Monitor();
void listar_Notebook();
void listar_Escritorio();
// Funciones Secundarias Encargadas de Eliminar productos
void eliminar_Teclado();
void eliminar_Mouse();
void eliminar_Monitor();
void eliminar_Notebook();
void eliminar_Escritorio();
// Funcion para volver stock de productos a 0
void reiniciar_Stock();
// Variables Globales para Stock de Productos
int stock_Teclado = 0, stock_Mouse = 0, stock_Monitor = 0, stock_Notebook = 0, stock_Escritorio = 0;

// Agregar Estructuras Predefinidas
// Estructura Teclado
struct teclado
{
    int Identificador;
    char Marca[20];
    char Modelo[20];
    char Idioma[20];
};

// Estructura Mouse
struct mouse
{
    int Identificador;
    char Marca[20];
    char Modelo[20];
};

// Estructura Monitor
struct monitor
{
    int Identificador;
    char Marca[20];
    char Modelo[20];
    int Pulgadas;
};

// Estructura Notebook
struct notebook
{
    int Identificador;
    char Marca[20];
    char Modelo[20];
    int CantidadRam;
    char Procesador[20];
    int Pulgadas;
};

// Estructura Escritorio
struct escritorio
{
    int Identificador;
    char Marca[20];
    char Modelo[20];
    int CantidadRam;
    char Procesador[20];
    struct teclado direccion_teclado;
    struct mouse direccion_mouse;
    struct monitor direccion_monitor;
};

// Estructura Usuario
struct usuario
{
    int Identificador;
    char NombreUsuario[20];
    int Clave;
    char Nombres[20];
    char ApellidoPaterno[20];
    char ApellidoMaterno[20];
};

void usuario_Login()
{
    // system("clear");
    //  Precargar Datos de Usuario
    struct usuario registro_Informacion[2];
    strcpy(registro_Informacion->Nombres, "Saul");
    strcpy(registro_Informacion->ApellidoPaterno, "Munoz");
    strcpy(registro_Informacion->ApellidoMaterno, "Pedreros");
    printf("Usuario: %s %s %s\n", registro_Informacion->Nombres, registro_Informacion->ApellidoPaterno, registro_Informacion->ApellidoMaterno);
}
int iniciar_Sesion()
{
    // system("clear");
    //  Precargar Nombre de Usuario y Contraseña
    struct usuario registro_Informacion[1];
    strcpy(registro_Informacion->NombreUsuario, "Admin");
    registro_Informacion->Clave = 123;

    char usuario[6];
    int clave, clave_erronea = 0, bandera = 0;
    while (strcmp(usuario, registro_Informacion->NombreUsuario) != 0 || clave_erronea < 3)
    {
        printf("Ingrese Usuario: ");
        scanf("%s", usuario);
        fflush(stdin);
        printf("Ingrese Clave: ");
        scanf("%d", &clave);
        fflush(stdin);
        if ((strcmp(usuario, registro_Informacion->NombreUsuario) == 0 && clave == registro_Informacion->Clave))
        {
            bandera = 1;
        }
        clave_erronea++;
        if (bandera == 1)
        {
            return 1;
        }
        else if (clave_erronea == 3)
        {
            return 0;
        }
    }
}

// Funciones Principales
int agregar_Productos()
{
    // system("clear");
    usuario_Login();
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

int actualizar_Productos()
{
    // system("clear");
    usuario_Login();
    int opcion;

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
    // system("clear");
    usuario_Login();
    int opcion;

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

int eliminar_Productos()
{
    // system("clear");
    usuario_Login();
    int opcion;
    

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

// Funciones Secundarias de Agregar Productos
void agregar_Teclado()
{
    // system("clear");
    usuario_Login();
    int otro_Registro;
    FILE *archivoLocal;
    struct teclado registro_Informacion;

    do
    {
        // Descripcion: Esta función despeja la ventana de texto actual
        // y coloca el cursor en la esquina superior izquierda: posición (1,1).
        printf("Agregar Teclado\n");
        archivoLocal = fopen("Teclado.txt", "a");
        printf("Identificador: \n");
        scanf("%d", &registro_Informacion.Identificador);
        fflush(stdin);
        printf("Marca: \n");
        scanf("%s", registro_Informacion.Marca);
        fflush(stdin);
        printf("Modelo: \n");
        scanf("%s", registro_Informacion.Modelo);
        fflush(stdin);
        printf("Idioma: \n");
        scanf("%s", registro_Informacion.Idioma);
        fflush(stdin);

        if (archivoLocal == NULL)
        {
            fprintf(stderr, "No existen registros\n");
        }
        else
        {
            printf("Se ha agregado el nuevo teclado\n");
        }
        fwrite(&registro_Informacion, sizeof(struct teclado), 1, archivoLocal);
        fclose(archivoLocal);
        printf("Quieres agregar otro teclado?\n");
        printf("1. Si\n");
        printf("2. No\n");
        scanf("%d", &otro_Registro);
        stock_Teclado++;
    } while (otro_Registro == 1);
}
void agregar_Mouse()
{
    // system("clear");
    usuario_Login();
    int otro_Registro;
    FILE *archivoLocal;
    struct mouse registro_Informacion;

    do
    {
        // Descripcion: Esta función despeja la ventana de texto actual
        // y coloca el cursor en la esquina superior izquierda: posición (1,1).
        printf("Agregar mouse\n");
        archivoLocal = fopen("Mouse.txt", "a");
        printf("Identificador: \n");
        scanf("%d", &registro_Informacion.Identificador);
        fflush(stdin);
        printf("Marca: \n");
        scanf("%s", registro_Informacion.Marca);
        fflush(stdin);
        printf("Modelo: \n");
        scanf("%s", registro_Informacion.Modelo);
        fflush(stdin);
        if (archivoLocal == NULL)
        {
            fprintf(stderr, "No existen registros\n");
        }
        else
        {
            printf("Se ha agregado correctamente el nuevo mouse\n");
        }
        fwrite(&registro_Informacion, sizeof(struct mouse), 1, archivoLocal);
        fclose(archivoLocal);
        printf("Quieres agregar otro mouse?\n");
        printf("1. Si\n");
        printf("2. No\n");
        scanf("%d", &otro_Registro);
        fflush(stdin);
        stock_Mouse++;
    } while (otro_Registro == 1);
}
void agregar_Monitor()
{
    // system("clear");
    usuario_Login();
    int otro_Registro;
    FILE *archivoLocal;
    struct monitor registro_Informacion;

    do
    {
        // Descripcion: Esta función despeja la ventana de texto actual
        // y coloca el cursor en la esquina superior izquierda: posición (1,1).
        printf("Agregar monitor\n");
        archivoLocal = fopen("Monitor.txt", "a");
        printf("Identificador: \n");
        scanf("%d", &registro_Informacion.Identificador);
        fflush(stdin);
        printf("Marca: \n");
        scanf("%s", registro_Informacion.Marca);
        fflush(stdin);
        printf("Modelo: \n");
        scanf("%s", registro_Informacion.Modelo);
        fflush(stdin);
        printf("Pulgadas: \n");
        scanf("%d", &registro_Informacion.Pulgadas);
        fflush(stdin);
        if (archivoLocal == NULL)
        {
            fprintf(stderr, "No existen registros\n");
        }
        else
        {
            printf("Se ha agregado correctamente el nuevo monitor\n");
        }
        fwrite(&registro_Informacion, sizeof(struct monitor), 1, archivoLocal);
        fclose(archivoLocal);
        printf("Quieres agregar otro monitor?\n");
        printf("1. Si\n");
        printf("2. No\n");
        scanf("%d", &otro_Registro);
        stock_Monitor++;
    } while (otro_Registro == 1);
}
void agregar_Notebook()
{
    // system("clear");
    usuario_Login();
    int otro_Registro;
    FILE *archivoLocal;
    struct notebook registro_Informacion;

    do
    {
        // Descripcion: Esta función despeja la ventana de texto actual
        // y coloca el cursor en la esquina superior izquierda: posición (1,1).
        printf("Agregar notebook\n");
        archivoLocal = fopen("Notebook.txt", "a");
        printf("Identificador: \n");
        scanf("%d", &registro_Informacion.Identificador);
        fflush(stdin);
        printf("Marca: \n");
        scanf("%s", registro_Informacion.Marca);
        fflush(stdin);
        printf("Modelo: \n");
        scanf("%s", registro_Informacion.Modelo);
        fflush(stdin);
        printf("Cantidad de Ram: \n");
        scanf("%d", &registro_Informacion.CantidadRam);
        fflush(stdin);
        printf("Procesador: \n");
        scanf("%s", registro_Informacion.Procesador);
        fflush(stdin);
        printf("Pulgadas: \n");
        scanf("%d", &registro_Informacion.Pulgadas);
        fflush(stdin);
        if (archivoLocal == NULL)
        {
            fprintf(stderr, "No existen registros\n");
        }
        else
        {
            printf("Se ha agregado correctamente el nuevo notebook\n");
        }
        fwrite(&registro_Informacion, sizeof(struct notebook), 1, archivoLocal);
        fclose(archivoLocal);
        printf("Quieres agregar otro notebook?\n");
        printf("1. Si\n");
        printf("2. No\n");
        scanf("%d", &otro_Registro);
        fflush(stdin);
        stock_Monitor++;

    } while (otro_Registro == 1);
}
void agregar_Escritorio()
{
    // system("clear");
    usuario_Login();
    int otro_Registro;
    FILE *archivoLocal;
    struct escritorio registro_Informacion;

    do
    {
        // Descripcion: Esta función despeja la ventana de texto actual
        // y coloca el cursor en la esquina superior izquierda: posición (1,1).
        printf("Agregar escritorio\n");
        archivoLocal = fopen("Escritorio.txt", "a");
        printf("Identificador: \n");
        scanf("%d", &registro_Informacion.Identificador);
        fflush(stdin);
        printf("Marca: \n");
        scanf("%s", registro_Informacion.Marca);
        fflush(stdin);
        printf("Modelo: \n");
        scanf("%s", registro_Informacion.Modelo);
        fflush(stdin);
        printf("Cantidad de Ram: \n");
        scanf("%d", &registro_Informacion.CantidadRam);
        fflush(stdin);
        printf("Procesador: \n");
        scanf("%s", registro_Informacion.Procesador);
        fflush(stdin);
        printf("Identificador Teclado: \n");
        scanf("%d", &registro_Informacion.direccion_teclado.Identificador);
        fflush(stdin);
        printf("Marca Teclado: \n");
        scanf("%s", registro_Informacion.direccion_teclado.Marca);
        fflush(stdin);
        printf("Modelo Teclado: \n");
        scanf("%s", registro_Informacion.direccion_teclado.Modelo);
        fflush(stdin);
        printf("Idioma Teclado: \n");
        scanf("%s", registro_Informacion.direccion_teclado.Idioma);
        fflush(stdin);
        printf("Identificador mouse: \n");
        scanf("%d", &registro_Informacion.direccion_mouse.Identificador);
        fflush(stdin);
        printf("Marca mouse: \n");
        scanf("%s", registro_Informacion.direccion_mouse.Marca);
        fflush(stdin);
        printf("Modelo mouse: \n");
        scanf("%s", registro_Informacion.direccion_mouse.Modelo);
        fflush(stdin);
        printf("Identificador monitor: \n");
        scanf("%d", &registro_Informacion.direccion_monitor.Identificador);
        fflush(stdin);
        printf("Marca monitor: \n");
        scanf("%s", registro_Informacion.direccion_monitor.Marca);
        fflush(stdin);
        printf("Modelo monitor: \n");
        scanf("%s", registro_Informacion.direccion_monitor.Modelo);
        fflush(stdin);
        printf("Pulgadas monitor: \n");
        scanf("%d", &registro_Informacion.direccion_monitor.Pulgadas);
        fflush(stdin);

        if (archivoLocal == NULL)
        {
            fprintf(stderr, "No existen registros\n");
        }
        else
        {
            printf("Se ha agregado correctamente el nuevo escritorio\n");
        }
        fwrite(&registro_Informacion, sizeof(struct escritorio), 1, archivoLocal);
        fclose(archivoLocal);
        printf("Quieres agregar otro escritorio?\n");
        printf("1. Si\n");
        printf("2. No\n");
        scanf("%d", &otro_Registro);
        stock_Escritorio++;
    } while (otro_Registro == 1);
}

// Funciones Secundarias de Listar Productos
void listar_Teclado()
{

    FILE *archivoLocal;
    struct teclado registro_Informacion;
    archivoLocal = fopen("Teclado.txt", "r");

    printf("Listado de Teclados\n");
    if (archivoLocal == NULL)
    {
        fprintf(stderr, "No existen registros\n");
        exit(0);
    }
    else
    {
        printf("Teclados: \n");
    }
    while (fread(&registro_Informacion, sizeof(struct teclado), 1, archivoLocal))
    {
        // system("clear");
        usuario_Login();
        printf("Hay %d en stock", stock_Teclado);
        printf("\nIdentificador: %d", registro_Informacion.Identificador);
        printf("\nMarca: %s", registro_Informacion.Marca);
        printf("\nModelo: %s", registro_Informacion.Modelo);
        printf("\nIdioma: %s", registro_Informacion.Idioma);
        printf("\n___________________________\n");
    }
    fclose(archivoLocal);
}
void listar_Mouse()
{

    usuario_Login();
    FILE *archivoLocal;
    struct mouse registro_Informacion;
    archivoLocal = fopen("Mouse.txt", "r");

    printf("Listado de Mouses\n");
    if (archivoLocal == NULL)
    {
        fprintf(stderr, "No existen registros\n");
        exit(0);
    }
    else
    {
        printf("Mouses: \n");
    }
    while (fread(&registro_Informacion, sizeof(struct mouse), 1, archivoLocal))
    {
        printf("\nIdentificador: %d", registro_Informacion.Identificador);
        printf("\nMarca: %s", registro_Informacion.Marca);
        printf("\nModelo: %s", registro_Informacion.Modelo);
        printf("\n___________________________\n");
    }
    fclose(archivoLocal);
}
void listar_Monitor()
{

    usuario_Login();
    FILE *archivoLocal;
    struct monitor registro_Informacion;
    archivoLocal = fopen("Monitor.txt", "r");

    printf("Listado de Monitores\n");
    if (archivoLocal == NULL)
    {
        fprintf(stderr, "No existen registros\n");
        exit(0);
    }
    else
    {
        printf("Monitores: \n");
    }
    while (fread(&registro_Informacion, sizeof(struct mouse), 1, archivoLocal))
    {
        printf("\nIdentificador: %d", registro_Informacion.Identificador);
        printf("\nMarca: %s", registro_Informacion.Marca);
        printf("\nModelo: %s", registro_Informacion.Modelo);
        printf("\nPulgadas: %d", registro_Informacion.Pulgadas);
        printf("\n___________________________\n");
    }
    fclose(archivoLocal);
}
void listar_Notebook()
{
    // system("clear");
    usuario_Login();
    FILE *archivoLocal;
    struct notebook registro_Informacion;
    archivoLocal = fopen("Notebook.txt", "r");

    printf("Listado de Notebooks\n");
    if (archivoLocal == NULL)
    {
        fprintf(stderr, "No existen registros\n");
        exit(0);
    }
    else
    {
        printf("Notebooks: \n");
    }
    while (fread(&registro_Informacion, sizeof(struct notebook), 1, archivoLocal))
    {
        printf("\nIdentificador: %d", registro_Informacion.Identificador);
        printf("\nMarca: %s", registro_Informacion.Marca);
        printf("\nModelo: %s", registro_Informacion.Modelo);
        printf("\nCantidad de Ram: %d", registro_Informacion.CantidadRam);
        printf("\nProcesador: %s", registro_Informacion.Procesador);
        printf("\nPulgadas: %d", registro_Informacion.Pulgadas);
        printf("\n___________________________\n");
    }
    fclose(archivoLocal);
}
void listar_Escritorio()
{
    // system("clear");
    usuario_Login();
    FILE *archivoLocal;
    struct escritorio registro_Informacion;
    archivoLocal = fopen("Escritorio.txt", "r");

    printf("Listado de Escritorios\n");
    if (archivoLocal == NULL)
    {
        fprintf(stderr, "No existen registros\n");
        exit(0);
    }
    else
    {
        printf("Escritorios: \n");
    }
    while (fread(&registro_Informacion, sizeof(struct escritorio), 1, archivoLocal))
    {
        printf("\nIdentificador: %d", registro_Informacion.Identificador);
        printf("\nMarca: %s", registro_Informacion.Marca);
        printf("\nModelo: %s", registro_Informacion.Modelo);
        printf("\nCantidad de Ram: %d", registro_Informacion.CantidadRam);
        printf("\nProcesador: %s", registro_Informacion.Procesador);
        printf("\nIdentificador Teclado: %d", registro_Informacion.direccion_teclado.Identificador);
        printf("\nMarca Teclado: %s", registro_Informacion.direccion_teclado.Marca);
        printf("\nModelo Teclado: %s", registro_Informacion.direccion_teclado.Modelo);
        printf("\nIdioma Teclado: %s", registro_Informacion.direccion_teclado.Idioma);
        printf("\nIdentificador Mouse: %d", registro_Informacion.direccion_mouse.Identificador);
        printf("\nMarca Mouse: %s", registro_Informacion.direccion_mouse.Marca);
        printf("\nModelo Mouse: %s", registro_Informacion.direccion_mouse.Modelo);
        printf("\nIdentificador Monitor: %d", registro_Informacion.direccion_monitor.Identificador);
        printf("\nMarca Monitor: %s", registro_Informacion.direccion_monitor.Marca);
        printf("\nModelo Monitor: %s", registro_Informacion.direccion_monitor.Modelo);
        printf("\nPulgadas Monitor: %d", registro_Informacion.direccion_monitor.Pulgadas);
        printf("\n___________________________\n");
    }
    fclose(archivoLocal);
}

// Actualizar Productos
void actualizar_Teclado()
{
    // system("clear");
    usuario_Login();
    struct teclado registro_Informacion;
    FILE *archivoLocal, *archivoLocal1;
    int Identificador, bandera = 0;

    printf("Actualizar Teclados\n");
    archivoLocal = fopen("Teclado.txt", "r");
    archivoLocal1 = fopen("Temporal.txt", "w");
    printf("Ingrese el Identificador: ");
    scanf("%d", &Identificador);
    if (archivoLocal == NULL)
    {
        fprintf(stderr, "\nNo se encuentra el archivo\n");
        exit(0);
    }

    while (fread(&registro_Informacion, sizeof(struct teclado), 1, archivoLocal))
    {
        if (registro_Informacion.Identificador == Identificador)
        {
            printf("\nIngrese los nuevos datos:\n");
            printf("Marca: %s\n", registro_Informacion.Marca);
            printf("Modelo: %s\n", registro_Informacion.Modelo);
            fflush(stdin);
            printf("Ingrese nueva Marca: \n");
            scanf("%s", registro_Informacion.Marca);
            fflush(stdin);
            printf("Ingrese nuevo Modelo: \n");
            scanf("%s", registro_Informacion.Modelo);
            fflush(stdin);
            printf("Ingrese nuevo Idioma: \n");
            scanf("%s", registro_Informacion.Idioma);
            fflush(stdin);
            bandera = 1;
            fwrite(&registro_Informacion, sizeof(struct teclado), 1, archivoLocal1);
        }
        else
        {
            fwrite(&registro_Informacion, sizeof(struct teclado), 1, archivoLocal1);
        }
    }
    fclose(archivoLocal);
    fclose(archivoLocal1);

    if (!bandera)
    {
        printf("No se encuentra el Identificador \n");
    }
    if (bandera)
    {
        remove("Teclado.txt");
        rename("Temporal.txt", "Teclado.txt");
        printf("Teclado Actualizado Correctamente");
    }
}
void actualizar_Mouse()
{
    // system("clear");
    usuario_Login();
    struct mouse registro_Informacion;
    FILE *archivoLocal, *archivoLocal1;
    int Identificador, bandera = 0;

    printf("Actualizar Mouses\n");
    archivoLocal = fopen("Mouse.txt", "r");
    archivoLocal1 = fopen("Temporal.txt", "w");
    printf("Ingrese el Identificador: ");
    scanf("%d", &Identificador);
    if (archivoLocal == NULL)
    {
        fprintf(stderr, "\nNo se encuentra el archivo\n");
        exit(0);
    }

    while (fread(&registro_Informacion, sizeof(struct mouse), 1, archivoLocal))
    {
        if (registro_Informacion.Identificador == Identificador)
        {
            printf("\nIngrese los nuevos datos: \n");
            printf("Marca: %s\n", registro_Informacion.Marca);
            printf("Modelo: %s\n", registro_Informacion.Modelo);
            fflush(stdin);
            printf("Ingrese nueva Marca: \n");
            scanf("%s", registro_Informacion.Marca);
            fflush(stdin);
            printf("Ingrese nuevo Modelo: \n");
            scanf("%s", registro_Informacion.Modelo);
            fflush(stdin);
            bandera = 1;
            fwrite(&registro_Informacion, sizeof(struct mouse), 1, archivoLocal1);
        }
        else
        {
            fwrite(&registro_Informacion, sizeof(struct mouse), 1, archivoLocal1);
        }
    }
    fclose(archivoLocal);
    fclose(archivoLocal1);

    if (!bandera)
    {
        printf("No se encuentra el Identificador \n");
    }
    if (bandera)
    {
        remove("Mouse.txt");
        rename("Temporal.txt", "Mouse.txt");
        printf("Mouse Actualizado Correctamente");
    }
}
void actualizar_Monitor()
{
    // system("clear");
    usuario_Login();
    struct monitor registro_Informacion;
    FILE *archivoLocal, *archivoLocal1;
    int Identificador, bandera = 0;

    printf("Actualizar Monitores\n");
    archivoLocal = fopen("Monitor.txt", "r");
    archivoLocal1 = fopen("Temporal.txt", "w");
    printf("Ingrese el Identificador: ");
    scanf("%d", &Identificador);
    if (archivoLocal == NULL)
    {
        fprintf(stderr, "\nNo se encuentra el archivo\n");
        exit(0);
    }

    while (fread(&registro_Informacion, sizeof(struct monitor), 1, archivoLocal))
    {
        if (registro_Informacion.Identificador == Identificador)
        {
            printf("\nIngrese los nuevos datos: \n");
            printf("Marca: %s\n", registro_Informacion.Marca);
            printf("Modelo: %s\n", registro_Informacion.Modelo);
            printf("Pulgadas: %d\n", registro_Informacion.Pulgadas);
            fflush(stdin);
            printf("Ingrese nueva Marca: \n");
            scanf("%s", registro_Informacion.Marca);
            fflush(stdin);
            printf("Ingrese nuevo Modelo: \n");
            scanf("%s", registro_Informacion.Modelo);
            fflush(stdin);
            printf("Ingrese nuevo tamaño Pulgadas: \n");
            scanf("%d", &registro_Informacion.Pulgadas);
            fflush(stdin);
            bandera = 1;
            fwrite(&registro_Informacion, sizeof(struct monitor), 1, archivoLocal1);
        }
        else
        {
            fwrite(&registro_Informacion, sizeof(struct monitor), 1, archivoLocal1);
        }
    }
    fclose(archivoLocal);
    fclose(archivoLocal1);

    if (!bandera)
    {
        printf("No se encuentra el Identificador \n");
    }
    if (bandera)
    {
        remove("Monitor.txt");
        rename("Temporal.txt", "Monitor.txt");
        printf("Monitor Actualizado Correctamente");
    }
}
void actualizar_Notebook()
{
    // system("clear");
    usuario_Login();
    struct notebook registro_Informacion;
    FILE *archivoLocal, *archivoLocal1;
    int Identificador, bandera = 0;

    printf("Actualizar Notebooks\n");
    archivoLocal = fopen("Notebook.txt", "r");
    archivoLocal1 = fopen("Temporal.txt", "w");
    printf("Ingrese el Identificador: ");
    scanf("%d", &Identificador);
    if (archivoLocal == NULL)
    {
        fprintf(stderr, "\nNo se encuentra el archivo\n");
        exit(0);
    }

    while (fread(&registro_Informacion, sizeof(struct notebook), 1, archivoLocal))
    {
        if (registro_Informacion.Identificador == Identificador)
        {
            printf("\nIngrese los nuevos datos: \n");
            printf("Marca: %s\n", registro_Informacion.Marca);
            printf("Modelo: %s\n", registro_Informacion.Modelo);
            printf("Cantidad de Ram: %d\n", registro_Informacion.CantidadRam);
            printf("Procesador: %s\n", registro_Informacion.Procesador);
            printf("Pulgadas: %d\n", registro_Informacion.Pulgadas);
            printf("Ingrese Nueva Marca: \n");
            scanf("%s", registro_Informacion.Marca);
            fflush(stdin);
            printf("Ingrese Nuevo Modelo: \n");
            scanf("%s", registro_Informacion.Modelo);
            fflush(stdin);
            printf("Ingrese Nueva Cantidad de Ram: \n");
            scanf("%d", &registro_Informacion.CantidadRam);
            fflush(stdin);
            printf("Ingrese Nuevo Procesador: \n");
            scanf("%s", registro_Informacion.Procesador);
            fflush(stdin);
            printf("Ingrese Nuevo Tamaño Pulgadas: \n");
            scanf("%d", &registro_Informacion.Pulgadas);
            fflush(stdin);
            bandera = 1;
            fwrite(&registro_Informacion, sizeof(struct notebook), 1, archivoLocal1);
        }
        else
        {
            fwrite(&registro_Informacion, sizeof(struct notebook), 1, archivoLocal1);
        }
    }
    fclose(archivoLocal);
    fclose(archivoLocal1);

    if (!bandera)
    {
        printf("No se encuentra el Identificador \n");
    }
    if (bandera)
    {
        remove("Notebook.txt");
        rename("Temporal.txt", "Notebook.txt");
        printf("Notebook Actualizado Correctamente");
    }
}
void actualizar_Escritorio()
{
    // system("clear");
    usuario_Login();
    struct escritorio registro_Informacion;
    FILE *archivoLocal, *archivoLocal1;
    int Identificador, bandera = 0;

    printf("Actualizar Escritorios\n");
    archivoLocal = fopen("Escritorio.txt", "r");
    archivoLocal1 = fopen("Temporal.txt", "w");
    printf("Ingrese el Identificador: ");
    scanf("%d", &Identificador);
    if (archivoLocal == NULL)
    {
        fprintf(stderr, "\nNo se encuentra el archivo\n");
        exit(0);
    }

    while (fread(&registro_Informacion, sizeof(struct escritorio), 1, archivoLocal))
    {
        if (registro_Informacion.Identificador == Identificador)
        {
            printf("\nIngrese los nuevos datos: \n");
            printf("Marca: %s\n", registro_Informacion.Marca);
            printf("Modelo: %s\n", registro_Informacion.Modelo);
            printf("Cantidad de Ram: %d", registro_Informacion.CantidadRam);
            printf("Procesador: %s\n", registro_Informacion.Procesador);
            printf("Identificador Teclado: %d", registro_Informacion.direccion_teclado.Identificador);
            printf("Marca Teclado: %s\n", registro_Informacion.direccion_teclado.Marca);
            printf("Modelo Teclado: %s\n", registro_Informacion.direccion_teclado.Modelo);
            printf("Idioma Teclado: %s\n", registro_Informacion.direccion_teclado.Idioma);
            printf("Identificador Mouse: %d", registro_Informacion.direccion_mouse.Identificador);
            printf("Marca Mouse: %s\n", registro_Informacion.direccion_mouse.Marca);
            printf("Modelo Mouse: %s\n", registro_Informacion.direccion_mouse.Modelo);
            printf("Identificador Monitor: %d\n", registro_Informacion.direccion_monitor.Identificador);
            printf("Marca Monitor: %s\n", registro_Informacion.direccion_monitor.Marca);
            printf("Modelo Monitor: %s\n", registro_Informacion.direccion_monitor.Modelo);
            printf("Pulgadas Monitor: %d\n", registro_Informacion.direccion_monitor.Pulgadas);

            printf("Ingrese Nueva Marca: \n");
            scanf("%s", registro_Informacion.Marca);
            fflush(stdin);
            printf("Ingrese Nuevo Modelo: \n");
            scanf("%s", registro_Informacion.Modelo);
            fflush(stdin);
            printf("Ingrese Nueva Cantidad de Ram: \n");
            scanf("%d", &registro_Informacion.CantidadRam);
            fflush(stdin);
            printf("Ingrese Nuevo Procesador: \n");
            scanf("%s", registro_Informacion.Procesador);
            fflush(stdin);
            printf("Ingrese nueva Marca Teclado: \n");
            scanf("%s", registro_Informacion.direccion_teclado.Marca);
            fflush(stdin);
            printf("Ingrese nuevo Modelo Teclado: \n");
            scanf("%s", registro_Informacion.direccion_teclado.Modelo);
            fflush(stdin);
            printf("Ingrese nuevo Idioma Teclado: \n");
            scanf("%s", registro_Informacion.direccion_teclado.Idioma);
            fflush(stdin);
            printf("Ingrese nueva Marca Mouse: \n");
            scanf("%s", registro_Informacion.direccion_mouse.Marca);
            fflush(stdin);
            printf("Ingrese nuevo Modelo Mouse : \n");
            scanf("%s", registro_Informacion.direccion_mouse.Modelo);
            fflush(stdin);
            printf("Ingrese nueva Marca Monitor: \n");
            scanf("%s", registro_Informacion.direccion_monitor.Marca);
            fflush(stdin);
            printf("Ingrese nuevo Modelo Monitor: \n");
            scanf("%s", registro_Informacion.direccion_monitor.Modelo);
            fflush(stdin);
            bandera = 1;
            fwrite(&registro_Informacion, sizeof(struct escritorio), 1, archivoLocal1);
        }
        else
        {
            fwrite(&registro_Informacion, sizeof(struct escritorio), 1, archivoLocal1);
        }
    }
    fclose(archivoLocal);
    fclose(archivoLocal1);

    if (!bandera)
    {
        printf("No se encuentra el Identificador \n");
    }
    if (bandera)
    {
        remove("Escritorio.txt");
        rename("Temporal.txt", "Escritorio.txt");
        printf("Escritorio Actualizado Correctamente");
    }
}
// Eliminar Productos
void eliminar_Teclado()
{
    // system("clear");
    usuario_Login();
    struct teclado registro_Informacion;
    FILE *archivoLocal, *archivoLocal1;
    int Identificador, bandera = 0;

    printf("Eliminar Teclados\n");
    archivoLocal = fopen("Teclado.txt", "r");
    archivoLocal1 = fopen("Temporal.txt", "w");
    printf("Ingrese el Identificador: ");
    scanf("%d", &Identificador);
    if (archivoLocal == NULL)
    {
        fprintf(stderr, "\nNo se encuentra el archivo\n");
        exit(0);
    }

    while (fread(&registro_Informacion, sizeof(struct teclado), 1, archivoLocal))
    {
        if (registro_Informacion.Identificador == Identificador)
        {
            bandera = 1;
        }
        else
        {
            fwrite(&registro_Informacion, sizeof(struct teclado), 1, archivoLocal1);
        }
    }
    fclose(archivoLocal);
    fclose(archivoLocal1);

    if (!bandera)
    {
        printf("No se encuentra el Identificador \n");
    }
    if (bandera)
    {
        remove("Teclado.txt");
        rename("Temporal.txt", "Teclado.txt");
        printf("Teclado Borrado Correctamente\n");
    }
    if (stock_Teclado > 0)
    {
        stock_Teclado--;
    }
}
void eliminar_Mouse()
{
    // system("clear");
    usuario_Login();
    struct mouse registro_Informacion;
    FILE *archivoLocal, *archivoLocal1;
    int Identificador, bandera = 0;

    printf("Eliminar Mouses\n");
    archivoLocal = fopen("Mouse.txt", "r");
    archivoLocal1 = fopen("Temporal.txt", "w");
    printf("Ingrese el Identificador: ");
    scanf("%d", &Identificador);
    if (archivoLocal == NULL)
    {
        fprintf(stderr, "\nNo se encuentra el archivo\n");
        exit(0);
    }

    while (fread(&registro_Informacion, sizeof(struct mouse), 1, archivoLocal))
    {
        if (registro_Informacion.Identificador == Identificador)
        {
            bandera = 1;
        }
        else
        {
            fwrite(&registro_Informacion, sizeof(struct mouse), 1, archivoLocal1);
        }
    }
    fclose(archivoLocal);
    fclose(archivoLocal1);

    if (!bandera)
    {
        printf("No se encuentra el Identificador \n");
    }
    if (bandera)
    {
        remove("Mouse.txt");
        rename("Temporal.txt", "Mouse.txt");
        printf("Mouse Borrado Correctamente\n");
    }
    if (stock_Mouse > 0)
    {
        stock_Mouse--;
    }
}
void eliminar_Monitor()
{
    // system("clear");
    usuario_Login();
    struct monitor registro_Informacion;
    FILE *archivoLocal, *archivoLocal1;
    int Identificador, bandera = 0;

    printf("Eliminar Monitores\n");
    archivoLocal = fopen("Monitor.txt", "r");
    archivoLocal1 = fopen("Temporal.txt", "w");
    printf("Ingrese el Identificador: ");
    scanf("%d", &Identificador);
    if (archivoLocal == NULL)
    {
        fprintf(stderr, "\nNo se encuentra el archivo\n");
        exit(0);
    }

    while (fread(&registro_Informacion, sizeof(struct monitor), 1, archivoLocal))
    {
        if (registro_Informacion.Identificador == Identificador)
        {
            bandera = 1;
        }
        else
        {
            fwrite(&registro_Informacion, sizeof(struct monitor), 1, archivoLocal1);
        }
    }
    fclose(archivoLocal);
    fclose(archivoLocal1);

    if (!bandera)
    {
        printf("No se encuentra el Identificador \n");
    }
    if (bandera)
    {
        remove("Monitor.txt");
        rename("Temporal.txt", "Monitor.txt");
        printf("Monitor Borrado Correctamente\n");
    }
    if (stock_Monitor > 0)
    {
        stock_Monitor--;
    }
}
void eliminar_Notebook()
{
    // system("clear");
    usuario_Login();
    struct notebook registro_Informacion;
    FILE *archivoLocal, *archivoLocal1;
    int Identificador, bandera = 0;

    printf("Eliminar Notebooks\n");
    archivoLocal = fopen("Notebook.txt", "r");
    archivoLocal1 = fopen("Temporal.txt", "w");
    printf("Ingrese el Identificador: ");
    scanf("%d", &Identificador);
    if (archivoLocal == NULL)
    {
        fprintf(stderr, "\nNo se encuentra el archivo\n");
        exit(0);
    }

    while (fread(&registro_Informacion, sizeof(struct notebook), 1, archivoLocal))
    {
        if (registro_Informacion.Identificador == Identificador)
        {
            bandera = 1;
        }
        else
        {
            fwrite(&registro_Informacion, sizeof(struct notebook), 1, archivoLocal1);
        }
    }
    fclose(archivoLocal);
    fclose(archivoLocal1);

    if (!bandera)
    {
        printf("No se encuentra el Identificador \n");
    }
    if (bandera)
    {
        remove("Notebook.txt");
        rename("Temporal.txt", "Notebook.txt");
        printf("Notebook Borrado Correctamente\n");
    }
    if (stock_Notebook > 0)
    {
        stock_Notebook--;
    }
    else
    {
        remove("Notebook.txt");
    }
}
void eliminar_Escritorio()
{
    // system("clear");
    usuario_Login();
    struct escritorio registro_Informacion;
    FILE *archivoLocal, *archivoLocal1;
    int Identificador, bandera = 0;

    printf("Eliminar Escritorios\n");
    archivoLocal = fopen("Escritorio.txt", "r");
    archivoLocal1 = fopen("Temporal.txt", "w");
    printf("Ingrese el Identificador: ");
    scanf("%d", &Identificador);
    if (archivoLocal == NULL)
    {
        fprintf(stderr, "\nNo se encuentra el archivo\n");
        exit(0);
    }

    while (fread(&registro_Informacion, sizeof(struct escritorio), 1, archivoLocal))
    {
        if (registro_Informacion.Identificador == Identificador)
        {
            bandera = 1;
        }
        else
        {
            fwrite(&registro_Informacion, sizeof(struct escritorio), 1, archivoLocal1);
        }
    }
    fclose(archivoLocal);
    fclose(archivoLocal1);

    if (!bandera)
    {
        printf("No se encuentra el Identificador \n");
    }
    if (bandera)
    {
        remove("Escritorio.txt");
        rename("Temporal.txt", "Escritorio.txt");
        printf("Escritorio Borrado Correctamente\n");
    }
    if (stock_Escritorio > 0)
    {
        stock_Escritorio--;
    }
}
void reiniciar_Stock()
{
    remove("Teclado.txt");
    remove("Mouse.txt");
    remove("Monitor.txt");
    remove("Notebook.txt");
    remove("Escritorio.txt");
}

int main(int argc, char const *argv[])
{
    int clave; // Admin 123
    int opcion, opcion_Menu;

    clave = iniciar_Sesion();
    if (clave == 1)
    {
        system("Clear");
        printf("Acceso Permitido\n");
        while (opcion_Menu != 7)
        {

            usuario_Login();
            printf("\n1.Agregar Producto(s)");
            printf("\n2.Listar Productos(s)");
            printf("\n3.Actualizar Productos");
            printf("\n4.Eliminar Productos");
            printf("\n5.Ver Stock Productos");
            printf("\n6.Reiniciar Stock(Elimina todo registro)");
            printf("\n7.Salir");
            printf("\nIngrese opcion: ");
            scanf("%d", &opcion_Menu);

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
            case 3:
            {
                opcion_Menu = actualizar_Productos();
                printf("\nQue producto desea actualizar: ");
                scanf("%d", &opcion);
                if (opcion == 1)
                {
                    actualizar_Teclado();
                }
                else if (opcion == 2)
                {
                    actualizar_Mouse();
                }
                else if (opcion == 3)
                {
                    actualizar_Monitor();
                }
                else if (opcion == 4)
                {
                    actualizar_Notebook();
                }
                else if (opcion == 5)
                {
                    actualizar_Escritorio();
                }
            }
            break;
            case 4:
            {
                opcion_Menu = eliminar_Productos();
                printf("\nQue producto desea eliminar: ");
                scanf("%d", &opcion);
                if (opcion == 1)
                {
                    eliminar_Teclado();
                }
                else if (opcion == 2)
                {
                    eliminar_Mouse();
                }
                else if (opcion == 3)
                {
                    eliminar_Monitor();
                }
                else if (opcion == 4)
                {
                    eliminar_Notebook();
                }
                else if (opcion == 5)
                {
                    eliminar_Escritorio();
                }
            }
            break;
            case 5:
            {
                printf("En Inventario hay:\n");
                printf("%d Teclados\n", stock_Teclado);
                printf("%d Mouses\n", stock_Mouse);
                printf("%d Monitores\n", stock_Monitor);
                printf("%d Notebooks\n", stock_Notebook);
                printf("%d PC Escritorio\n", stock_Escritorio);
                break;
            }
            case 6:
            {
                reiniciar_Stock();
                printf("El Inventario se ha reiniciado:\n");
                printf("Teclados Eliminados\n");
                printf("Mouses Eliminados\n");
                printf("Monitores Eliminados\n");
                printf("Notebooks Eliminados\n");
                printf("PC Escritorio Eliminados\n");
                break;
            }
            case 7:
            {
                printf("Gracias :)");
                exit(0);
                break;
            }
            default:
                printf("Opcion Invalidad\n");
                printf("Ingrese algun numero para continuar: ");
                int continuar;
                scanf("%d", &continuar);
                break;
            }
        }
    }
    else if (clave == 0)
    {
        {
            printf("Acceso Denegado\n");
        }
    }

    return 0;
}
// Ver parte de eliminar ficheros... Dejar igual todas las funciones, Falta funcion buscar por marca y listo.