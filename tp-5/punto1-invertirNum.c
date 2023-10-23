#include <stdio.h>
void invertir(int num);

int main(){
    int num;
    printf("ingrese un numero\n");
    scanf("%d", &num);
    invertir(num);   

    return 0;
}


void invertir(int num){
    int numInv, impares=0, numAux;
    while (num > 0)
    {
        numAux = num % 10;
        if ((numAux % 2)!=0)
        {
            impares += 1; 
        }
        num = num / 10;
        numInv = numAux + numInv*10;
    }
    printf("Numero Invertido: %d - cantidad de digitos impares: %d\n", numInv, impares);
}
