#include<stdio.h>
typedef struct 
 {
    char nombre[20] ;
    int edad;
    float estatura;
 } persona;
main()
{
	persona agenda[20];
	int i,n;
   	FILE *fp;
    fp = fopen("agenda_nueva.txt", "w");
	printf("Ingrese Cantidad de personas");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		fflush(stdin);
		printf("\nIngrese Nombre: ");
	    gets(agenda[i].nombre);
	    printf("\nIngrese Edad  : ");
	    scanf("%d",&agenda[i].edad);
	    printf("\nIngrese Estatura : ");
	    scanf("%f",&agenda[i].estatura);
    }
    
    
   	printf("\nDATOS INGRESADOS\n");

    for (i=0;i<n;i++)
	{
	    printf("\n %s \t%d \t%f",agenda[i].nombre,agenda[i].edad,agenda[i].estatura);
	    fprintf(fp,"%s \t%d --- %f\n",agenda[i].nombre,agenda[i].edad,agenda[i].estatura);
	}
	fclose(fp);
	
}