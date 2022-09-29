#include <stdio.h>

int i, j, arregloA,arregloB,arregloC;

	int main() /* Rellenamos una matriz */
	{
		int arregloA[10], arregloB[10], arregloC[10];

		for (i = 0; i < 10; i++)
		{
			if (i % 2 == 0)
			{
				arregloA[i] = i;
			}
			else if (i % 2 == 1)
			{
				arregloB[i] = i;
			}
		}
			printf("Arreglo A: ");
			printf("%d", arregloA);
			printf("\n");
			printf("Arreglo B: ");
			printf("%d", arregloB);
			printf("\n");
			printf("Arreglo C: ");
			printf("%d + %d", arregloA, arregloB);
			printf("\n");
	return 0;
	}