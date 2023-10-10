#include <stdio.h>

int main(){
    int num1, num2, numero1, numero2;

    printf("ingrese numero 1: ");
    scanf("%d",&num1);

    printf("ingrese numero 2: ");
    scanf("%d",&num2);

    numero1 = num2;
    numero2 = num1;

    printf("numero1: %d\n", numero1);
    printf("numero2: %d\n", numero2);
}