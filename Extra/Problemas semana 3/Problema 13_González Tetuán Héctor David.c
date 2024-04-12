/*
Encontrar el mayor valor de un conjunto de n numeros dados
*/

#include<stdio.h>

int main(){

    int num[5];
    //Variables int para el metodo de burbuja
    int i,j,aux;

//Leer 5 datos en un bucle que se repita la misma cantidad de veces
printf("Digite 5 numeros:\n");

    for(i=0; i<5; i++){
    
    scanf("%d",&num[i]);
    
}

//Método de burbuja para ordenar de mayor a menor
    for (i=1; i<5; i++){

        for (j=0 ; j<5 - 1; j++)

            if (num[j] < num[j+1]){

                aux = num[j];
                num[j] = num[j+1];
                num[j+1] = aux;

            }
            
    }

    printf("El numero mas grande es: %d", num[0]);
          
}