/*Incrementar una variable entera j desde 0 hasta n y luego mostrar el resultado.
Hacerlo utilizando 3 bucles diferentes.*/

#include<stdio.h>
#include<stdlib.h>

void main(){
	
	int j, n;
	
	scanf("%d",&n);
	
	//1
	
	for(j=0 ; j<=n ; j++){
		printf("%d",j);
	}
	
	printf("\n");
	
	//2
	
	j=0;
	while(j<=n){
		printf("%d",j);
		j++;
	}
	
	printf("\n");
	
	//3
	
	j=0;
	do{
		printf("%d",j);
		j++;
	}while(j<=n);
	
}
