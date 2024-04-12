/*
Una persona debe de realizar un muestreo con 50 personas para determinar el
promedio de peso de los niños, jovenes, adultos y viejos que existen en su
zona habitacional.
*/

#include<stdio.h>

int main(){

//Variable int "num", como un arreglo para guardar las edades
//Variable int "child", "teen", "adult" y "older" para representar la cantidad de personas de cada respectiva edad
//Variable float "prom" para guardar los promedio de las cuatro edades
int num[10], child=0, teen=0, adult=0, older=0;
int edad[4];
float prom[4];

//Hacer un bucle para repetir el proceso 10 veces (o la cantidad del arreglo "num")
for(int i = 0; i < 10; i++){

printf("Digite la edad de la %d° persona:\n",num[i]);

//Leer un numero que represente la edad de la persona
scanf("%ld",&num[i]);

//En caso de que "num" este entre 0 y 12
if(num[i] >= 0 && num[i] <=12){

/*
Aumentar en 1 el valor de "child"
Guardar en la casilla "0" en la variable "edad"
Sumar la variable anterior con la variable "prom" en la casilla "0" y guardarla en la misma
*/

child++;
printf("Digite su peso: (Infante)");
scanf("%d",edad[0]);
prom[0] += edad[0];

}

//En caso de que "num" este entre 13 y 29
if(num[i] > 12 && num[i] <=29){

/*
Aumentar en 1 el valor de "teen"
Guardar en la casilla "1" en la variable "edad"
Sumar la variable anterior con la variable "prom" en la casilla "1" y guardarla en la misma
*/

teen++;
printf("Digite su peso: (Adolescente)");
scanf("%d",edad[1]);
prom[1] += edad[1];

}

//En caso de que "num" este entre 30 y 59
if(num[i] > 29 && num[i] <=59){

/*
Aumentar en 1 el valor de "adult"
Guardar en la casilla "2" en la variable "edad"
Sumar la variable anterior con la variable "prom" en la casilla "2" y guardarla en la misma
*/

adult++;
printf("Digite su peso: (Adulto)");
scanf("%d",edad[2]);
prom[2] += edad[2];

}

//En caso de que "num" sea mayor que 59
if(num[i] >= 60){

/*
Aumentar en 1 el valor de "older"
Guardar en la casilla "3" en la variable "edad"
Sumar la variable anterior con la variable "prom" en la casilla "3" y guardarla en la misma
*/

older++;
printf("Digite su peso: (Anciano)");
scanf("%d",edad[3]);
prom[3] += edad[4];

}

}

//Sacar el promedio dividiendo la suma de cada edad (prom) entre la variables que representan cada edad (child, teen, adult, older)
prom[0] /= child;
prom[2] /= teen;
prom[3] /= adult;
prom[4] /= older;

printf("\nPromedio de peso por categoria:\nInfantes: %f\nAdolescente: %f\nAdulto: %f\nAncioanos: %f",prom[0],prom[1],prom[2],prom[3]);

return 0;

}