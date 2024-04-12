//Escribir un programa que genere y muestre en pantalla la tabla ASCII.

#include<stdio.h>
#include<stdlib.h>

void main(){
	
	int i;
	
	for(i=0 ; i<=255 ; i++){
		
		printf("%d\t%c\n",i, i);
		
	}
	
}
