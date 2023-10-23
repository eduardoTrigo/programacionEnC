#include <stdio.h>

void invertirNum(int num);

int main()
{
    int num;
    printf("ingrese un numero:\n");
    scanf("%d",&num);
    invertirNum(num);

    return 0;
}

void invertirNum(int num)
{
    int numAux, numInv=0, impares=0;

    while (num > 0)
    {
        numAux = num % 10;
        if (numAux % 2 != 0)
        {
           impares += 1; 
        }
        
        num = num / 10;
        numInv = numInv*10 + numAux;
    }
    printf("%d",numInv);
    printf("\ncantidad de digitos impares:%d", impares);
}
