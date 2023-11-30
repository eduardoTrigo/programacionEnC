#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMA 15
#define MAX 350
#define MIN 10


void cargarArreglo(int arreglo[], int tama, int min, int max);
void mostrarArreglo(int arreglo[], int tama);
int buscarMayor(int arreglo[],int tama );
void mostrarPromedio(int arreglo[], int tama);

int main(){
    int  arreglo[TAMA];
    int mayor;
    srand(time(NULL));
    cargarArreglo(arreglo, TAMA, MIN, MAX);
    mostrarArreglo(arreglo, TAMA);

    mayor = buscarMayor(arreglo, TAMA);
    printf("el mayor numero del arreglo es: %d\n", mayor);

    mostrarPromedio(arreglo, TAMA);

    for (int i = 0; i < TAMA; i++)
    {
        if (arreglo[i]>299)
        {
            int reemplazo;
            printf("ingrese un numero entre 0 y 299 para reemplazar en arreglo[%d]", i);
            scanf("%d", &reemplazo);
            arreglo[i]=reemplazo;
        }
    }
    printf("arreglo modificado:\n");
    mostrarArreglo(arreglo, TAMA);

    return 0;
}

void cargarArreglo(int arreglo[], int tama, int min, int max){
    for (int i = 0; i < tama; i++)
    {
        arreglo[i] = rand()%(max - min) + min + 1;
    }
}

void mostrarArreglo(int arreglo[], int tama){
    for (int i = 0; i < tama; i++)
    {
        printf("arreglo[%d]: %d\n", i , arreglo[i]);
    }
}

int buscarMayor(int arreglo[], int tama){
    int mayor=0;
    for (int i = 0; i < tama; i++)
    {
        if (arreglo[i]>mayor)
        {
            mayor = arreglo[i];
        }
    }
    return(mayor);
}

void mostrarPromedio(int arreglo[], int tama){
    int prom, aux=0;
    for (int i = 0; i < tama; i++)
    {
        aux += arreglo[i];
    }
    prom = aux / tama;
    printf("el promedio de los numeros que contiene el arreglo es: %d\n", prom);
}