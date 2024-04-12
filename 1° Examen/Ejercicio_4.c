/*Leer sucesivamente de teclado, hasta que aparezca un número comprendido entre 1 y 5.
Desarrollar el algoritmo usando la función :	a) getchar() 	b) scanf ()*/

#include<stdio.h>
#include<stdlib.h>

void conGet();
void conScan();

void main(){
	
	int opt;
	
	scanf("%d",&opt);
	
	if(opt==1){
		printf("1\n");
		conGet();
	}
	
	if(opt==2){
		printf("2\n");
		conScan();
	}
}

void conGet(){
	
	int x;
	char cad;
	
	while(1){
		
		printf("Numero (get): ");
		fflush( stdin );
		cad = getc(stdin);
		x = cad - '0';
		
		if(x>0 && x<6){
			printf("%d",x);
			break;
		}
	}
	
}

void conScan(){
	
	int x;
	
	while(1){
		
		printf("Numero (scan): ");
		fflush( stdin );
		scanf("%d",&x);
		
		if(x>0 && x<6){
			printf("%d",x);
			break;
		}
	}
	
}
