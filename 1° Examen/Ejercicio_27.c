/*
Ingresar una cadena de caracteres e indicar si la misma es un palíndromo. Realizar
esta operación cuantas veces se desee.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char cad1[100], cad2[100];

        while(1){

        printf("Escriba una cadena:\n");
        scanf("%s",&cad1);

        if(cad1 == '0'){
            break;
        }

        strcpy(cad2, cad1);

        strrev(cad2);

        printf("%s / %s\n",cad1, cad2);

        if(strcmp(cad1,cad2) == 0){
            printf("La palabra %s es un palindromo\n",cad1);
        }
        else{
            printf("No es un palindromo\n");
        }

    }

}