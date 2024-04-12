/*
Escribir un programa que ingrese una cadena, cuente cuantos de sus elementos no son
dígitos, cuantos de ellos son blancos y muestre: 
*/

#include <stdio.h>

int main() {

    char cadena[100];
    int no_digitos = 0, blancos = 0, i = 0;

    printf("Ingresa una cadena de texto:\n");
    fgets(cadena, sizeof(cadena), stdin);

    while (cadena[i] != '\0') {

        if(!((cadena[i] > 47) && (cadena[i] < 58))){
            no_digitos++;
        }
       

        if(cadena[i] == ' '){
            blancos++;
        }
        
        i++;
    }

    printf("Caracteres que no son digitos: %d\n", no_digitos-1);
    printf("Espacios en blanco: %d\n", blancos);

    return 0;
}