/*
Ingresar un texto de caracteres utilizando la funci�n getchar( ).
Indicar la cantidad de caracteres, palabras, y l�neas que lo forman. Mostrar lo pedido con carteles aclaratorios.
Considerar como separadores de palabras v�lidos:
espacio, tabulador y enter y tener en cuenta que contar palabras no es contar cantidad de separadores.
El texto ingresado podr� contener cualquier tipo de caracteres, incluido el enter.
*/

#include<stdio.h>
#include<stdlib.h>

void main(){
	
	
	int letras=0,pal=0,espacios=0,tab=0,enter=0;
	char c;
	
	while( (c = getchar()) != '_'){

		if(c == ' ' || c == '\t' || c == '\n'){

			pal++;

			if(c == '\n'){
				enter++;
			}
			if(c == '\t'){
				tab++;
			}
			if(c == ' '){
				espacios++;
			}

		}

		else{
			letras++;
		}

	}

	printf("Letras: %d, Palbras: %d, Espacios: %d, Tabuladores: %d, Enter: %d",letras,pal,espacios,tab,enter);

}
