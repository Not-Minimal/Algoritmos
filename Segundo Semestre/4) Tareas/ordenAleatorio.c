#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void pasasHorizontal(char matriz[][], char palabra[], int f, int c){

    for (int i = 0; i < strlen(palabra); i++)
    {
        matriz[f][c+i] = palabra[i];
    }
}