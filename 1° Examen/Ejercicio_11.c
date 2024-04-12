
#include<stdio.h>

struct enterocorto{
	
	unsigned short a:4;
	unsigned short b:4;
	unsigned short c:4;
	unsigned short d:4;
	
}x;

int main(void){
	
	//struct enterocorto x;
	int i=0;

	for(; i<11 ; i++){

		printf("%d ",i);
		scanf("%i",(int*)&x);

		printf("%c%c%c%c\n",
				(x.d%10)+((x.d/10)?'A':'0'),
				(x.c%10)+((x.c/10)?'A':'0'),
				(x.b%10)+((x.b/10)?'A':'0'),
				(x.a%10)+((x.a/10)?'A':'0')
				);
	
	}
	
}