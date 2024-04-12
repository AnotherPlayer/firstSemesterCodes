/*
Juntar problemas 32 y 33
Escribir un dia de la semana y comparar con el numero que relaciona el dia
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define row_size 7
#define columns_size 10

int main(){

    int n, num, i;
    char word[columns_size];
    char semana[row_size][columns_size], *pSem;
    strcpy(semana[0], "Lunes");
    strcpy(semana[1], "Martes");
    strcpy(semana[2], "Miercoles");
    strcpy(semana[3], "Jueves");
    strcpy(semana[4], "Viernes");
    strcpy(semana[5], "Sabado");
    strcpy(semana[6], "Domingo");

    pSem = semana[0];

    //Inicio bucle

    while(1){

        //Recoger datos
        printf("\n**Ingrese una palabra:\tquit --> Salir**\n");
        scanf("%s", &word);

        puts("**Digite un numero entre el 1 y 7:\t0 --> Salir**  ");
        scanf("%d", &n);

        if ((strcmp(word, "quit") == 0) || (!n)){    // Salir del programa
            break;
        }

        i = 0;
        num = 7;
        for (; i < row_size; i++){          //Comprobar que la palabra 'word' sea un dia de la semana

            if (strcmp(pSem + ((i) * 10), word) == 0){

                num = i;
                break;

            }
        }

        printf("\n");

        if (num >= 0 && num < 7){

            n -= 1;
            if (strcmp(pSem + ((n) * 10), word) == 0){      //Comparar si 'word' concide con el numero

                printf("El dia %s ESTA en la posicion numero %d\n", word, n);

            }

            else{

                printf("El dia %s NO concide con el numero dado\n",word, n);

            }

        }

        if (num == 7){

            printf("La palabra %s no es un dia de la semana\n", word);

        }

    }

}