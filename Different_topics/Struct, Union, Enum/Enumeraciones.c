#include <stdio.h>

/*
 Este programa muestra la definición, declaración y utilización
 de tipos enumerados en C, enumeraciones. Las enumeraciones adoptan
 valores internos desde 0 en adelante, salvo indicación expresa
 en contra.
*/

/*
 Una enumeración anónima.
*/

enum {rojizo, verdoso, azulado} una;

/*
 Un tipo enumerado
*/

enum arco_iris {rojo, anaranjado, amarillo, verde, azul, agnil, violeta};

/*
 Una variable de un tipo enumerado
*/

enum arco_iris p;

/*
 Una enumeración con cambios arbitrarios en los valores
*/

enum aleatoria { primero = -7, segundo, tercero, cuarto = 25, quinto, sexto } ale;


void main(void){

 printf("E N U M E R A C I O N E S");
 
 /*
  Manejo de enumeraciones anónimas
 */
 
 printf("\n\nEnumeración anónima, enum (rojizo, verdoso, azulado) una;");
 
 printf("\n\nEl tamaño de azulado es %d y su valor es %d", sizeof(azulado), azulado);
 
 una = verdoso;
 
 printf("\n\nEl tamaño de una (= verdoso) es %d y su valor es %d", sizeof(una), una);
 
 /*
  Manejo de tipos enumerados
 */

 printf("\n\nEnumeración con nombre arco_iris =\n");
 printf(" (rojo, anaranjado, amarillo, verde, azul, agnil, violeta).");
 printf("\n\nEl tamaño de verde es %d y su valor es %d", sizeof(rojo), verde);
 
 p = violeta;
 
 printf("\n\nEl tamaño de p (= violeta) es %d y su valor es %d", sizeof(p), p);
 
 printf("\n\nEl tipo enumerado aleatoria es asi:\n\n");
 printf("enum aleatoria { primero = -7, segundo, tercero, cuarto = 25, quinto, sexto } ale;\n");
 printf("\n\nValores adoptados por los elementos de ale:\n");
 printf("\n\nEl valor de primero es   %d\n", primero);
 printf("\nEl valor de segundo es   %d\n", segundo);
 printf("\nEl valor de tercero es   %d\n", tercero);
 printf("\nEl valor de cuarto es    %d\n", cuarto);
 printf("\nEl valor de quinto es    %d\n", quinto);
 printf("\nEl valor de sexto es     %d\n", sexto);
 printf("\n\nLas enumeraciones ocupan 1 byte, y admiten como máximo 256 elementos.\n");
 printf("Las enumeraciones no se pueden leer ni escribir directamente, y aumentan\n");
 printf("de uno en uno a partir del valor establecido para un elemento.\n");
 printf("\n\nTerminación normal del programa.\n");

    

}