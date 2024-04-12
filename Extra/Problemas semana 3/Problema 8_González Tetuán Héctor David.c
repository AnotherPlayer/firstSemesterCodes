/*
Determinar cuantos hombre y cuantas mujeres se encuentran en un grupo de
n personas, suponiendo que los datos son extraídos alumnno por alumno
*/

#include<stdio.h>
#include<string.h>

int main(){

    //Variable char "x" para guardar la cadena
    //Variable int "men" y "women" para guardar la cantidad de cada persona
    char x[10];
    int women=0, men=0;
    
    printf("Digite si la persona es Hombre o Mujer:\n");

    //Hacer un bucle para repetir el proceso la cantidad de veces necesarias
    for(int i = 0; i < 10; i++){

            printf("[%d]",i+1);
            scanf("%s",&x);

            //Si el usuario escribe "Mujer" aumentar en 1 el valor de la variable "women"
            if(strcmp("Mujer",x)){

                women++;

            }

            //Si el usuario escribe "Hombre" aumentar en 1 el valor de la variable "men"
            else if(strcmp("Hombre",x)){

                men++;

            }

    }

    printf("\nCantidad de Hombre: %d\nCantidad de Mujeres: %d",men,women);

}