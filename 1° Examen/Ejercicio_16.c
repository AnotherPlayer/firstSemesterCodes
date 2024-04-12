/*
Escribir un programa que genere aleatoriamente 100 números, los almacene en un
arreglo, y luego los muestre ordenados según un indicador de criterio de
ordenamiento que debe ingresarse por teclado.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int num[100], i, n;

    srand(time(NULL));

    for(i=0 ; i <= 100; i++){
        num[i] = rand() % 101;
    }

    printf("Ordenar de MAYOR A MENOR [0], o MENOR A MAYOR [1]");
    scanf("%d",&n);

    if(n){
        burbujaUno(num);
    }
    else{
        burbujaCero(num);
    }

    return 0;
}

void burbujaCero(int ar[]){

    int i,j,aux;

    for (i=1 ; i<=100 ; i++){

       for (j=0; j <= 100 ;j++){

            if (ar[j] > ar[j+1]){
                aux=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=aux;
            }
        }
    }

    printf("Menor a mayor: ");
    for(i=0 ; i <= 100; i++){
        printf("%d ",ar[i]);
    }

}

void burbujaUno(int ar[]){

    int i,j,aux;

    for (i=1 ; i<=100 ; i++){

       for (j=0; j <= 100 ;j++){

            if (ar[j] < ar[j+1]){
                aux=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=aux;
            }
        }
    }

    printf("Mayor a menor: ");
    for(i=0 ; i <= 100; i++){
        printf("%d ",ar[i]);
    }
    
}