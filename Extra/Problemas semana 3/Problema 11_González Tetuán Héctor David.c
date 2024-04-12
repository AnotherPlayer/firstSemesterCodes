/*
Calcular el promedio de edades de hombre, mujeres y de todo un grupo
de alumnos
*/

#include<stdio.h>

int main(){

    //Variable int "alum" para guaradar las edades y la variable int "prom" para guardar la suma de edades
    //Variable int "cant" como arreglo para guardar la cantidad de hombre y mujer
    //Variabel int "x" como arreglo para guardar el promedio hombre y mujeres
    //Variabel float "promd" como arreglo para guardar el promedio general
    int alum, prom = 0;
    int cant[2], x[2];
    float promd[3];

    promd[0] = 0;
    promd[1] = 0;
    promd[2] = 0;

    //Leer la cantidad de hombres en la variable "cant" en la casilla "0"
    printf("Digite la cantidad de alumnos hombres: ");
    scanf("%d",&cant[0]);
    
    printf("Digite las edades:\n");

    //Bucle que se repite la cantidad de hombre que hay
    for(int i = 0; i < cant[0]; i++){

        //Leer la edad en la variable "alum"
        //Sumar la variable "alum" con la variable "promd" en la casilla "0" y guardarla en la ultima
        //Sumar la variable "alum" con la variable "prom" y guardarla en la ultima
        scanf("%d",&alum);
        promd[0] += alum;
        prom += alum;
    }

    //Dividir la variable "promd" en la casilla "0" con la variable "cant" en la casilla "0" y guardarla en x en la casilla "0"
    x[0] = promd[0]/cant[0];

    //Leer la cantidad de mujeres en la variable "cant" en la casilla "1"
    printf("Digite la cantidad de alumnos mujeres:");
    scanf("%d",&cant[1]);

    printf("Digite las edades:\n");

    //Bucle que se repite la cantidad de hombre que hay
    for(int i = 0; i < cant[1]; i++){

        //Leer la edad en la variable "alum"
        //Sumar la variable "alum" con la variable "promd" en la casilla "0" y guardarla en la ultima
        //Sumar la variable "alum" con la variable "prom" y guardarla en la ultima
        scanf("%d",&alum);
        promd[1] += alum;
        prom += alum;

    }

    //Dividir la variable "promd" en la casilla "1" con la variable "cant" en la casilla "1" y guardarla en x en la casilla "1"
    x[1] = promd[1]/cant[1];

    printf("Cantidad de prom: %d",prom);

    //Dividir la variable "prom" con la variable ("cant" en la casilla "0" y la casilla "1") y guardarla en promd en la casilla "3"
    promd[3] = prom/(cant[0] + cant[1]);
    
    printf("Promedio de edades de todos los alumnos: %f",promd[3]);
    printf("Promedio de hombres: %d", x[0]);
    printf("Promedio de mujeres: %d", x[1]);

    return 0;

}