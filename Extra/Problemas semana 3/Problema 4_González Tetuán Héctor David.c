/*Suponga que se tiene un conjunto de calificaiones de un grupo de 40 alumnos
  Realizar un algoritmo para calcular la calificacion media y la calificacion más baja de todo el grupo
*/

#include<stdio.h>

int main(){

//Arreglo de numeros enteros con 40 espacios reservados(int num[40]) para guardar calificaciones
//Variable "prom" para guardar la suma de las calificaciones
//Variable "promf" para guardar promedio
    int num[40], i, j, aux, prom = 0;
    float promf;

printf("Digite 40 calificaciones::\n");

    for(i=0; i<40; i++){
    
//Leer un numero por cada repetición(longuitud de arreglo)    
    scanf("%d",&num[i]);
    
}

//Utilizar el metodo de burbuja para organizar los valores del arreglo "num" de menor a mayor
for (i=1; i<40; i++){

        for (j=0 ; j<40 - 1; j++)

            if (num[j] > num[j+1]){

                aux = num[j];
                num[j] = num[j+1];
                num[j+1] = aux;

            }
            
    }

for (i=0; i<40; i++){

//Sumar los valor de cada posicion del arreglo "num" y guardarlo en la variable "prom"
    prom += num[i];

}

//Guardar promedio en la variable "promf"
promf = prom / 40;

printf("El promedio de las calificaciones es de: %f\n",promf);
printf("La calificaion mas baja es de: %d",num[0]);
          
}