#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cargarArreglo(int arreglo[], int tama, int min, int max);
void mostrarArreglo(int arreglo[], int tama);
int buscarMayor(int arreglo[], int tama);
void mostrarPromedio(int arreglo[], int tama);
void reemplazarNum(int arreglo[], int tama);

int main()
{
    int min = 10, max = 350, tama = 15, numMayor;
    int arreglo[tama];
    float prom;
    srand(time(NULL));
    cargarArreglo(arreglo, tama, min, max);
    printf("ARREGLO:\n");
    mostrarArreglo(arreglo, tama);
    numMayor = buscarMayor(arreglo, tama);
    printf("\nmayor numero en el arreglo: %d", numMayor);
    mostrarPromedio(arreglo, tama);
    reemplazarNum(arreglo , tama);
    printf("\nArreglo Corregido.:");
    mostrarArreglo(arreglo,tama);
    int impares;
    for (int i = 0; i < tama; i++)
    {
        if (arreglo[i] % 2 != 0)
        {
            arreglo[i] += 1; 
        }
    }
    printf("\narreglo sin impares:");
    mostrarArreglo(arreglo,tama);

    return 0;
}

void cargarArreglo(int arreglo[], int tama, int min, int max)
{

    for (int i = 0; i < tama; i++)
    {
        arreglo[i] = rand() % (max - min + 1) + min;
    }
}
void mostrarArreglo(int arreglo[], int tama)
{
    for (int i = 0; i < tama; i++)
    {
        printf("\nArreglo[%d] = %d", i, arreglo[i]);
    }
}
int buscarMayor(int arreglo[], int tama)
{
    int mayor = 0;
    for (int i = 0; i < tama; i++)
    {
        if (arreglo[i] > mayor)
        {
            mayor = arreglo[i];
        }
    }
    return mayor;
}
void mostrarPromedio(int arreglo[], int tama)
{
    int suma = 0;
    float promedio;
    for (int i = 0; i < tama; i++)
    {
        suma += arreglo[i];
    }
    promedio = suma / tama;
    printf("\npromedio: %.2f", promedio);
}
void reemplazarNum(int arreglo[], int tama){
    for ( int i = 0; i < tama; i++)
    {
        int numReemplazo;
        if (arreglo[i]>=300)
        {
            printf("\ningrese reemplazo del arreglo[%d].",i);
            scanf("%d",&numReemplazo);
            arreglo[i]=numReemplazo;
        }
    }
}