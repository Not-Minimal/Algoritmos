/* Construir un programa e C que permita dado dos arreglos de enteros a y b de capacidad 10:
    - Opción 1: Concatenar los arreglos en un tercer arreglo c de tal
      forma que primero estén los elementos del arreglo a y luego los
      elementos del arreglo b
    - Opción 2: Intercalar los arreglos en un tercer arreglo c de tal forma
      que c[0]=a[0], c[1]=b[0], c[2]= a[1], c[3]=b[1], c[4]=a[2], c[5]=b[2],
      c[6]=a[3], c[7]=b[3]…..
*/

#include <stdio.h>

int i, j, arregloA,arregloB,arregloC;

	int main() /* Rellenamos una matriz */
	{
		int arregloA[10];

		for (i = 0; i < 10; i++)
		{
			if (arregloA[i] % 2 == 0)
			{
				arregloA[i] = i;
                printf("Arreglo A: ");
			    printf("%d", arregloA[i]);
			    printf("\n");
			}
			else
			{
				arregloA[i] = i;
                printf("Arreglo B: ");
			    printf("%d", arregloA[i]);
			    printf("\n");
                
			}
            printf("Arreglo C: ");
			printf("%d + %d", arregloA[i], arregloA[i-1]);
			printf("\n");
		}
	return 0;
	}