/*
Escribir un programa que encuentre el número de veces que una palabra dada ocurre
en un texto
Una salida podría ser:
La palabra es "el"
El texto es "el perro, el gato y el canario"
La palabra ocurrió 3 veces.
*/

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str[MAX_SIZE];
    char word[MAX_SIZE];
    int i, j, found, count=0;
    int strLen, wordLen;

    /* Input string and word from user */
    printf("Escribe una string: ");
    gets(str);
    printf("Escribe palabra a buscar: ");
    gets(word);

    strLen  = strlen(str);  // Find length of string
    wordLen = strlen(word); // Find length of word


    /*
     * Run a loop from starting index of string to
     * length of string - word length
     */
    for(i=0; i <= strLen-wordLen; i++){
        
        /* Match word with string */
        found = 1;

        for(j=0; j<wordLen; j++){

            if(str[i + j] != word[j]){
                found = 0;
                break;
            }
        }

        if(found == 1){
            count++;
        }
    }

    printf("Total de apariciones de '%s': %d\n", word, count);

    return 0;

}
