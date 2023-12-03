#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 15

int main()
{
    char palabra1[MAX], resultado[MAX], letra;
    int intentos = 3, aciertos = 0, encontrado;

    printf("ingrese una palabra:\n");
    fgets(palabra1,MAX,stdin);

    palabra1[strcspn(palabra1, "\n")] = '\0'; // Eliminar el salto de línea al final
    int tamaPal1 = strlen(palabra1);

    for (int i = 0; i < tamaPal1; i++)
    {
        resultado[i] = '-';
    }

    puts(resultado);

    do
    {
        printf("ingrese una letra:\n");
        fflush(stdin);
        scanf("%c", &letra);

        encontrado = 0;

        for (int i = 0; i < tamaPal1; i++)
        {
            if (letra == palabra1[i])
            {
                resultado[i] = letra;
                aciertos += 1;
                encontrado = 1;
            }
        }
        if (encontrado == 0)
        {
            intentos--;
        }

        puts(resultado);        
    } while (intentos != 0 && aciertos != tamaPal1);

    if (intentos == 0)
    {
        printf("no lograste encontrar la palabra");
    }
    else
    {
        printf("ganaste");
    }
    
    return 0;
}