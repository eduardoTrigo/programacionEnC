#include <stdio.h>
#include <stdlib.h>

int *cargarArregloDinamico(int tama);
int main(){
    int tama;
    printf("ingrese tamaño del arreglo:\n");
    scanf("%d", &tama);

    int *puntero = cargarArregloDinamico(tama);
    for (int i = 0; i < tama; i++)
    {
        puntero[i] = i * 2;
    }

    printf("elementos ingresados:\n");
    for (int i = 0; i < tama; i++)
    {
        printf("%d\t", puntero[i]);
    }
    
    free(puntero);

    return 0;
}

int *cargarArregloDinamico(int tama){
    int *punteroArreglo = (int *)malloc(tama * sizeof(int));
    return punteroArreglo;
}