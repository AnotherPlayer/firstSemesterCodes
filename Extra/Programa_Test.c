#include<stdio.h>

int main(){

    const char *exer[20];
    int boleta, prob, i, j;

    for(i = 0; i <= 15; i++){

        exer[i] = (char*)malloc(sizeof(char));

    }

    exer[0] = "Ejercicio 1";
    exer[1] = "Ejercicio 2";
    exer[2] = "Ejercicio 3";
    exer[3] = "Ejercicio 4";
    exer[4] = "Ejercicio 5";
    exer[5] = "Ejercicio 6";
    exer[6] = "Ejercicio 7";
    exer[7] = "Ejercicio 8";
    exer[8] = "Ejercicio 9";
    exer[9] = "Ejercicio 10";
    exer[10] = "Ejercicio 11";
    exer[11] = "Ejercicio 12";
    exer[12] = "Ejercicio 13";
    exer[13] = "Ejercicio 14";
    exer[14] = "Ejercicio 15";

    printf("%d %d\n", sizeof(exer)/8, sizeof(exer[0])/8);

    printf("Digite su boleta:\n");
    scanf("%d",&boleta);

    prob = (boleta % 15);

    printf("Boleta: %d -- Prob: %d\n",boleta, prob);

    for(i = prob-1; i < 15; i++){

        printf("%s\n",exer[i]);

    }
    

    for(j = 0; j < prob-1; j++){

        printf("%s\n",exer[j]);

    }

    

return 0;

}