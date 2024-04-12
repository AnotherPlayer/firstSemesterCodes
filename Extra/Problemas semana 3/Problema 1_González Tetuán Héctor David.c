//Leer 10 numeros e imprimir solamente los numeros positivos

#include<stdio.h>

int main(){

    int num[10], i;
    //Arreglo de numeros enteros con 10 espacios reservados(int num[10])

printf("Digite 10 numeros:\n");

//Leer un numero por cada repetición(longuitud de arreglo)
    for(i=0; i<10; i++){
    
    scanf("%d",&num[i]);
    
}

printf("Numeros positivos:\n");

for(i=0; i<10; i++){

//Comparar que los numeros guardados en el arreglo "num" sean mayor que 0
    if(num[i] >= 0){

        printf("\n%d",num[i]);

    }
    
}
          
}
