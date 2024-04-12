/*Codificar en C un programa que lea 20 caracteres indique cuantas "a" se ingresaron,
cuantas "e, i, o, u"*/

#include<stdio.h>
#include<stdlib.h>

void main(){
	
	char c[20], voc[5];
	int i;
	
	for(i=0 ; i<5 ; i++){
		voc[i]=0;
	}
	
	for(i=0 ; i<=20 ; i++){
		fflush( stdin );
		c[i] = getchar();
	}
	
	for(i=0 ; i<=20 ; i++){
		
		if(c[i] == 'a'){
			voc[0]++;
		}
		
		if(c[i] == 'e'){
			voc[1]++;
		}
		
		if(c[i] == 'i'){
			voc[2]++;
		}
		
		if(c[i] == 'o'){
			voc[3]++;
		}
		
		if(c[i] == 'u'){
			voc[4]++;
		}
		
	}
	
	printf("a:%d\te:%d\ti:%d\to:%d\tu:%d\t",voc[0],voc[1], voc[2], voc[3], voc[4]);
	
}
