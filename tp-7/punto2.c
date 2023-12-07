#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int *puntero1, capacidad = 0, num, longitud = 0;
    puntero1 = (int *)malloc(capacidad * sizeof(int));
    printf("ingrese enteros (0 para finalizar): \n");
    scanf("%d", &num);

    while (num != 0)
    {
        if (longitud >= capacidad)
        {
            capacidad += 1;
            int *puntero2 = (int *)realloc(puntero1, capacidad * (sizeof(int)));
            puntero1 = puntero2;
        }
        puntero1[longitud] = num;
        longitud++;

        scanf("%d", &num);
    }

    // int tama = strlen(puntero1)
    printf("elementos del arreglo:\n");
    for (int i = 0; i < longitud; i++)
    {
        printf("%d\t", puntero1[i]);
    }
    // free(puntero1);
    printf("\n");

    int mayorSuma = 0;
    int *salida = (int *)malloc(4 * sizeof(int));

    for (int i = 0; i < longitud; i++)
    {
        int suma = puntero1[i] + puntero1[i + 1];
        if (suma > mayorSuma)
        {
            mayorSuma = suma;
            salida[0] = puntero1[i];
            salida[1] = puntero1[i + 1];
            salida[2] = i;
            salida[3] = i + 1;
            salida[4] = mayorSuma;
        }
    }
    printf("SALIDA:\n");
    for (int i = 0; i < longitud; i++)
    {
        printf("%d\t", salida[i]);
    }
    
    free(puntero1);
    // free(salida);
    return 0;
}