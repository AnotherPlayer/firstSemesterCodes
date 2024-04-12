#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Función de comparación para el qsort
int compare(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main(){

    char texto[100];
    char *words[100]; // Se asume un máximo de 100 palabras para el ejemplo

    printf("Escriba un texto: ");
    fgets(texto,sizeof(texto),stdin);

    char *word = strtok(texto, " \n");
    int count = 0, i;

    while (word != NULL) {
        words[count++] = word;      //Guarda palabras en arreglo de apuntadores 'words'
        word = strtok(NULL, " \n");
    }

    qsort(words, count, sizeof(char*), compare);

    i = 0;
    printf("Palabras ordenadas:\n");
    for (; i < count; i++) {
        printf("%s\n", words[i]);

    }

    return 0;
}