#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char palabra[20], guiones[20], letra;
    int longitud, aciertos = 0, intentos = 3;

    printf("ingrese una palabra:\n");
    fgets(palabra, 20, stdin);

    palabra[strcspn(palabra, "\n")] = '\0'; // reemplaza el salto de linea con el carater nulo

    longitud = strlen(palabra);

    for (int i = 0; i < longitud; i++)
    {
        guiones[i] = '-';
    }
    puts(guiones);
    printf("longitud:%d\n", longitud);

    do
    {
        printf("ingrese una letra:\n");
        fflush(stdin);
        scanf("%c", &letra);

        int encontrado = 0;

        for (int i = 0; i < longitud; i++)
        {
            if (palabra[i] == letra)
            {
                guiones[i] = letra;
                aciertos += 1;
                encontrado = 1;
            }
        }
        if (encontrado == 0 )
        {
            intentos --;
            printf("la palabra no contiene la letra: %c , %d\n", letra,intentos);
        }
        

        puts(guiones);
    } while (aciertos != longitud && intentos != 0);

    if (aciertos == 0)
    {
        printf("te quedaste sin intentos");
    }
    else
    {
        printf("Ganaste");
    }
    return 0;
}