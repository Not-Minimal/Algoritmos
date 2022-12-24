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
    int clave, clave_erronea = 0;
    printf("Ingrese Usuario: ");
    scanf("%s", usuario);
    fflush(stdin);
    printf("Ingrese Clave: ");
    scanf("%d", &clave);
    fflush(stdin);
    if ((strcmp(usuario, registro_Informacion->NombreUsuario) == 0 && clave == registro_Informacion->Clave)) // Tiene que pertenecer a una estructura
    {
        return 1;
    }
    else
    {
        return 0;
    }

    // do
    // {
    //     if ((strcmp(usuario, registro_Informacion->NombreUsuario) == 0 && clave != registro_Informacion->Clave))
    //     {
    //         clave_erronea++;
    //         return 0;
    //     }

    // } while (clave_erronea < 2);
}

// Funciones Principales
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

int actualizar_Productos()
{
    int opcion;
    printf("Ingrese opcion: ");
    scanf("%d", &opcion);
    fflush(stdin);

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
    fflush(stdin);

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
    int opcion;
    printf("Ingrese opcion: ");
    scanf("%d", &opcion);
    fflush(stdin);

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
        scanf("%d", &registro_Informacion.identificador);
        fflush(stdin);
        printf("Marca: \n");
        scanf("%s", &registro_Informacion.Marca);
        fflush(stdin);
        printf("Modelo: \n");
        scanf("%s", &registro_Informacion.Modelo);
        fflush(stdin);
        printf("Idioma: \n");
        scanf("%s", &registro_Informacion.Idioma);
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

    } while (otro_Registro == 1);
}
void agregar_Mouse()
{
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
        scanf("%d", &registro_Informacion.identificador);
        fflush(stdin);
        printf("Marca: \n");
        scanf("%s", &registro_Informacion.Marca);
        fflush(stdin);
        printf("Modelo: \n");
        scanf("%s", &registro_Informacion.Modelo);
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

    } while (otro_Registro == 1);
}
void agregar_Monitor()
{
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
        scanf("%d", &registro_Informacion.identificador);
        fflush(stdin);
        printf("Marca: \n");
        scanf("%s", &registro_Informacion.Marca);
        fflush(stdin);
        printf("Modelo: \n");
        scanf("%s", &registro_Informacion.Modelo);
        fflush(stdin);
        printf("Pulgadas: \n");
        scanf("%f", &registro_Informacion.Pulgadas);
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

    } while (otro_Registro == 1);
}
void agregar_Notebook()
{
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
        scanf("%d", &registro_Informacion.identificador);
        fflush(stdin);
        printf("Marca: \n");
        scanf("%s", &registro_Informacion.Marca);
        fflush(stdin);
        printf("Modelo: \n");
        scanf("%s", &registro_Informacion.Modelo);
        fflush(stdin);
        printf("Cantidad de Ram: \n");
        scanf("%d", &registro_Informacion.CantidadRam);
        fflush(stdin);
        printf("Procesador: \n");
        scanf("%s", &registro_Informacion.Procesador);
        fflush(stdin);
        printf("Pulgadas: \n");
        scanf("%f", &registro_Informacion.Pulgadas);
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

    } while (otro_Registro == 1);
}
void agregar_Escritorio()
{
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
        scanf("%d", &registro_Informacion.identificador);
        fflush(stdin);
        printf("Marca: \n");
        scanf("%s", &registro_Informacion.Marca);
        fflush(stdin);
        printf("Modelo: \n");
        scanf("%s", &registro_Informacion.Modelo);
        fflush(stdin);
        printf("Cantidad de Ram: \n");
        scanf("%d", &registro_Informacion.CantidadRam);
        fflush(stdin);
        printf("Procesador: \n");
        scanf("%s", &registro_Informacion.Procesador);
        fflush(stdin);
        printf("Identificador Teclado: \n");
        scanf("%d", &registro_Informacion.direccion_teclado.identificador);
        fflush(stdin);
        printf("Marca Teclado: \n");
        scanf("%s", &registro_Informacion.direccion_teclado.Marca);
        fflush(stdin);
        printf("Modelo Teclado: \n");
        scanf("%s", &registro_Informacion.direccion_teclado.Modelo);
        fflush(stdin);
        printf("Idioma Teclado: \n");
        scanf("%s", &registro_Informacion.direccion_teclado.Idioma);
        fflush(stdin);
        printf("Identificador mouse: \n");
        scanf("%d", &registro_Informacion.direccion_mouse.identificador);
        fflush(stdin);
        printf("Marca mouse: \n");
        scanf("%s", &registro_Informacion.direccion_mouse.Marca);
        fflush(stdin);
        printf("Modelo mouse: \n");
        scanf("%s", &registro_Informacion.direccion_mouse.Modelo);
        fflush(stdin);
        printf("Identificador monitor: \n");
        scanf("%d", &registro_Informacion.direccion_monitor.identificador);
        fflush(stdin);
        printf("Marca monitor: \n");
        scanf("%s", &registro_Informacion.direccion_monitor.Marca);
        fflush(stdin);
        printf("Modelo monitor: \n");
        scanf("%s", &registro_Informacion.direccion_monitor.Modelo);
        fflush(stdin);
        printf("Pulgadas monitor: \n");
        scanf("%f", &registro_Informacion.direccion_monitor.Pulgadas);
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
        printf("\nIdentificador: %d", registro_Informacion.identificador);
        printf("\nMarca: %s", registro_Informacion.Marca);
        printf("\nModelo: %s", registro_Informacion.Modelo);
        printf("\nIdioma: %s", registro_Informacion.Idioma);
        printf("\n___________________________\n");
    }
    fclose(archivoLocal);
}
void listar_Mouse()
{
    FILE *archivoLocal;
    struct mouse registro_Informacion;
    archivoLocal = fopen("Mouse.txt", "r");

    printf("Listado de mouses\n");
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
        printf("\nIdentificador: %d", registro_Informacion.identificador);
        printf("\nMarca: %s", registro_Informacion.Marca);
        printf("\nModelo: %s", registro_Informacion.Modelo);
        printf("\n___________________________\n");
    }
    fclose(archivoLocal);
}
void listar_Monitor()
{
    FILE *archivoLocal;
    struct monitor registro_Informacion;
    archivoLocal = fopen("Monitor.txt", "r");

    printf("Listado de monitores\n");
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
        printf("\nIdentificador: %d", registro_Informacion.identificador);
        printf("\nMarca: %s", registro_Informacion.Marca);
        printf("\nModelo: %s", registro_Informacion.Modelo);
        printf("\nPulgadas: %f", registro_Informacion.Pulgadas);
        printf("\n___________________________\n");
    }
    fclose(archivoLocal);
}
void listar_Notebook()
{
    FILE *archivoLocal;
    struct notebook registro_Informacion;
    archivoLocal = fopen("Notebook.txt", "r");

    printf("Listado de notebooks\n");
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
        printf("\nIdentificador: %d", registro_Informacion.identificador);
        printf("\nMarca: %s", registro_Informacion.Marca);
        printf("\nModelo: %s", registro_Informacion.Modelo);
        printf("\nCantidad de Ram: %d", registro_Informacion.CantidadRam);
        printf("\nProcesador: %s", registro_Informacion.Procesador);
        printf("\nPulgadas: %f", registro_Informacion.Pulgadas);
        printf("\n___________________________\n");
    }
    fclose(archivoLocal);
}
void listar_Escritorio()
{
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
        printf("\nIdentificador: %d", registro_Informacion.identificador);
        printf("\nMarca: %s", registro_Informacion.Marca);
        printf("\nModelo: %s", registro_Informacion.Modelo);
        printf("\nCantidad de Ram: %d", registro_Informacion.CantidadRam);
        printf("\nProcesador: %s", registro_Informacion.Procesador);
        printf("\nIdentificador Teclado: %d", registro_Informacion.direccion_teclado.identificador);
        printf("\nMarca Teclado: %s", registro_Informacion.direccion_teclado.Marca);
        printf("\nModelo Teclado: %s", registro_Informacion.direccion_teclado.Modelo);
        printf("\nIdioma Teclado: %s", registro_Informacion.direccion_teclado.Idioma);
        printf("\nIdentificador Mouse: %d", registro_Informacion.direccion_mouse.identificador);
        printf("\nMarca Mouse: %s", registro_Informacion.direccion_mouse.Marca);
        printf("\nModelo Mouse: %s", registro_Informacion.direccion_mouse.Modelo);
        printf("\nIdentificador Monitor: %d", registro_Informacion.direccion_monitor.identificador);
        printf("\nMarca Monitor: %s", registro_Informacion.direccion_monitor.Marca);
        printf("\nModelo Monitor: %s", registro_Informacion.direccion_monitor.Modelo);
        printf("\nPulgadas Monitor: %f", registro_Informacion.direccion_monitor.Pulgadas);
        printf("\n___________________________\n");
    }
    fclose(archivoLocal);
}

