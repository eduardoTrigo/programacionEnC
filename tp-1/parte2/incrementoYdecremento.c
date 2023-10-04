#include <stdio.h>


int main(){
    int incremento, decremento;
    printf("ingrese incremento: ");
    scanf("%d", &incremento );
    printf("ingrese decremento: ");
    scanf("%d", &decremento );
    incremento += 1;
    decremento -= 1;
    printf("incremento: %d\n", incremento);
    printf("decremento: %d\n", decremento);
    return 0;
}