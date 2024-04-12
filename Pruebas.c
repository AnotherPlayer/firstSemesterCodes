//Prueba de funciones

#include<stdio.h>

struct enterocorto{
	
	unsigned short a:4;
	unsigned short b:4;
	unsigned short c:4;
	unsigned short d:4;
	
}z;

void main(){

/*
    int num[10], n;
    char car[10];

//Prueba tamaño int y char
    printf("La longitud del arreglo 'int num' es: %ld\n",sizeof(num));
    printf("La longitud del arreglo 'char car' es: %ld\n",sizeof(car));
    printf("La longitud de la estructura 'enterocorto' es: %ld\n",sizeof(z));

*/

	struct enterocorto x;
	scanf("%i",(int*)&x);
	printf("%c ",x.d);
	printf("%c ",x.c);
	printf("%c ",x.b);
	printf("%c ",x.a);
	
	printf("\n");
	
	printf("%c%c%c%c\n",
				(x.d%10)+((x.d & 10)?'A':'0'),
				(x.c%10)+((x.c & 10)?'A':'0'),
				(x.b%10)+((x.b & 10)?'A':'0'),
				(x.a%10)+((x.a & 10)?'A':'0')
				);
	
/*
	printf("\n");
	
	scanf("%i",(int*)&n);
	printf("%i == %c",n, n);
	
*/

}
