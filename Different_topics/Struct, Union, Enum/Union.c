#include<stdio.h>

int main(){

    int i;

    union entero_bytes{

        int entero;
    	unsigned char bytes[4];

    };

    typedef union entero_bytes Ent_byt;

    Ent_byt x;

    printf("Introduce un numero entero\n");
    scanf("%d",&x.entero);

    //printf("%d",sizeof(entero));

    //printf("Los bytes del entero son: %02x %02x %02x %02x\n\n",x.bytes[0], x.bytes[1], x.bytes[2], x.bytes[3]);

    printf("Los bytes del entero son:");

    for(i =0 ; i <4; i++){

        printf(" %02x ",x.bytes[i]);

    }

    return 0;

}
