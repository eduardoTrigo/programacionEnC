#include <stdio.h>
#define TAMA 2
int main(){
    int matrizA[TAMA][TAMA], matrizB[TAMA][TAMA], matrizSuma[TAMA][TAMA];

    printf("ingrese valores de la matrizA:\n");
    for (int i = 0; i < TAMA; i++)
    {
        for (int j = 0; j < TAMA; j++)
        {
            int num=0;
            printf("\ningrese el componente matrizA[%d][%d]: ",i,j);
            scanf("%d",&num);
            matrizA[i][j]= num ;
        }
    }

    printf("ingrese valores de la matrizB:\n");
    for (int i = 0; i < TAMA; i++)
    {
        for (int j = 0; j < TAMA; j++)
        {
            int num=0;
            printf("\ningrese el componente matrizB[%d][%d]: ",i,j);
            scanf("%d",&num);
            matrizB[i][j]= num ;
        }
    }
    
    for (int i = 0; i < TAMA; i++)
    {
        for (int j = 0; j < TAMA; j++)
        {
            matrizSuma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
    

    printf("\nMatrizA:\n");
    for ( int i = 0; i < TAMA; i++)
    {
        for (int j = 0; j < TAMA; j++)
        {
            printf("%d\t", matrizA[i][j]);
        }
        printf("\n");
    }

    printf("\n   +\n");
    printf("\nMatrizB:\n");
    for (int i = 0; i < TAMA; i++)
    {
        for (int j = 0; j < TAMA; j++)
        {
            printf("%d\t", matrizB[i][j]);
        }
        printf("\n");
    }

    printf("\n   =\n");
    printf("\nMatrizB:\n");
    for (int i = 0; i < TAMA; i++)
    {
        for (int j = 0; j < TAMA; j++)
        {
            printf("%d\t", matrizSuma[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}