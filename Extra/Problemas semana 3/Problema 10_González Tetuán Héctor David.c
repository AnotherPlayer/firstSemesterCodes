/*
Obtener el promedio de calificaciones de un grupo de n alumnos
*/

#include<stdio.h>

int main(){

    //Variable int "num" como arreglo que representa la cantidad de alumnos
    //Variabel double "prom" para guardar el promedio
    int num[5];
    double prom = 0;

    printf("Digite la calificacione de cada alumno:\n");

    //Hacer un bucle que repita un proceso por la cantidad de alumnos que hay
    for(int i = 0; i < sizeof(num)/4; i++){

        //Leer la califacion en la variable "num" con el arreglo en la posicion en la que se encuentre el bucle
        scanf("%d", &num[i]);
        
        //Sumar la variable leida con la variable "prom" y guardarla en esta última
        prom += num[i];

    }

    //Dividir entre la cantidad de alumnos la variable "prom"
    prom /= (sizeof(num)/4);

    printf("El promedio de los alumnos es de: %lf",prom);

    return 0;

}