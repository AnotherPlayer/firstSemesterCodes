/*Hacer el algoritmo que imprima los números pares entre 100 y 20 a razón de 6 por línea separados por 3 blancos*/

#include<stdio.h>
#include<stdlib.h>

void main(){
	
	int i,j=0;
	
	for(i=20 ; i<=100 ; i+=2){
			
		printf("%d   ",i);
		j++;
		
		if(j==6){
			printf("\n");
			j=0;
		}
		
	}
	
}
