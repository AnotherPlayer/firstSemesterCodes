#include <stdio.h>

int main(){

    char opt;

    //FILE* fichero;
    char text[100];
    char c;
    int i;

    //Terminar con EOF la letura
    //Cambiar la comparacion si no es posible seguir con EOF

    //fichero = fopen("Prueba.txt", "wt");

    i=0;
    printf("Escriba un texto: ");
    while( ((c = getchar()) != 48) ){

        text[i] = c;
        i++;

        if(i == 99)
            break;

    }

    printf("Seleccione una opcion:\n1.-CARACTER\n2.COMA\n3.LETRA\n4.FIN\n");
    opt = getchar();

    if( opt > 48 && opt < 53){

        switch (opt){
        case '1':
            //caracter(text);
            puts("Buenas");
            break;

        case '2':
            //coma(text);
            puts("Que");
            break;
        
        case '3':
            //letra(text);
            puts("Hace");
            break;

        case 4:
        
        default:
            break;
        }

    }

}