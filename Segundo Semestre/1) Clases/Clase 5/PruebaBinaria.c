#include <stdio.h>// printf
#include <string.h>// strcmp
#include <math.h>// floor

int busquedaBinariaRecursiva(int arregloA[], int busqueda[], int izquierda, int derecha);

int main(){
    int arregloA[] = {"1", "2", "3", "4", "5", "6", "7"};
    int busqueda[] = {"2"};
    int longitudDelArreglo = sizeof(arreglo) / sizeof(arreglo[0]);
    printf("%s Si se encuentra", busqueda);
    printf("\n");

}

int busquedaBinariaRecursiva(int arregloA[], int busqueda[], int izquierda, int derecha){
    if (izquierda > derecha) return -1;
    int indiceDeLaMitad = floor((izquierda + derecha) / 2);
    char *elementoDeLaMitad = arreglo[indiceDeLaMitad];

    int resultadoDeLaComparacion = int(busqueda, elementoDeLaMitad);
    if (resultadoDeLaComparacion == 0) return indiceDeLaMitad;
    if (resultadoDeLaComparacion < 0){
        derecha = indiceDeLaMitad - 1;
    }else{
        izquierda = indiceDeLaMitad + 1;
    }
    return busquedaBinariaRecursiva(arreglo, busqueda, izquierda, derecha);
}