#include <stdio.h>

int main()
{
    char cc, ant = ' ';
    int cantPalabras = 0;
    printf("ingrese una frase terminada en .\n");
    fflush(stdin);
    scanf("%c", &cc);
    while (cc != '.')
    {
        if (ant == ' ' && cc != ' ')
        {
            int esPalabra = 0;
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
                    ant = cc;
                    scanf("%c", &cc);
                    break;
                default:
                    ant = cc;
                    scanf("%c", &cc);
                    break;
                }
            }
        }
        if (cc != '.' && ant != '.')
        {
            ant = cc;
            scanf("%c", &cc);
        }
    }

    printf("cantidad de palabras con vocales abiertas:%d", cantPalabras);

    return 0;
}
