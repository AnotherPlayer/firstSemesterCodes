#include<stdio.h>
#include<stdlib.h>

void main(){
    
	char n;
	int *b, numb=0, i;

    b = (int*)malloc(sizeof(int));

	printf("\n Dame un caracter: ");
	scanf("%c",&n);
	
    i = n;

	while(i>0){
		
        b[numb]=i%2;
		i/=2;
		++numb;

	}
	
	printf("\nTu numero en binario es: ");
	
	for(int j=numb-1;j>=0;--j){

	printf("%d",b[j]);

	}
	
	free(b);

	getch();
	
}  