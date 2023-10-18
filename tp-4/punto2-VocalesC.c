#include <stdio.h>

int main()
{
    char cc, ant = ' ';
    int cantPalabras = 0, esPalabra;
    printf("ingrese una frase terminada en .\n");
    fflush(stdin);
    scanf("%c", &cc);
    while (cc != '.')
    {
        if (ant == ' ' && cc != ' ')
        {
            esPalabra = 0;
            while (esPalabra == 0)
            {
                /* code */
                switch (cc)
                {
                case 'a':
                case 'A':
                case 'e':
                case 'E':
                case 'o':
                case 'O':
                    cantPalabras = cantPalabras + 1;
                    esPalabra = 1;

                    break;
                default:

                    break;
                }
                ant = cc;
                scanf("%c", &cc);
            }
        }
        if (cc != '.' )
        {
            ant = cc;
            scanf("%c", &cc);
        }
    }

    printf("cantidad de palabras con vocales abiertas:%d", cantPalabras);

    return 0;
}
