/*
Se dispone de dos cadenas de caracteres cad1 y cad2 y se ejecutan las sgtes.
funciones:

a. strcpy(cad1, “ANTONIO”);
b. strcpy(cad2, “ANTENA”);

Para la expresión strcmp(cad1, cad2); ¿Cuál de las sgtes. afirmaciones es cierta?
a)Lo que devuelve la expresión dependerá de la dimensión de cad1 y cad2.
b)La expresión devuelve un nº menor que cero.
c)La expresión devuelve un nº mayor que cero.
d)Lo que devuelve la expresión dependerá de la dimensión de cad1.
e)Lo que devuelve la expresión dependerá de la dimensión de cad2.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char *cad1 = "ANTONIO", *cad2 = "ANTENA";

    int r = strcmp(cad1, cad2);

    printf("Comparando las cadenas %s y %s, nos devuelve: %d", cad1, cad2, r);

    printf("\na)Si\nb)No\nc)Si\nd)Si\ne)Si");

}