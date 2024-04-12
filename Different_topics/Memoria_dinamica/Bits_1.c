//Desplazamiento de bits

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char letra = 'a';
	int i;
	
	for(i=7; i>=0 ; i--){
		
		if(letra&(1<<i	)){
			printf("1");
		}
		else{
			printf("0");
		}
		
	}
	
}
