#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define DICTIONARY_SIZE 10

const char* dictionary[DICTIONARY_SIZE] = {
    "hello", "world", "how", "are", "you", "today", "i", "am", "fine", "thank"
};

char* suggest_next_word(char* text) {
    // Crear una copia de la cadena de texto para no modificar la original
    char* text_copy = strdup(text);

    char* word = strtok(text_copy, " ");
    char* next_word = NULL;

    while (word != NULL) {
        next_word = strtok(NULL, " ");
        if (next_word != NULL) {
            for (int i = 0; i < DICTIONARY_SIZE; i++) {
                if (strcmp(word, dictionary[i]) == 0) {
                    // Liberar la memoria asignada para la copia de la cadena de texto
                    free(text_copy);
                    return next_word;
                }
            }
        }
        word = next_word;
    }

    // Liberar la memoria asignada para la copia de la cadena de texto
    free(text_copy);
    return "Error: no word found in dictionary";
}

int main() {
    char text[] = "Hello, how are you today?";
    printf("Next word suggestion: %s\n", suggest_next_word(text));
    return 0;
}





