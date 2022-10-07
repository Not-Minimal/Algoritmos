#include <stdio.h>// printf
#include <string.h>// strcmp
#include <math.h>// floor
#define MAXIMA_LONGITUD_CADENA 50

int busquedaBinariaRecursiva(char arreglo[][MAXIMA_LONGITUD_CADENA], char busqueda[], int izquierda, int derecha);

int main(){
    char arreglo[][MAXIMA_LONGITUD_CADENA] = {"Arsenal", "Bautizo", "Comadreja", "Consulta", "Dinosaurio", "Zapato", "Saul"};
    char busqueda[] = {"Saul"};
    int longitudDelArreglo = sizeof(arreglo) / sizeof(arreglo[0]);
    printf("%s Si se encuentra", busqueda);
    printf("\n");

}

int busquedaBinariaRecursiva(char arreglo[][MAXIMA_LONGITUD_CADENA], char busqueda[], int izquierda, int derecha){
    if (izquierda > derecha) return -1;
    int indiceDeLaMitad = floor((izquierda + derecha) / 2);
    char *elementoDeLaMitad = arreglo[indiceDeLaMitad];

    int resultadoDeLaComparacion = strcmp(busqueda, elementoDeLaMitad);
    if (resultadoDeLaComparacion == 0) return indiceDeLaMitad;
    if (resultadoDeLaComparacion < 0){
        derecha = indiceDeLaMitad - 1;
    }else{
        izquierda = indiceDeLaMitad + 1;
    }
    return busquedaBinariaRecursiva(arreglo, busqueda, izquierda, derecha);
}