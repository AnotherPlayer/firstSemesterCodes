/*
Ingresar por teclado un texto, el final del mismo se dará con EOF. Con 4 opciones

1-CARÁCTER, ingrese un carácter, reemplace los espacios en blanco por el mismo y muestre el nuevo texto.
2-COMA, elimine todas las comas y muestre el nuevo texto.
3-LETRA, ingrese una letra, cuente todas las palabras del texto que empiezan con la misma y
        muestre apropiadamente el resultado obtenido
4-FIN, finalice el programa.
Nota: El texto se ingresa una única vez, la opción 2 debe ejecutarse sólo una vez y
las opciones 1 y 3 deben poder ejecutarse todas las veces que se considere necesario.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define Max_size 100

void caracter(char word[]);
void coma(char word[]);
void letra(char word[]);
void opciones(char text[]);

int main(){

    FILE *fichero;
    char text[100];
    char c;
    int i;

    //Terminar con EOF la letura
    //Cambiar la comparacion si no es posible seguir con EOF

    //fichero = fopen("Prueba.txt", "wt");

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

    fclose(fichero);

    opciones(text);

}


void opciones(FILE *fichero){

    char opt = '1';

    printf("Seleccione una opcion:\n1.-CARACTER\n2.COMA\n3.LETRA\n4.FIN\n");
    opt = getchar();

    if( opt > 48 && opt < 53){

        switch (opt){
        case '1':
            caracter(text);
            break;

        case '2':
            coma(text);
            break;
        
        case '3':
            letra(text);
            break;

        case 4:
        
        default:
            break;
        }

    }


}


// 1-CARÁCTER, ingrese un carácter, reemplace los espacios en blanco por el mismo y muestre el nuevo texto.

void caracter(char word[]){

    int i;
    char l;
    printf("\nEscriba una letra: ");
    fflush(stdin);
    scanf("%c",&l);
    fflush(stdin);

    i=0;

        while(word[i] != EOF){    //Cambiar espacio por letra

        if(isspace((word[i]))){

            word[i] = l;
            
        }

        i++;

    

    printf("\n%s",word);

    }

}

// 2-COMA, elimine todas las comas y muestre el nuevo texto.

void coma(char word[]){  //Quitar comas

    int i, j;
    char new_W[Max_size];

    i=j=0;
    while(word[i] != EOF){    //Quitar comas    //No considera 'EOF'

        if(word[i] != ','){

            new_W[j] = word[i];
            printf("%c",new_W[j]);
            j++;

        }

        i++;

    }

    printf("Nuevo texto:\n%s",word);
    
}

// 3-LETRA, ingrese una letra, cuente todas las palabras del texto que empiezan con la misma y
// muestre apropiadamente el resultado obtenido

void letra(char word[]){    //Filtrar palabras que empizan con la misma letra

    char l;
    int i;

    printf("Escriba una letra: ");
    scanf("%s",&l);

    while(word[i] != EOF){

        if(i == 0 && word[i] == l){

            while (word[i] != ' '){
                printf("%c",word[i]);
                i++;
            }
        }

        if(word[i] == l && word[i-1] == ' '){
            
            while (word[i] != ' '){
                printf("%c",word[i]);
                i++;
            }
        }

        i++;

    }

}