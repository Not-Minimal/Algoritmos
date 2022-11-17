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

} Estudiante;

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
    Estudiante registroEstudiante[20];
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
        scanf("%d", &registroEstudiante[i].rut);
        printf("\nIngrese Deporte: ");
        scanf("%s", registroEstudiante[i].Deporte);
        printf("\nIngrese nombre: ");
        scanf("%s", registroEstudiante[i].nombre);
        printf("\nIngrese calle: ");
        scanf("%s", registroEstudiante[i].calle);
        printf("\nIngrese edad: ");
        scanf("%d", &registroEstudiante[i].edad);
    }

    printf("\n Los Estudiante ingresados son: \n");

    for (i = 0; i < n; i++)
    {
        printf("\nRut: %d, Deporte: %s, Nombre: %s, calle: %s, Edad: %d", registroEstudiante[i].rut, registroEstudiante[i].Deporte, registroEstudiante[i].nombre, registroEstudiante[i].calle, registroEstudiante[i].edad);
        fprintf(fp, "Rut: %d, Deporte: %s, Nombre: %s, calle: %s, Edad: %d", registroEstudiante[i].rut, registroEstudiante[i].Deporte, registroEstudiante[i].nombre, registroEstudiante[i].calle, registroEstudiante[i].edad);
        printf("\n");
        fprintf(fp, "\n");
    }
    fclose(fp);

    return 0;
}
