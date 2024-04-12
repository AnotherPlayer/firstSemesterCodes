#include <stdio.h>
#include <string.h>

///*
int main(){

    char cadena[] = "Hola,mundo",
    delimitador[] = ",";
    char *token = strtok(cadena, delimitador);

    while(token != NULL){
        printf("Encontramos un token: %s\n", token+0);
        token = strtok(NULL, delimitador);
    }

}
//*/

/*
int main (void){
  
  char str[] ="- esta es,una cadena simple.";
  char * pch;

  printf ("Separando cadena \"%s\" en palabras:\n",str);
  pch = strtok (str," ,.-\n");

  while (pch != NULL){
    printf ("%s\n",pch);
    pch = strtok (NULL, " ,.-");
  }

  return 0;
}
//*/