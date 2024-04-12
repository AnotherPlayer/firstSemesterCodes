/*

#include <stdio.h>
#include <stdlib.h>

#define Max_size 100

int main(){

    char texto[Max_size], l;
    char name[] = "Random.txt";
    int i;
    FILE *pF;

    //Terminar con 'EOF' la lectura de datos

    i=0;
    pF = fopen( name, "w");

    if(pF)
        printf("Archivo %s abierto correctamente\n",name);
    
    printf("Escriba un texto: ");

    



}

*/

#include <stdio.h>
#include<stdlib.h>

int main() {

    FILE* fichero;
    int i;
    char text[100];
    char c,l;

    fichero = fopen("Prueba.txt", "wt");

    i=0;
    printf("Escriba un texto: ");
    while( ((c = getchar()) != 48) && i < 100 ){

        text[i] = c;
        i++;
        
    }

    printf("\n%s\n",text);
    

    if(fichero){
        printf("Archivo abierto correctamente\n");

        fputs(text,fichero);
    }

    if(!fichero){
        printf("El archivo no se pudo abrir.");
    }

    puts("\n\nAlcanzado el final del fichero\nEscriba algo:"); 

    l = getchar();

    printf("%c",l);

    fclose(fichero);

    return 0;
}