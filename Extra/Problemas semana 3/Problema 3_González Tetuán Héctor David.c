//Leer 15 numeros negatvos y convertirlos en positivos e imprimir la suma de dichos numeros

#include <stdio.h>

int main()
{
    
//Arreglo de numeros enteros con 15 espacios reservados(int x[15]) para almacenar los numeros negativos
//Variable aux para guardar la suma de los numeros    
    int x[15];
    int i,aux = 0;
    
    printf("Digite 15 numeros negatios\n");

for(i=0;i<15;i++){
    
//Leer un numero  negativo por cada repetición(longuitud de arreglo)
    scanf("%d",&x[i]);
    
}

for(i=0;i<15;i++){

//Sumar cada posicion del arreglo "x" con la variable "aux"    
    aux += x[i];
    printf("\nN[%d]:%d",i,aux);
    
}

//Multiplicar la variable "aux" por -1 para devolver un valor positivo
printf("El resultado de los numeros en positivo es: %d",aux *= -1);

}
