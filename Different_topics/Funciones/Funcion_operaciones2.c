#include<stdio.h>

void main(){

    int x, y, res;
    x = 10; y = 20; 
    
    multiplica (x, y, &res);

    printf("\nEl resultado de multiplicar %d por %d es %d\n", x, y, res);

}

    void multiplica(int x, int y, int *res){

        *res = x * y;

        //printf("\nEl resultado de multiplicar %d por %d es %d\n", x, y, res);

    }