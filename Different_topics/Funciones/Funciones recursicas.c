#include <stdio.h>
#include <stdlib.h>

int suma(int num[], int leng){
	
	if(!leng){
		return 0;
	}
	
	return num[leng-1] + suma(num,leng-1);
	
}

int main(){
	
	int arr[5] = {1,2,3,4,5};
	int result = suma(arr,sizeof(arr)/4);
	
	printf("Resultado suma = %d",result);
	
}
