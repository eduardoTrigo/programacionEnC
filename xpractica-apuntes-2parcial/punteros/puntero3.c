#include <stdio.h>
#include <stdlib.h>

 int main(){
    int *puntero, capacidad=5, longitud=0, numero;

    puntero = (int *)malloc(capacidad * sizeof(int));
    
    printf("ingrese numeros enteros (0 para finalizar):\n");
    scanf("%d", &numero);

    while (numero != 0)
    {
        if (longitud >= capacidad)
        {
            capacidad *= 2;
            int *nuevo_puntero=(int *)realloc(puntero, capacidad * sizeof(int));
            puntero = nuevo_puntero;
        }
        puntero[longitud]=numero;
        longitud++;

        printf("ingrese otro numero ( 0 para finalizar):\n");
        scanf("%d", &numero);
    }

    printf("elementos ingresados:\n");
    for (int i = 0; i < longitud; i++)
    {
        printf("%d\n", puntero[i]);
    }

    free(puntero);
    return 0;    
 }