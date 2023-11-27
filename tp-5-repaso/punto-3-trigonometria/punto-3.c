#include <stdio.h>
#include <math.h>

int esRectangulo(float ladoA, float ladoB, float ladoC);
void gradosRadianes( float ladoA, float ladoB, float ladoC, int eleccion);

int main(){
    float ladoA, ladoB, ladoC;
    int eleccion;
    printf("ingrese lado A: \n");
    scanf("%f", &ladoA);
    printf("ingrese lado B: \n");
    scanf("%f", &ladoB);
    printf("ingrese lado C: \n");
    scanf("%f", &ladoC);

    if (esRectangulo(ladoA, ladoB, ladoC) == 0)
    {
        printf("elija el augulo que desea conocer:\n");
        printf("1: A\n2: B\n3: C\n");
        scanf("%d",&eleccion);
        gradosRadianes(ladoA, ladoB, ladoC, eleccion);
    }else{
        printf("triangulo rectangulo");
    }
    return 0;
}

int esRectangulo(float ladoA, float ladoB, float ladoC){
    int valor=0;
    if (pow(ladoA,2)+pow(ladoB,2)==pow(ladoC,2) ||
        pow(ladoA,2)+pow(ladoC,2)==pow(ladoB,2) ||
        pow(ladoB,2)+pow(ladoC,2)==pow(ladoA,2))
    {
        valor = 1;
    }
    return(valor);
}

void gradosRadianes(float ladoA, float ladoB, float ladoC, int eleccion){
    float angulo, grados;
        switch (eleccion)
        {
        case 1:
            angulo = acos((pow(ladoA,2)-pow(ladoB,2)-pow(ladoC,2))/(-2*ladoB*ladoC));
            grados = angulo * 180 / M_PI;
            printf(" angulo A --> Radianes: %.2f | Grados : %.2f °\n", angulo , grados);
            break;
        case 2:
            angulo = acos((pow(ladoB,2)-pow(ladoA,2)-pow(ladoC,2))/(-2*ladoA*ladoC));
            grados = angulo * 180 / M_PI;
            printf(" angulo B --> Radianes: %.2f | Grados : %.2f °\n", angulo , grados);
            break;
        case 3:
            angulo = acos((pow(ladoC,2)-pow(ladoA,2)-pow(ladoB,2))/(-2*ladoA*ladoB));
            grados = angulo * 180 / M_PI;
            printf(" angulo C --> Radianes: %.2f | Grados : %.2f °\n", angulo , grados);
            break;
        default:
            break;
        }

}