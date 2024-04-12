#include<stdio.h>
#include<stdlib.h>

int main(){

    char l, b[8];
    int i, k = 7, arr[8];

    arr[0] = 1;

    //Extra
    for(i = 1; i < 8; i++){

        arr[i] = arr[i-1]*2;

    }

    //printf("Digite un caracter: ");
    scanf("%c",&l);
    
    for(i = 0; i < 8; i++){


        if((l & (arr[i])) == (arr[i])){

            b[k] = '1';

        }

        else{

            b[k] = '0';

        }

        k--;

    }

    //printf("\nLa cadena %c en binario es: \n",l);

    /*
    for(i = 0; i <8; i++){

        printf("%c",b[i]);

    }
    */

   printf("%s",b);

    return 0;

}