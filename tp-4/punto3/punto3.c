#include <stdio.h>

int main()
{
    char cc, ant = ' ';
    int mayor = 0, menor = 0, cont = 0, esPalabra;

    printf("ingrese una oracion con marca final '.'");
    fflush(stdin);
    scanf("%c", &cc);
    while (cc != '.')
    {
        if (ant == ' ' && cc != ' ')
        {
            esPalabra = 0;
            while (esPalabra == 0)
            {
                cont += 1;
                ant = cc;
                scanf("%c", &cc);
                if (cc == ' ' || cc == '.')
                {
                    esPalabra = 1;
                    if (cont > mayor)
                    {
                        mayor = cont;
                    }
                    if (cont < menor)
                    {
                        menor = cont;
                    }
                    cont = 0;
                }
            }
            if (cc != '.')
            {
                ant = cc;
                scanf("%c", &cc);
            }
        }
    }
    printf("%d", mayor);
    printf("%d", menor);
    return 0;
}