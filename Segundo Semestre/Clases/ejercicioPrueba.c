#include <stdio.h>

	int main() /* Rellenamos una matriz */
	{
		int x,i,numeros[3][4];
		for (x=0;x<3;x++)
			for (i=0;i<4;i++)
            {
                scanf("%d",&numeros[x][i]);
            }
		for (x=0;x<3;x++)
			for (i=0;i<4;i++)
            {
                printf("%d",numeros[x][i]);
                printf("\n");
            }
	return 0;
	}