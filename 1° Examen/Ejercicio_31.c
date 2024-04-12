/*
Escriba un programa que inserte un carácter en una determinada posición de una cadena.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_SIZE 100

int main(){

    char l, word[] = {"Si las gotas de lluvia fueran de caramelo"};
    int x;

    srand(time(NULL));

    x = rand() % strlen(word)+1;

    printf("Digite un caracter [%d]: ",x);
    scanf("%c",&l);

    printf("\nCadena original [%c]: %s\n",word[x],word);

    word[x] = l;

    printf("Cadena modificada [%c]: %s\n",word[x],word);

    return 0;

}