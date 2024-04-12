#include <stdio.h>

struct {
   unsigned short a:3;
} status0;

struct {
   unsigned short a:3;
   unsigned short b:9;
   unsigned short c:4;
} status1;

int main( ) {
    printf( "Memory size occupied by status0 : %ld\n", sizeof(status0));
    printf( "Memory size occupied by status1 : %ld\n", sizeof(status1));

   status1.a = 1;
   status1.b = 1;
   status1.c = 1;

   printf("El valor de status1.c es: %d\n", status1.c);
   printf("El valor de status1.c & 1 es: %d\n", status1.c & 1);

   return 0;

}
