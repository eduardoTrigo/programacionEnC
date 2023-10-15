#include <stdio.h>

int main()
{
    char cc;
    int cantPalabras = 0, pasaPalabra = 0;
    printf("ingrese una frase terminada en .\n");
    fflush(stdin);
    scanf("%c", &cc);
    while (cc != '.')
    {
        while (pasaPalabra == 0)
        {
            switch (cc)
            {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'o':
            case 'O':
                cantPalabras += 1;
                pasaPalabra = 1;
                break;
            default:
                break;
            }
            scanf("%c", &cc);
        }
       
            if (cc == ' ')
            {
                pasaPalabra = 0;
                scanf("%c", &cc);
            }
                
            if (cc != '.')
            {
                scanf("%c", &cc);
            }                
    }

    printf("cantidad de palabras con vocales abiertas:%d", cantPalabras);

    return 0;
}
