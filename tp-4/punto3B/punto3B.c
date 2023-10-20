#include <stdio.h>

int main()
{
    char cc;
    int mayor = 0, menor = 0, cont = 0;

    printf("ingrese una oracion con marca final '.'");
    fflush(stdin);
    scanf("%c", &cc);
    while (cc != '.')
    {
        while (cc != ' ' && cc!='.' )
        {
            cont += 1;
            scanf("%c", &cc);
        }

        if (menor == 0 || cont < menor)
        {
            menor = cont;
        }

        if (cont > mayor)
        {
            mayor = cont;
        }
        
        if (cc == ' ')
        {
            cont = 0;
            scanf("%c", &cc);
        }
    }
    printf("Mayor tamaño de palabra: %d", mayor);
    printf("Menor tamaño de palabra: %d", menor);
    return 0;
}