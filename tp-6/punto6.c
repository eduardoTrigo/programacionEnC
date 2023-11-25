#include <stdio.h>
#define TAMA 10
int main(){
    char mapa[TAMA][TAMA], ubicacion[TAMA][TAMA];

    //creo mapa muestra
    for (int i = 0; i < TAMA; i++)
    {
        for (int j = 0; j < TAMA; j++)
        {
            mapa[i][j] = 'x';
        }
    }
    //muestro el mapa
    for (int i = 0; i < TAMA; i++)
    {
        for (int j = 0; j < TAMA; j++)
        {
            printf("%c\t", mapa[i][j]);
        }
        printf("\n");
    }
    
    for (size_t i = 0; i < count; i++)
    {
        /* code */
    }
    

    return 0;
}