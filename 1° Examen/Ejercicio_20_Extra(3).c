#include <stdio.h>

float suma(float x, float y){
    return x+y;
}

float resta(float x, float y){
    return x-y;
}

float multiplica(float x, float y){
    return x*y;
}

float divide(float x, float y){
    return x/y;
}

int main(){

    enum operaciones{plus='+',   less='-',
                     mult1='*',  mult2='x',
                     mult3='X',  division='/'};

    float (*operacion[4])(float, float)={suma, resta, multiplica, divide};                     
    float a, b, c;
    char op;
    scanf("%f %c %f", &a, &op, &b);

    switch (op){
        
        case plus:      c = operacion[0](a,b);
                        break;
        case less:      c = operacion[1](a,b);
                        break;
        case mult1:
        case mult2:
        case mult3:     c = operacion[2](a,b);
                        break;
        case division:  c = operacion[3](a,b);
                        break;
        default:        c = 0;

     }

     printf("    %6.2f  %c %6.2f = %6.2f\n", a, op, b, c);


}