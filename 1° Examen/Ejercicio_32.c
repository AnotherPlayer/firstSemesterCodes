/*
Cargar un arreglo bidimensional con los nombres de los días de la semana,
luego ingresar un número (validar que este entre 1 y 7)
y decir que día de la semana le corresponde a ese número.
(el programa deberá ser iterativo)
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define row_size 7
#define columns_size 10

int main(){

    char semana[row_size][columns_size], *pSem;
        strcpy(semana[0],"Lunes");
        strcpy(semana[1],"Martes");
        strcpy(semana[2],"Miercoles");
        strcpy(semana[3],"Jueves");
        strcpy(semana[4],"Viernes");
        strcpy(semana[5],"Sabado");
        strcpy(semana[6],"Domingo");
    
    int n;

    pSem = semana[0];

    while(1){

    puts("***Digite un numero entre el 1 y 7:  0 --> Salir***\n");
    scanf("%d",&n);

        if( n>=1 && n<=7 ){

            puts(pSem+((n-1)*10));

        }

        if(!n)
            break;

    }
    
	
	return 0;

}