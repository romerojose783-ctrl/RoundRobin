// Cabeceras
#include <pthread.h>
//Fin Cabeceras

//Variables Globales
typedef struct 
{
    int id;
    int tiempoLlegada;
    int tiempoTotal;
    int tiempoRestante;
    int estado; // Aqui guardaremos si el estado esta listom 1, ejecutando 2, terminado 0;
}Procesos;

//Fin Variables Globales

//Firmas

//Fin Firmas

// Metodos
int main (){
    int N = 5;

    Procesos procesos[N]; //Arreglo de estructura de procesos
    pthread_t hilos[N];  //Arreglo de hilos


}

void inicializarProcesos(Procesos pro[], int N){
    for(int i = 100; i < 100 + N; i++){
        pro[i].id = i;
        pro[i].tiempoLlegada;
        pro[i].tiempoTotal;
        pro[i].tiempoRestante;
        pro[i].estado;
    }
}

//Fin Metodos