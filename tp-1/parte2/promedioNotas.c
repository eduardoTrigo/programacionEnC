#include <stdio.h>

int main(){
    int lengua, ciencias, matematicas;
    float promedio;

    printf("ingrese nota de lengua\n");
    scanf("%d", &lengua);

    printf("ingrese nota de ciencias\n");
    scanf("%d", &ciencias);

    printf("ingrese nota de matematicas\n");
    scanf("%d", &matematicas);
    
    
    promedio = (lengua + ciencias + matematicas)/3;

    printf("promedio de notas anuales:%.2f", promedio);
}