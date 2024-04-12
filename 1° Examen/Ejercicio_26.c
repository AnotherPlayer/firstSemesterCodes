/*
Programar una función que, dada una cadena y un carácter, retorne la subcadena que
comienza con dicho carácter o NULL en caso de que el caracter no exista en la cadena
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char cad[100],car;

    printf("Escriba una cadena y un caracter:\n");
    scanf("%s %c",&cad,&car);

    regresaCad(cad, car);

}

void regresaCad(char cad[], char car){

    int i=0, j=0;
    char aux[100];

    while(cad[i] != '\0'){

        if(cad[i] == car){
            break;
        }
        i++;

        printf("%d\n",i);

    }

    if(( i==0 && cad[i]==car ) || (i > 0)){

        while(cad[i] != '\0'){
            aux[j] = cad[i];
            i++;
            j++;
        }

    }

    printf("Cadena escrita desde el caracter %c ---> %s",car, aux);
    

}