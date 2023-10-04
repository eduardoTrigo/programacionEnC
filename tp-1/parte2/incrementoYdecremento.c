#include <stdio.h>


int main(){
    int incremento, decremento;
    printf("ingrese incremento");
    scanf("%d\n", &incremento );
    printf("ingrese decremento");
    scanf("%d\n", &decremento );
    incremento += 1;
    decremento -= 1;
    
    printf("incremento: %f\n", incremento);
    printf("decremento: %f\n", decremento);
    return 0;
}