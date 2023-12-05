#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

void cargarArreglo(char arreglo[MAX][MAX], char arreglo2[MAX][MAX], int tama);
void mostrarArreglo(char arreglo[MAX][MAX], int tama);

int main()
{
    char mapaTesoro[MAX][MAX], mapaIntentos[MAX][MAX];
    int fila, columna, distancia, intentos = 0, filaMapa, columnaMapa, encontrado = 0;

    cargarArreglo(mapaTesoro, mapaIntentos, MAX);
    srand(time(NULL));
    fila = rand() % 10;
    columna = rand() % 10;
    printf("%d\n", fila);
    printf("%d\n", columna);
    mapaTesoro[fila][columna] = 'X';

    do
    {
        intentos += 1;
        printf("ingrese un numero (del 0 al 9) de fila y columna :\n");
        printf("fila:");
        scanf("%d", &filaMapa);
        printf("fila:");
        scanf("%d", &columnaMapa);
        if (fila == filaMapa && columna == columnaMapa)
        {
            printf("Ganaste.\n");
            printf("intentos:%d \n", intentos);
            encontrado = 1;
            mostrarArreglo(mapaTesoro, MAX);
        }
        else
        {
            distancia = abs(abs(filaMapa - fila) - abs(columnaMapa - columna));
            printf("te encuentras a %d lugares.\n", distancia);
            mapaTesoro[filaMapa][columnaMapa] = 'O';
            mapaIntentos[filaMapa][columnaMapa] = 'O';
            mostrarArreglo(mapaIntentos, MAX);
        }
    } while (intentos < 5 && encontrado == 0);

    // mostrarArreglo(mapaTesoro, MAX);
    // printf("\n");
    // printf("\n");
    // mostrarArreglo(mapaIntentos, MAX);
    return 0;
}

void cargarArreglo(char arreglo[MAX][MAX], char arreglo2[MAX][MAX], int tama)
{
    for (int i = 0; i < tama; i++)
    {
        for (int j = 0; j < tama; j++)
        {
            arreglo[i][j] = '.';
            arreglo2[i][j] = '.';
        }
    }
}

void mostrarArreglo(char arreglo[MAX][MAX], int tama)
{
    for (int i = 0; i < tama; i++)
    {
        for (int j = 0; j < tama; j++)
        {
            printf("%c\t", arreglo[i][j]);
        }
        printf("\n");
    }
}