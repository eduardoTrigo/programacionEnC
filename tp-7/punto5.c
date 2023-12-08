#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 15
#define TIRO 350

void cargarTiros(int *puntos, int tiros);
void mostrarTiros(int *puntos, int tiros);
float calcularGanancia(int *puntos, int tiros, float *perdida);

int main(){
    int tiros , *p_puntos;
    float perdida,*p_perdida;

    printf("ingrese cantdad de tiros:\n");
    scanf("%d", &tiros);

    p_puntos = (int *)malloc( tiros * sizeof(int));
    p_perdida = &perdida;

    // perdida = -(tiros * 350);

    srand(time(NULL));
    cargarTiros(p_puntos, tiros);
    mostrarTiros(p_puntos, tiros);
    perdida = calcularGanancia(p_puntos, tiros, p_perdida);

    printf("\nperdida: %.2f" , *p_perdida);

    free(p_puntos);
    return 0;
}

void cargarTiros(int *puntos, int tiros){
    int lugarTiro;
    int *aux = puntos;
    for (int i = 0; i < tiros; i++)
    {
        *aux = rand() % 10 + 1;
        aux++ ;
    }
}

float calcularGanancia(int *puntos, int tiros, float *perdida){
    int *aux_punt = puntos;
    *perdida = -(tiros * 350);
    for (int i = 0; i < tiros; i++)
    {
        switch (*aux_punt)
        {
        case 1:
        case 2:
            *perdida -= 100;
            break;
        case 3:
        case 4:
        case 5:
        case 6:
            *perdida = *perdida;
            break;
        case 7:
            *perdida += 300;
            break;
        case 8:
            *perdida += 350;
            break;
        case 9:
            *perdida += 850;
            break;
        case 10:
            *perdida += 1000;
            break;
        
        default:
            break;
        }
        aux_punt++;
    }
    return *perdida;

}

void mostrarTiros(int *puntos, int tiros){
    int *aux = puntos;
    for (int i = 0; i < tiros; i++)
    {
        printf("Tiro n° %d :%d\n",i +1, *aux);
        aux++;
    }
    
}