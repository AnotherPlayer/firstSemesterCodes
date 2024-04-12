#include<stdio.h>

int main(){

    union entero_bytes{

        int entero;
    	unsigned char bytes[4];

    };

    typedef union entero_bytes Ent_byt;

    Ent_byt x;
    int i, aux;
    
    for(i =0 ; i <4; i++){
    	
		printf("Introduce el valor del byte[%d]:\n",i);
        scanf("%d",&aux);
        x.bytes[i] = (unsigned char) aux;

    }

    //printf("%d",sizeof(entero));
    //printf("Los bytes del entero son: %02x %02x %02x %02x\n\n",x.bytes[0], x.bytes[1], x.bytes[2], x.bytes[3]);

    printf("Los bytes del entero son:");

    for(i =0 ; i <4; i++){

        printf(" %02x ",x.bytes[i]);

    }
    
    printf("El entero tiene un valor de %08x, o en decimal: %d\n",x.entero, x.entero);

    return 0;

}
