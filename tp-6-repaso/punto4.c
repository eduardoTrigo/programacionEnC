#include <stdio.h>

int main(){
    int fcMatriz, num;
    printf("ingrese numero de filas y columnas de la matris cuadrada.\n");
    scanf("%d", &fcMatriz);
    int matrizA[fcMatriz][fcMatriz], matrizB[fcMatriz][fcMatriz], matrizSuma[fcMatriz][fcMatriz];

    for (int i = 0; i < fcMatriz; i++)
    {
        for (int j = 0; j < fcMatriz; j++)
        {
            printf("ingrese un numero de la fila[%d] columna[%d] de la matriz A:\n", i , j);
            scanf("%d",&num);
            matrizA[i][j] = num;
        }
    }

    for (int i = 0; i < fcMatriz; i++)
    {
        for (int j = 0; j < fcMatriz; j++)
        {
            printf("ingrese un numero de la fila[%d] columna[%d] de la matriz B:\n", i , j);
            scanf("%d",&num);
            matrizB[i][j] = num;
        }
    }

    for (int i = 0; i < fcMatriz; i++)
    {
        for (int j = 0; j < fcMatriz; j++)
        {
            matrizSuma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
    
    for (int i = 0; i < fcMatriz; i++)
    {
        for (int j = 0; j < fcMatriz; j++)
        {
            printf("%d\t",matrizSuma[i][j]);
        }
        printf("\n");
    }
    return 0;
}