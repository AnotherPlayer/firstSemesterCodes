#include<stdio.h>

struct enterocorto{
	
	unsigned short a:4;
	unsigned short b:4;
	unsigned short c:4;
	unsigned short d:4;
	
}x;

void main2(){

    int i;

    for(; i<11 ; i++){

        printf("Entero: %ld, Estructura: %ld\n",sizeof(int), sizeof(x));
        scanf("%i",(int*)&x);

        printf("%c%c%c%c\n",
				(x.d%10)+((((x.d&6)!=0)&&(x.d&8)==8)?'A':'0'),
				(x.d%10)+((((x.d&6)!=0)&&(x.d&8)==8)?'A':'0'),
				(x.d%10)+((((x.d&6)!=0)&&(x.d&8)==8)?'A':'0'),
				(x.d%10)+((((x.d&6)!=0)&&(x.d&8)==8)?'A':'0')
				);

    }

}