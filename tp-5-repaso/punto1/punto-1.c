#include <stdio.h>

void invertirNumero(int num);

int main()
{
    int repetir = 1, num;
    while (repetir == 1)
    {
        printf("ingrese un numero positivo mayor a cero:\n");
        scanf("%d", &num);

        while (num < 0)
        {
            printf("ingrese un numero positivo mayor a cero:\n");
            scanf("%d", &num);
        }

        invertirNumero(num);
        fflush(stdin);
        printf("desea ingresar otro numero?\n");
        printf("1: SI \t 0:NO \n");
        scanf("%d", &repetir);
    }
}

void invertirNumero(int num)
{
    int numAux, numInv, impares = 0;
    while (num > 0)
    {
        numAux = num % 10;
        if ((numAux % 2) != 0)
        {
            impares += 1;
        }
        numInv = numAux + numInv * 10;
        num = num / 10;
    }
    printf("El numero invertido es: %d\n", numInv);
    printf("cantidad de impares: %d\n", impares);
}