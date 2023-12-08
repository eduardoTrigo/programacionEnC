#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 15

void cargarNotas(float *notas, int alumn);
void mostrarNotas(float *notas, int alumn);
float promedio(float *notas, int alumn, float *promedio);
int main(){
    int numAlum;
    float *p_notas, *p_promedio;
    

    printf("ingrese un numero de alumnos");
    scanf("%d",&numAlum);
    
    p_notas = (float *)malloc(numAlum * sizeof(float));
    p_promedio = (float *)malloc(sizeof(float));

    srand(time(NULL));
    cargarNotas(p_notas, numAlum);
    mostrarNotas(p_notas, numAlum);
    promedio(p_notas, numAlum, p_promedio);
    printf("promedio: %.2f \n", *p_promedio);
}

void cargarNotas(float *notas, int alumn){
     float *aux = notas;
     for (int i = 0; i < alumn; i++)
     {
        *aux = (rand()% 900 + 100)/100.00;
        aux++;
     }
}

void mostrarNotas(float *notas, int numAlumn){
    float *aux = notas;
    for (int i = 0; i < numAlumn; i++)
    {
        printf("Nota alumno %d : %.2f\n", i + 1 , *aux);
        aux++;
    }
    
}

float promedio(float *notas, int alumn, float *promedio){
    float *aux = notas;
    float suma = 0;
    for (int i = 0; i < alumn; i++)
    {
        suma += *aux;
        aux++;
    }

    *promedio = suma / alumn;
    return *promedio;
};
