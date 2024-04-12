/*
Leer 50 calificaciones de un grupo de alumnos. Calcule y escriba el porcentaje de reprobados.
Tomando en cuenta que la calificación mínima aprobatoria es de 7.0
*/

#include<stdio.h>

int main(){

    int i;
    float alum[50], total = 0, rep = 0, porc;

    printf("Digite las calificaciones de cada alumno:\n");

    //Bucle que se repita por la longuitud del arreglo "alumn"
    for(i = 0; i < sizeof(alum)/4; i++){

        //Leer la variable "alumn" en la casilla de la iteracion en la que este el bucle
        scanf("%f",&alum[i]);

        //Sumar la variable leida con la variable total y guardarla en esta ultima
        total += alum[i];

        //Compara si la variable "alumn" es mayor que 7
        if(alum[i] < 7){

            //Sumar la variable leida con la variable rep y guardarla en esta ultima
            rep += alum[i];

        }

    }

    //Caluclar el porcentaje dividiendo la variable "rep" (multiplicada por 100) con la variable "total" y guardarla en la variable porc;
    porc = (rep*100) / total;

    printf("El porcentaje de alumnos reprobados es de: %f", porc);

    return 0;

}