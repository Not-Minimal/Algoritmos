#include <stdio.h>

typedef struct
{
    // Rut e indentificador
    int rut;
    char verificador[1];
    // Registro Animal
    char nombre[50];
    char apellido[50];
    int edad;
    char calle[30];
    int numero;
    char departamento[30];
    char Deporte[40];

} Animales;

typedef struct
{
    // rut
    int rutTutor;
    // Registro Dueño
    char nombre[50];
    char direccion[50];
    int numeroCelular;
} Propietario;

int main(int argc, char const *argv[])
{
    Animales registroAnimal[20];
    int i, n;
    FILE *fp;
    fp = fopen("Nuevo Registro.txt", "w");
    printf("Ingrese Cantidad de Mascotas: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("Ingresar datos de la mascota: ");
        printf("\nIngrese rut: ");
        scanf("%d", &registroAnimal[i].rut);
        printf("\nIngrese Deporte: ");
        scanf("%s", registroAnimal[i].Deporte);
        printf("\nIngrese nombre: ");
        scanf("%s", registroAnimal[i].nombre);
        printf("\nIngrese calle: ");
        scanf("%s", registroAnimal[i].calle);
        printf("\nIngrese edad: ");
        scanf("%d", &registroAnimal[i].edad);
    }

    printf("\n Los Animales ingresados son: \n");

    for (i = 0; i < n; i++)
    {
        printf("\nrut: %d, Deporte: %s, Nombre: %s, calle: %s, Edad: %d", registroAnimal[i].rut, registroAnimal[i].Deporte, registroAnimal[i].nombre, registroAnimal[i].calle, registroAnimal[i].edad);
        fprintf(fp, "rut: %d, Deporte: %s, Nombre: %s, calle: %s, Edad: %d", registroAnimal[i].rut, registroAnimal[i].Deporte, registroAnimal[i].nombre, registroAnimal[i].calle, registroAnimal[i].edad);
        printf("\n");
        fprintf(fp, "\n");
    }
    fclose(fp);

    return 0;
}
