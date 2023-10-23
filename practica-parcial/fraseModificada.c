#include <stdio.h>
#include <ctype.h>

int esVocal(char cadena);
char mostrarPrimerCaracter(char cadena);

int main()
{
    char cadena, anterior = ' ';
    int digitos = 0, vocales = 0;

    printf("ingrese una frase terminada en '.'\n");
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
                cadena = cadena;
                break;
            }
        }
        else if (isdigit(cadena))
        {
            digitos += 1;
        }
        if (islower(cadena) && anterior == ' ')
        {
            cadena = toupper(cadena);
        }
        else if (isupper(cadena) && anterior == ' ')
        {
            cadena = tolower(cadena);
        }
        mostrarPrimerCaracter(cadena);
        anterior = cadena;
        scanf("%c", &cadena);
    }
    printf("\ncantidad de vocales: %d - cantidad de digitos: %d", vocales, digitos);
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
        break;
    }

    return(valor);
}