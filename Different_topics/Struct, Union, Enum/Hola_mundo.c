#include<stdio.h>

int main(int argc, char **argv)
{
    char cadena2[]="Hundo";
    char cadena1[]="Hola";
	printf("%s\n%s\n",cadena1,cadena2);
    cadena1[4]=' ';
    cadena1[5]='M';
	printf("%s\n%s\n",cadena1,cadena2);
	return 0;
}
