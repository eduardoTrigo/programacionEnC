#include <stdio.h>
#include <stdlib.h>

int main(){
    int *puntero, tama;

    printf("ingrese el tamaño del arreglo:\n") ;
    scanf("%d", &tama);

    puntero = (int *)malloc(tama * sizeof(int));
    int *puntAux = puntero;

    for (int i = 0; i < tama; i++)
    {
        printf("ingrese un elemento:\n");
        scanf("%d", &puntero[i]);
    }
    
    printf("contenido del arreglo:\n");
    for (int i = 0; i < tama; i++)
    {
        printf("%d", puntAux);
        puntAux++;
    }
    free(puntero);
    return 0;
}