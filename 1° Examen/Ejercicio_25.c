/*
Hacer un programa que ingrese dos cadenas y:

. Determine cuál de ellas es mayor en orden alfabético.
. Concatene ambas cadenas.
. Determine cuál es mas larga.
. Invierta la primera ingresada.

El programa deberá mostrar todas las salidas con carteles aclaratorios

LA MAYOR ES ..............................
LAS CADENAS CONCATENADAS QUEDAN.............
LA CADENA MÁS LARGA ES................
LA CADENA cadena INVERTIDA SE LEE ............. 
*/

#include<stdio.h>
#include<string.h>

int main() {

    char cad1[100], cad2[100], un[100];

    printf("Ingresa una cadena de texto:\n");
    fgets(cad1, sizeof(cad1), stdin);

    printf("Ingresa otra cadena de texto:\n");
    fgets(cad2, sizeof(cad2), stdin);

    //1° inciso
    conteo(cad1,cad2);

    //2° inciso
    strcpy(un,cad1);
    strcat(un,cad2);
    printf("La cadena concatenada queda: %s",un);

    //3° inciso
    comparar(cad1,cad2);

    //4° inciso

    printf("La cadena invertida es: %s",strrev(cad1));


}

void conteo(char cad1[], char cad2[]){

    int i=0, one=0, two=0;

    while(cad1[i] != '\0' || cad2[i] != '\0'){
        if(cad1[i]>cad2[i]){
            one++;
        }
        if(cad1[i]<cad2[i]){
            two++;
        }
        i++;
    }

    if(one>two)
        printf("La mayor es: %s\n",cad1);
    if(two>one)
        printf("La mayor es: %s\n",cad2);

}

void comparar(char cad1[], char cad2[]){

    if(strlen(cad1)>strlen(cad2)){
        printf("La cadena mas larga es: %s\n",cad1);
    }
    if(strlen(cad2)>strlen(cad1)){
        printf("La cadena mas larga es: %s\n",cad2);
    }

}