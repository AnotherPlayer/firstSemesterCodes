#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

#define NUM_THREADS 3

sem_t sem;

void* thread_func(void* arg) {
    int* id = (int*)arg;
    sleep(*id);	//Cada hilo espera una cantidad de segundos igual al numero de su ID
    		//Provocando que los hilos entren de manera ordenada en el uso del semaforo
    
    printf("Hilo %d iniciado\n", *id);
    sem_wait(&sem);  // Esperar hasta que se active el semáforo del hilo actual	
    printf("Hilo %d ejecutando\n", *id);//Zona critica del programa
	
    sem_post(&sem);  // Activar el semáforo para el siguiente hilo
    
    pthread_exit(NULL);
}

int main() {
    pthread_t tid[NUM_THREADS];//Se crea un arreglo de hilos y un arreglo de enteros
    int thread_id[NUM_THREADS];// para los identificadores de los hilos

    sem_init(&sem, 0, 0);  // Inicializar el semáforo de los hilos
    			   //Se establece el segundo argumento en cero debido a que se trabajaran 
    			   //con los hilos de un solo proceso

    for (int i = 0; i < NUM_THREADS; i++) {
        thread_id[i] = i;
        pthread_create(&tid[i], NULL, thread_func, &thread_id[i]);  // Crear los hilos
        if(i==0){sem_post(&sem);}	//Activar el semaforo para el primer hilo
    }
	
    

    for (int i = 0; i < NUM_THREADS; i++) {
    pthread_join(tid[i], NULL);  // Esperar a que terminen los hilos
    }
    
    sem_destroy(&sem);  // Destruir el semáforo
    return 0;
}