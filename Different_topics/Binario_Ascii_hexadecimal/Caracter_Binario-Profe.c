#include<stdio.h>

int main(int argc, char **argv){

    char caract, binario[9];
    int i, aux;

    printf("Digite un caracter: ");
    scanf("%c",&caract);

    for(i = 7; i >= 0; i--){

        //Funciona como un pow()
        aux = i<<1;

        printf(" %d ",aux);

        if(caract&aux){

            binario[7-i] = 49;
        
        }

        else{

            binario[7-i] = 48;

        }

    }

    printf("\n");

    for(i = 0; i < 8; i++){

        printf("%c",binario[i]);

    }

    printf("\n%s",binario);
    
    
    /*
    int i=5, j=120, k, l;

    k = i+j;
    printf("%d",k);
    l = sizeof(k);
    printf("%d",l);
    */
    return 0;

}