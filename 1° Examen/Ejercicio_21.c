//Lo mismo que el anterior pero con la capacidad de repetir operaciones con lo numeros escritos en un inicio

#include<stdio.h>
#include<stdlib.h>

int main(){

    int x, y, opt, answ;

    printf("Escriba dos numeros:\n");

    scanf("%d %d",&x, &y);

    while(1){

        printf("\n***Seleccione una opcion***\nSumar [1]\tRestar [2]\nMultiplicar [3]\tDividir [4]\nSalir [0]\n");

        scanf("%d",&opt);

        if(opt==1){
            answ = suma(x, y);
            printf("El resultado es: %d\n",answ);
        }
        if(opt==2){
            answ = resta(x, y);
            printf("El resultado es: %d\n",answ);
        }
        if(opt==3){
            answ = producto(x, y);
            printf("El resultado es: %d\n",answ);
        }
        if(opt==4){
            answ = division(x, y);
            printf("El resultado es: %d\n",answ);
        }
        if(!opt){
            break;
        }
    }

}

int suma(int x, int y){
    int r = x+y;
    return r;
}

int resta(int x, int y){
    int r = x-y;
    return r;
}

int producto(int x, int y){
    int r = x*y;
    return r;
}

int division(int x, int y){
    int r = x/y;
    return r;
}