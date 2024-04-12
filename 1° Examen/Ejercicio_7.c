/*Hacer un algoritmo que imprima todos los números primos que hay desde la unidad hasta un número que introducimos por teclado.
El programa debe poder ejecutarse mientras el usuario lo requiera.*/

#include<stdio.h>
#include<stdlib.h>

void main(){
	
	int n,i=1,j,cond;
	
	scanf("%d",&n);
	
	while(i<=n){
		
		cond = 1;
		
		for(j=2 ; j<n ; j++){
			if(n%j == 0){
				cond = 0;
				break;
			}
		}
		
		if(cond){
			printf("%d ",i);
		}
		
		i++;
	
	}
	
}
