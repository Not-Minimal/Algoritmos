#include <stdio.h>

void agregarVehiculo(vehiculo vehiculos[], int cantidadVehiculos);

typedef struct
{
    char marca;
    char modelo;
    int fecha;
    int costo;
} vehiculo;

int main()
{

    int i, n, menu;

    do
    {
        printf("Ingrese la cantidad de vehiculos [1,10]");
        scanf("%d", &n);
    } while (n < 1 || n > 10);

    vehiculo vehiculos[n];

    printf("Menu de Opciones: \n");
    printf("1. Agregar Vehiculo\n");
    printf("2. Mostrar datos de un Vehiculo\n");
    printf("3. Vehiculo con menor Costo\n");
    printf("4. Salir\n");
    scanf("%d", &menu);

    do
    {
        switch (menu)
        {
        case 1:
        {
            agregarVehiculo(vehiculos, 10);
            break;
        }
        case 2:
        {
            break;
        }
        case 3:
        {
            break;
        }
        case 4:
        {
            break;
        }
        }
    } while (menu < 1);
    return 0;
}

void agregarVehiculo(vehiculo vehiculos[], int cantidadVehiculos)
{
    vehiculo registroVehiculo[20];
    int i;

    for (i = 0; i < cantidadVehiculos; i++)
    {
        fflush(stdin);
        printf("Ingresar datos del vehiculo: ");
        printf("\nIngrese marca: ");
        scanf("%s", registroVehiculo[i].marca);
        fflush(stdin);
        printf("\nIngrese modelo: ");
        scanf("%s", registroVehiculo[i].modelo);
        fflush(stdin);
        printf("\nIngrese fecha: ");
        scanf("%d", registroVehiculo[i].fecha);
        printf("\nIngrese costo: ");
        scanf("%d", registroVehiculo[i].costo);
    }

    printf("\n Los Animales ingresados son: \n");

    for (i = 0; i < cantidadVehiculos; i++)
    {
        printf("\Marca: %s, Modelo: %s, Fecha: %d, Costo: %d", registroVehiculo[i].marca, registroVehiculo[i].modelo, registroVehiculo[i].fecha, registroVehiculo[i].costo);
    }
}