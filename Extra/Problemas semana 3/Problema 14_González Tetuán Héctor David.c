/*
Caluclar la suma siguinete: 100 + 98 + 96 + ... + 0 en ese orden
*/

#include<stdio.h>

int main(){

    int suma = 0;

    //Bucle que se repita 100 veces y avences de 2 en 2
    for(int i = 0; i <= 100; i += 2){

        //Sumar la variable "suma" con la iteracion del bucle que va de 2 en 2 y guardarlo en la 1° variable
        suma += i;

    }

    printf("La suma de todos los numeros es de: %d",suma);

    return 0;

}