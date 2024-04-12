#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Max_size 1500

// Función de comparación para el qsort
int compare(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main(){

/*
    char texto[100],l;
    char *words[100],*word, *extra; // Se asume un máximo de 100 palabras para el ejemplo
    int count = 0, i, j;

    printf("Escriba un texto: ");
    fgets(texto,sizeof(texto),stdin);

    printf("Escriba un caracter: |%d|\n",strlen(texto));
    scanf("%c",&l);

    extra = & texto[0];
    for(i=0 ; i < strlen(texto) ; i++){

        if(*extra == l){
            *word = strtok(texto, " \n");
        }

    }
*/

/*
	char str[] = "Geeks for Geeks";
	char* token;
	char* rest = str;

	while ((token = strtok_r(rest, " ", &rest)))
		printf("%s\n", token+1);

	return 0;
*/

    char str[] = "Hello, World! Geeks for Geeks.";
    const char outer_delimiters[] = "!.";
    const char inner_delimiters[] = " ,";
 
    char* token;
    char* outer_saveptr = NULL;
    char* inner_saveptr = NULL;
 
    token = strtok_r(str, outer_delimiters, &outer_saveptr);
 
    while (token != NULL) {
        printf("Outer Token: %s\n", token);
 
        char* inner_token = strtok_r(
            token, inner_delimiters, &inner_saveptr);
 
        while (inner_token != NULL) {
            printf("Inner Token: %s\n", inner_token);
            inner_token = strtok_r(NULL, inner_delimiters,
                                   &inner_saveptr);
        }
 
        token = strtok_r(NULL, outer_delimiters,
                         &outer_saveptr);
    }

    return 0;

}