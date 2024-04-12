//Escriba un programa que pida un número entero y escriba todos los números primos menores que él.

#include<stdio.h>
#include<stdbool.h>

void main(){

    int x;

    printf("Digite un numero:");
    scanf("%d",&x);

    primos(x);

}

void primos(int x){

    int i, j, cont=0;
    bool cond = true;

    for(i = x; i < 1; i--){

        for(j = x; j < 1; i--){

            if(i % (j-1) != 0){

            cond = false;

            }



        }

        if(cond){

            printf("%d", i);
            cond = true;

        }

    }

}