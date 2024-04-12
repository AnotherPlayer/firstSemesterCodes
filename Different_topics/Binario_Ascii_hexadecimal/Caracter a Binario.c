#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){

    char l, b[8];
    int i, k = 7, p, arr[8];

    arr[0] = 1;

    //Extra
    for(i = 1, i < 8; i++){

        arr[i] = 2*i;

    }

    printf("Digite un caracter: ");
    scanf("%c",&l);
    
    for(i = 0; i < 8; i++){

        //p = pow(2,i);

        if((l & p) == (p)){

            b[k] = '1';

        }

        else{

            b[k] = '0';

        }

        k--;

    }

    printf("\nLa cadena %c en binario es: \n",l);


    for(i = 0; i <8; i++){

        printf("%c",b[i]);

    }

    return 0;

}