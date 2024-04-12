#include <stdio.h>
	int main( void )
	{
		int a=1;
		void change(int);  /* función interna a main */
		printf("a= %d\n",a);   /* se imprime 1 */

		change(a);
		printf("a= %d\n",a);    /* se impime ?? */

		return 0;
        
    }

void change( int a){
		a = 100;
	}