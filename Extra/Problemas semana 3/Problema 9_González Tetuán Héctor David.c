/*
El Depto. de Seguridad Publica y Transito del D.F. desea saber, de los n autos
que entran a la cuidad de México, cuantos entran con calcomanía de cada
color. Conociendo el último dígito de la placa de cada automóvil se puede
determinar el color de la calcomanía.
*/

#include<stdio.h>
#include<string.h>

int main(){

    //Variable int "carAm" para guardar la cantidad de carros
    //Variable int "color" como arreglo para guardar la cantidad de posibles colores que hay
    //Variable char "placa" como arreglo para guardar la placa que se digite
    int carAm, i, color[5];
    char placa[7];

    color[0] = 0;
    color[1] = 0;
    color[2] = 0;
    color[3] = 0;
    color[4] = 0;

    //Leer la cantidad de autos que hay
    printf("Digite la cantidad de autos:\n");
    scanf("%d",&carAm);

    //Leer una cadena para comparar la ultima posicion del arreglo con los numeros del 0 al 9
    printf("Digite la placa de los autos [7 digitos]:\n");

    for(i = 0; i < carAm; i++){

            printf("\nCarro %d: ",i+1);
            scanf("%s",placa);

            printf("Check out: Last Num: %c", placa[sizeof(placa)-1]);

        //Si la ultima posicion del arreglo es "1" o "2" aumentar en 1 el valor de la variable "color" en la posición "0"
            if('1' == placa[sizeof(placa)-1] || '2' == placa[sizeof(placa)-1]){

                    color[0]++;

            }

        //Si la ultima posicion del arreglo es "3" o "4" aumentar en 1 el valor de la variable "color" en la posición "1"
            if('3' == placa[sizeof(placa)-1] || '4' == placa[sizeof(placa)-1]){

                    color[1]++;

            }

        //Si la ultima posicion del arreglo es "5" o "6" aumentar en 1 el valor de la variable "color" en la posición "2"
            if('5' == placa[sizeof(placa)-1] || '6' == placa[sizeof(placa)-1]){

                    color[2]++;

            }

        //Si la ultima posicion del arreglo es "7" o "8" aumentar en 1 el valor de la variable "color" en la posición "3"
            if('7' == placa[sizeof(placa)-1] || '8' == placa[sizeof(placa)-1]){

                    color[3]++;

            }

        //Si la ultima posicion del arreglo es "9" o "0" aumentar en 1 el valor de la variable "color" en la posición "4"
            if('9' == placa[sizeof(placa)-1] && '0' == placa[sizeof(placa)-1]){

                    color[4]++;

            }

    }

    printf("\nCarros con placa de color:\nAmarilla: %d\nRosa: %d\nRoja: %d\nVerde: %d\nAzul: %d"
    ,color[0],color[1],color[2],color[3],color[4]);

    return 0;

}