// Buscar Productos
void actualizar_Teclado()
{
    struct teclado registro_Informacion;
    FILE *archivoLocal, *archivoLocal1;
    int identificador, bandera = 0;

    printf("Eliminar Teclados");
    archivoLocal = fopen("Teclado.txt", "r");
    archivoLocal1 = fopen("Temporal.txt", "w");
    printf("Ingrese el Identificador: ");
    scanf("%d", &identificador);
    if (archivoLocal == NULL)
    {
        fprintf(stderr, "\nNo se encuentra el archivo\n");
        exit(0);
    }

    while (fread(&registro_Informacion, sizeof(struct teclado), 1, archivoLocal))
    {
        if (registro_Informacion.identificador == identificador)
        {
            printf("\nIngrese los nuevos datos: \n");
            printf("\nMarca: %s", registro_Informacion.Marca);
            printf("\nModelo: %s", registro_Informacion.Modelo);
            fflush(stdin);
            printf("Ingrese nueva Marca: \n");
            scanf("%s", &registro_Informacion.Marca);
            fflush(stdin);
            printf("Ingrese nuevo Modelo: \n");
            scanf("%s", &registro_Informacion.Modelo);
            fflush(stdin);
            printf("Ingrese nuevo Idioma: \n");
            scanf("%s", &registro_Informacion.Idioma);
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
        printf("No se encuentra el identificador \n");
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
    struct mouse registro_Informacion;
    FILE *archivoLocal, *archivoLocal1;
    int identificador, bandera = 0;

    printf("Eliminar Mouses");
    archivoLocal = fopen("Mouse.txt", "r");
    archivoLocal1 = fopen("Temporal.txt", "w");
    printf("Ingrese el Identificador: ");
    scanf("%d", &identificador);
    if (archivoLocal == NULL)
    {
        fprintf(stderr, "\nNo se encuentra el archivo\n");
        exit(0);
    }

    while (fread(&registro_Informacion, sizeof(struct mouse), 1, archivoLocal))
    {
        if (registro_Informacion.identificador == identificador)
        {
            printf("\nIngrese los nuevos datos: \n");
            printf("\nMarca: %s", registro_Informacion.Marca);
            printf("\nModelo: %s", registro_Informacion.Modelo);
            fflush(stdin);
            printf("Ingrese nueva Marca: \n");
            scanf("%s", &registro_Informacion.Marca);
            fflush(stdin);
            printf("Ingrese nuevo Modelo: \n");
            scanf("%s", &registro_Informacion.Modelo);
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
        printf("No se encuentra el identificador \n");
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
    struct monitor registro_Informacion;
    FILE *archivoLocal, *archivoLocal1;
    int identificador, bandera = 0;

    printf("Eliminar Monitores");
    archivoLocal = fopen("Monitor.txt", "r");
    archivoLocal1 = fopen("Temporal.txt", "w");
    printf("Ingrese el Identificador: ");
    scanf("%d", &identificador);
    if (archivoLocal == NULL)
    {
        fprintf(stderr, "\nNo se encuentra el archivo\n");
        exit(0);
    }

    while (fread(&registro_Informacion, sizeof(struct monitor), 1, archivoLocal))
    {
        if (registro_Informacion.identificador == identificador)
        {
            printf("\nIngrese los nuevos datos: \n");
            printf("\nMarca: %s", registro_Informacion.Marca);
            printf("\nModelo: %s", registro_Informacion.Modelo);
            printf("\nPulgadas: %f", registro_Informacion.Pulgadas);
            fflush(stdin);
            printf("Ingrese nueva Marca: \n");
            scanf("%s", &registro_Informacion.Marca);
            fflush(stdin);
            printf("Ingrese nuevo Modelo: \n");
            scanf("%s", &registro_Informacion.Modelo);
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
        printf("No se encuentra el identificador \n");
    }
    if (bandera)
    {
        remove("Monitor.txt");
        rename("Temporal.txt", "Monitor.txt");
        printf("Monitor Actualizado Correctamente");
    }
}
//  void actualizar_Notebook(){}
//  void actualizar_Escritorio(){}

// Eliminar Productos
void eliminar_Teclado()
{
    struct teclado registro_Informacion;
    FILE *archivoLocal, *archivoLocal1;
    int identificador, bandera = 0;

    printf("Eliminar Teclados");
    archivoLocal = fopen("Teclado.txt", "r");
    archivoLocal1 = fopen("Temporal.txt", "w");
    printf("Ingrese el Identificador: ");
    scanf("%d", &identificador);
    if (archivoLocal == NULL)
    {
        fprintf(stderr, "\nNo se encuentra el archivo\n");
        exit(0);
    }

    while (fread(&registro_Informacion, sizeof(struct teclado), 1, archivoLocal))
    {
        if (registro_Informacion.identificador == identificador)
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
        printf("No se encuentra el identificador \n");
    }
    if (bandera)
    {
        remove("Teclado.txt");
        rename("Temporal.txt", "Teclado.txt");
        printf("Teclado Borrado Correctamente");
    }
}
void eliminar_Mouse()
{
    struct mouse registro_Informacion;
    FILE *archivoLocal, *archivoLocal1;
    int identificador, bandera = 0;

    printf("Eliminar mouses");
    archivoLocal = fopen("Mouse.txt", "r");
    archivoLocal1 = fopen("Temporal.txt", "w");
    printf("Ingrese el Identificador: ");
    scanf("%d", &identificador);
    if (archivoLocal == NULL)
    {
        fprintf(stderr, "\nNo se encuentra el archivo\n");
        exit(0);
    }

    while (fread(&registro_Informacion, sizeof(struct mouse), 1, archivoLocal))
    {
        if (registro_Informacion.identificador == identificador)
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
        printf("No se encuentra el identificador \n");
    }
    if (bandera)
    {
        remove("Mouse.txt");
        rename("Temporal.txt", "Mouse.txt");
        printf("mouse Borrado Correctamente");
    }
}
void eliminar_Monitor()
{
    struct monitor registro_Informacion;
    FILE *archivoLocal, *archivoLocal1;
    int identificador, bandera = 0;

    printf("Eliminar Monitoress");
    archivoLocal = fopen("Monitor.txt", "r");
    archivoLocal1 = fopen("Temporal.txt", "w");
    printf("Ingrese el Identificador: ");
    scanf("%d", &identificador);
    if (archivoLocal == NULL)
    {
        fprintf(stderr, "\nNo se encuentra el archivo\n");
        exit(0);
    }

    while (fread(&registro_Informacion, sizeof(struct monitor), 1, archivoLocal))
    {
        if (registro_Informacion.identificador == identificador)
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
        printf("No se encuentra el identificador \n");
    }
    if (bandera)
    {
        remove("Monitor.txt");
        rename("Temporal.txt", "Monitor.txt");
        printf("Monitor Borrado Correctamente");
    }
}
void eliminar_Notebook()
{
    struct notebook registro_Informacion;
    FILE *archivoLocal, *archivoLocal1;
    int identificador, bandera = 0;

    printf("Eliminar Notebooks");
    archivoLocal = fopen("Notebook.txt", "r");
    archivoLocal1 = fopen("Temporal.txt", "w");
    printf("Ingrese el Identificador: ");
    scanf("%d", &identificador);
    if (archivoLocal == NULL)
    {
        fprintf(stderr, "\nNo se encuentra el archivo\n");
        exit(0);
    }

    while (fread(&registro_Informacion, sizeof(struct notebook), 1, archivoLocal))
    {
        if (registro_Informacion.identificador == identificador)
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
        printf("No se encuentra el identificador \n");
    }
    if (bandera)
    {
        remove("Notebook.txt");
        rename("Temporal.txt", "Notebook.txt");
        printf("Notebook Borrado Correctamente");
    }
}
void eliminar_Escritorio()
{
    struct escritorio registro_Informacion;
    FILE *archivoLocal, *archivoLocal1;
    int identificador, bandera = 0;

    printf("Eliminar Escritorios");
    archivoLocal = fopen("Escritorio.txt", "r");
    archivoLocal1 = fopen("Temporal.txt", "w");
    printf("Ingrese el Identificador: ");
    scanf("%d", &identificador);
    if (archivoLocal == NULL)
    {
        fprintf(stderr, "\nNo se encuentra el archivo\n");
        exit(0);
    }

    while (fread(&registro_Informacion, sizeof(struct escritorio), 1, archivoLocal))
    {
        if (registro_Informacion.identificador == identificador)
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
        printf("No se encuentra el identificador \n");
    }
    if (bandera)
    {
        remove("Escritorio.txt");
        rename("Temporal.txt", "Escritorio.txt");
        printf("Escritorio Borrado Correctamente");
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
                printf("\nQue producto desea buscar: ");
                scanf("%d", &opcion);
                if (opcion == 1)
                {
                    actualizar_Teclado();
                }
                //     else if (opcion == 2)
                //     {
                //         buscar_Mouse();
                //     }
                //     else if (opcion == 3)
                //     {
                //         buscar_Monitor();
                //     }
                //     else if (opcion == 4)
                //     {
                //         buscar_Notebook();
                //     }
                //     else if (opcion == 5)
                //     {
                //         buscar_Escritorio();
                //     }
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
