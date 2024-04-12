//Decir cual será la salida de los siguientes programas.

#include<stdio.h>
#include<string.h>

int main(){

    int opt;
    char cad1[ ]= "Examen", cad2[ ]= "Parcial", cadena[20];

    //Imprime ---> laicrap
    //             6

    printf("\nPrimer inciso\n");

    printf("%s\n",strrev(cad2));
    printf("%d",strlen(cad1));
            
    //Imprime ---> 2,123 ,89 ,5
    //             2

    printf("\nSegundo inciso\n");

    strcpy(cadena, "5, 89, 123,2");
    strrev(cadena);
    printf ("%s \n", cadena);
    printf ("%c \n", *cadena);

}