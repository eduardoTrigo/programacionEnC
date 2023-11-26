#include <stdio.h>
void invertirNumero(int num);
int main()
{
    int reiniciar = 1 ;
    while (reiniciar == 1)
    {
        int num = 0;
        while (num <= 0)
        {
            printf("ingrese un numero positivo:\n");
            scanf("%d", &num);
        }
        invertirNumero(num);
        fflush(stdin);
        printf("desea un nuevo numero?\n1: SI\n0: NO\n");
        scanf("%d",&reiniciar);
    }

    return 0;
}

void invertirNumero(int num)
{
    int numInv, numAux, impares = 0;
    while (num > 0)
    {
        numAux = num % 10;
        if ((numAux % 2) != 0)
        {
            impares += 1;
        }
        num = num / 10;
        numInv = numAux + numInv * 10;
    }
    printf("numero Invertido: %d\n", numInv);
    printf("numeros impares : %d\n", impares);
}