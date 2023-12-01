#include <stdio.h>
#include <stdlib.h>

int main(){
    int *puntero, tama;

    printf("ingrese el tamaño del arreglo");
    scanf("%d",&tama);

    puntero = (int *)malloc(tama * sizeof(int));

    for (int i = 0; i < tama; i++)
    {
        printf("ingrese un elemento: \n");
        scanf("%d", &puntero[i]);
    }

    for (int i = 0; i < tama; i++)
    {
        printf("%d", *puntero);
        puntero++;
    }
    puntero-=tama;
    free(puntero);
}