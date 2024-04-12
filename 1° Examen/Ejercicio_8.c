//Hacer un algoritmo que imprima el mayor y el menor de una serie de 5 números que vamos introduciendo por teclado.

#include<stdio.h>
#include<stdlib.h>

void main(){
	
	int i, j, n[5], aux;
	
	for(i = 0; i < 5 ; i++){
		scanf("%d",&n[i]);
	}
	
	for(i = 0; i < 5 ; i++){
		for(j = 0; j < 5 ; j++){
			
			if(n[j] > n[j + 1]){
				
				aux = n[j];
				n[j] = n[j + 1];
				n[j+1] = aux;
								
			}
		}
	}
	
	printf("Numero mayor: %d",n[4]);
	
}
