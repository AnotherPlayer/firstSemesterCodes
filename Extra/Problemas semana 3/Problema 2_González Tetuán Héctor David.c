//Leer 20 numeros e imprimir cuantos son positivos, cuantos negativos y cuantos neutros

#include<stdio.h>

int main(){

//Arreglo de numeros enteros con 20 espacios reservados(int num[20])
    int num[20], i;

printf("Digite 20 numeros:\n");

    for(i=0; i<20; i++){
    
//Leer un numero por cada repetición(longuitud de arreglo)
    scanf("%d",&num[i]);
    
    }

printf("Numeros positivos:\n");

for(i=0; i<20; i++){

//Comparar que los numeros guardados en el arreglo "num" sean mayor que 0
    if(num[i] > 0){

        printf("%d ",num[i]);

        }
    
    }

printf("\nNumeros negativos:\n");

for(i=0; i<20; i++){

//Comparar que los numeros guardados en el arreglo "num" sean menor que 0    
    if(num[i] < 0){

        printf("%d ",num[i]);

        }
    
    }

printf("\nNumeros positivos:\n");

for(i=0; i<20; i++){

//Comparar que los numeros guardados en el arreglo "num" sean igual que 0
    if(num[i] == 0){

        printf("%d ",num[i]);

        }
    
    }
          
}