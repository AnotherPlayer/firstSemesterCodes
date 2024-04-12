/*
Escribir un programa que cree un arreglo de 26 elementos y que además genere y
guarde en ellas 26 las letras minusculas del alfabeto.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int num[26],i, j=97;

    for(i=0 ; i<26 ; i++){
        num[i] = j;
        j++;
    }

    printf("\n");
    for(i=0 ; i<26 ; i++){
        printf("%c ",num[i]);
    }

    return 0;
}
