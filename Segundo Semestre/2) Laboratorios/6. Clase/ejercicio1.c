#include <stdio.h>

typedef struct
{
    // Identificador
    int identificador;
    // Registro Animal
    char categoria[40];
    char nombre[50];
    char raza[30];
    int edad;
} Animales;

typedef struct
{
    // Identificador
    int rutTutor;
    // Registro Dueño
    char nombre[50];
    char direccion[50];
    int numeroCelular;
} Propietario;

int main(int argc, char const *argv[])
{
    Animales registroAnimal[20];
	int i,n;
   	FILE *fp;
    fp = fopen("Nuevo Registro.txt", "w");
	printf("Ingrese Cantidad de Mascotas: ");
	scanf("%d",&n);


    for (i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("Ingresar datos de la mascota: ");
		printf("\nIngrese Identificador: ");
        scanf("%d",&registroAnimal[i].identificador);
	    printf("\nIngrese categoria: ");
	    scanf("%s",registroAnimal[i].categoria);
	    printf("\nIngrese nombre: ");
	    scanf("%s",registroAnimal[i].nombre);
        printf("\nIngrese raza: ");
	    scanf("%s",registroAnimal[i].raza);
	    printf("\nIngrese edad: ");
	    scanf("%d",&registroAnimal[i].edad);
    }

    printf("\n Los Animales ingresados son: \n");

    for (i = 0; i < n; i++)
    {
        printf("\nIdentificador: %d, Categoria: %s, Nombre: %s, Raza: %s, Edad: %d",registroAnimal[i].identificador,registroAnimal[i].categoria,registroAnimal[i].nombre,registroAnimal[i].raza,registroAnimal[i].edad);
	    fprintf(fp,"Identificador: %d, Categoria: %s, Nombre: %s, Raza: %s, Edad: %d",registroAnimal[i].identificador,registroAnimal[i].categoria,registroAnimal[i].nombre,registroAnimal[i].raza,registroAnimal[i].edad);
        printf("\n");
        fprintf(fp, "\n");
    }
    fclose(fp);

    return 0;
}
