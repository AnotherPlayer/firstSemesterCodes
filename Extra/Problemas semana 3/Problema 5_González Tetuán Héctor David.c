/*
Calculas e imprimir la tabla de multiplicaer de un numero cualquiera.
Imprimir el multiplicando, el multiplicador y el producto
*/

#include<stdio.h>

int main(){

//Variable "num" para guardar un numero
    int num, i;
    
//Leer un numero en la variable "num"
printf("Digite 1 numero para multiplicar:\n");

    scanf("%d",&num);    


//Tabla de multiplicar
//Hacer repeticiones del 1 al 10 y con cada iteracion aumentar el valor de "i" para obtener la tabla
for (i=1; i<= 10; i++){

        printf("%d * %d = %d\n",num,i,num*i);
    }

}