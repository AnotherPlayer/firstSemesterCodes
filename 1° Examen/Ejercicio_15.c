/*
Escribir un programa que genere aleatoriamente 100 números, los almacene en un
arreglo, luego ingrese un número y determine entre los números almacenados cuales
son mayores o iguales al número ingresado. Con los mayores calcular su sumatoria y
mostrar
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int num[100], i, n, sumM=0;

    srand(time(NULL));

    for(i=0 ; i <= 100; i++){
        num[i] = rand() % 101;
    }

    scanf("%d",&n);

    printf("\nNumeros mayores a %d:\n",n);
    for(i=0 ; i <= 100; i++){
        if(num[i] > n){
            printf("%d ",num[i]);
            sumM += num[i];
        }
    }

    printf("\nNumeros menores a %d:\n",n);
    for(i=0 ; i <= 100; i++){
        if(num[i] < n)
            printf("%d ",num[i]);
    }

    printf("\nLA SUMATORIA DE LOS NÚMEROS MAYORES QUE %d ES %d",n,sumM);

    return 0;
}