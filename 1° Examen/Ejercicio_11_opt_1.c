#include<stdio.h>

int main(){

    int vec[]= {1,2,-2,1,3,-1,5,10}, i, var;
    var=1;
    
    for( i = 0; i <= 7; ++i )
        if(vec[i]>0)
            var = var * vec[i];

    //El programa imprimi el valor: 300
    printf ( "%d\n",var);

}