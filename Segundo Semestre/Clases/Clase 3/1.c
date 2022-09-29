/* Construir un programa e C que permita evaluar la función f(x) = 3*x + 5, para:
    - Opción 1: un valor de x
    - Opción 2: n valores de x
    - Opción 3: para todo x entero en el intervalo [a,b]
*/

#include <stdio.h>
int main (){
	int x,n,i,res;
	printf("ingrese cantidad de valores\n");
	do {
       	scanf("%d",&n);
	} while (n<1);

	int vec [n];
	for (i=0;i<=n-1;i++){
	   printf ("ingrese valor %d\n",i+1);
	   scanf("%d",&vec[i]);
	}
	for (i=0;i<=n-1;i++){
	   res=3*vec[i]+5;
 	    printf("resultado del valor %d es: %d\n",vec[i],res);
	}
	
	return 0;
}