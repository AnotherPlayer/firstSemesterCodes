#include<stdio.h>
#include<stdlib.h>

int main(){

    int x, y, opt, answ;

    printf("Escriba dos numeros:\n");

    scanf("%d %d",&x, &y);

    printf("Seleccione una opcion\nSumar [1]\nRestar [2]\nMultiplicar [3]\nDividir [4]\n");

    while(1){
        scanf("%d",&opt);

        if(opt==1){
            answ = suma(x, y);
            printf("El resultado es: %d",answ);
            break;
        }
        if(opt==2){
            answ = resta(x, y);
            printf("El resultado es: %d",answ);
            break;
        }
        if(opt==3){
            answ = producto(x, y);
            printf("El resultado es: %d",answ);
            break;
        }
        if(opt==4){
            answ = division(x, y);
            printf("El resultado es: %d",answ);
            break;
        }
        else{
            printf("No esta entre las opciones\n");
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