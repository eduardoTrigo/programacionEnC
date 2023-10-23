#include <stdio.h>
#include <ctype.h>

char mostrarPrimerCaracter(char cadena);
int esVocal(char cadena);

    int main()
{
    char cadena, anterior = ' ';
    int vocales, numeros;

    printf("ingrese una frase con MF '.'");
    scanf("%c", &cadena);

    while (cadena != '.')
    {
        if (isalpha(cadena))
        {
            vocales += esVocal(cadena);
            switch (cadena)
            {
            case 'a':
            case 'A':
                cadena = '@';
                break;
            case 'o':
            case 'O':
                cadena = '#';
                break;
            default:
                break;
            }
        }
        else if (isdigit(cadena))
        {
            numeros += 1;
        }
        if (isalpha(cadena) && anterior == ' ')
        {
            if (islower(cadena))
            {
                cadena = toupper(cadena);
            }else if (isupper(cadena))
            {
                cadena = tolower(cadena);
            }           
        }

        mostrarPrimerCaracter(cadena);
        anterior = cadena;
        scanf("%c",&cadena);
    }
    printf("\nCantidad de vocales: %d - cantidad de numeros: %d", vocales, numeros);
    return 0;
}

char mostrarPrimerCaracter(char cadena)
{
    printf("%c", cadena);
}

int esVocal(char cadena)
{
    int valor = 0;
    switch (cadena)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        valor = 1;
        break;

    default:
        valor = 0;
        break;
    }

    return(valor);
}