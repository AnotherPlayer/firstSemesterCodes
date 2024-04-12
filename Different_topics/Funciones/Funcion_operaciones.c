#include <stdio.h>

void main (void)
{    enum operaciones { suma='+',  resta='-',
                        mult1='*', mult2='x',
                        mult3='X', division='/'};

     float a, b, c;
     char op;

     scanf("%f %c %f", &a, &op, &b);

     switch (op){
        
        case suma:  c = a + b;
                        break;
        case resta: c = a - b;
                        break;
        case mult1:
        case mult2:
        case mult3: c = a * b;
                        break;
        case division: c = a / b;
                           break;
        default: c = 0;

     }

     printf("%f\n",c);
     
}