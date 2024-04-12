/*
Simular el comprotamiento de un reloj digital, imprimierndo la hora, minutos
y segundos de un día desde las 0:00:00 horas hasta las 23:59:59
*/

#include<stdio.h>

int main(){

//  hrs = almacena las horas, min = almacena los minutos, seg = almacena los segundos
    int hrs=0, min=0, seg;
    
//Leer dato en segundos

printf("Digite la cantidad de segundos:\n");

    scanf("%d",&seg);    

//Pasar los segundos a horas y minutos

while(seg > 60){

//Si el segundo es mayor o igual que 360, sumar 1 a la variable a "hrs" y restar 360 a la variable "seg"
if(seg >= 360){

    hrs++;
    seg -= 360;

}

//Si el segundo es mayor o igual que 60, sumar 1 a la variable a "min" y restar 60 a la variable "seg"
if(seg >= 60){

    min++;
    seg -=60;

}

}

printf("Cambio de formato a Hora:Minutos:Segundos: %d : %d : %d", hrs,min,seg);

return 0;

}