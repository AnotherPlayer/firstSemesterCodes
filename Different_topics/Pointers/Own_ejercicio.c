/*Intercambiar el valor de dos variables*/

#include<stdio.h>

void intercambio(int *x, int *y);

int main(void){

    int a=7,b=8;

    printf("a=%d , b=%d\n",a,b);
    intercambio(&a,&b);
    printf("a=%d , b=%d\n",a,b);

}

void intercambio(int *x, int *y){

    int z;

    z = *x;
    *x = *y;
    *y = z;

}
