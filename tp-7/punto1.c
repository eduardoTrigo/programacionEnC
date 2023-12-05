#include <stdio.h>
#include <ctype.h>
#include <string.h>

int esVocal(char *punt);

int main()
{
    char frase[100];
    char *puntFrase, *puntAux;
    int cantLetras = 0, vocales = 0, mayusculas = 0, minusculas = 0, longitud;
    int *p_letras, *p_vocales, *p_mayusculas, *p_minusculas;

    p_letras = &cantLetras;
    p_vocales = &vocales;
    p_mayusculas = &mayusculas;
    p_minusculas = &minusculas;

    printf("ingrese una frase terminada en punto.");
    fgets(frase, 100, stdin);
    longitud = strlen(frase);
    // puntFrase = &frase[0];
    puntFrase = frase;
    puntAux = puntFrase;
    while (*puntAux != '\0')
    {
        if (isalpha(*puntAux))
        {
            *p_letras += 1;
            if (esVocal(puntAux) == 1)
            {
                *p_vocales += 1;
            }
            else if (islower(*puntAux))
            {
                *p_minusculas += 1;
            }
            else if (isupper(*puntAux))
            {
                *p_mayusculas += 1;
            }
        }
        puntAux++;
    }
    // puntFrase -= longitud;
    printf("direccion de memoria de *puntFrase: %p\n", &puntFrase);
    printf("Contenido de la cuarta celda (notación de subíndice): %c\n", frase[3]);
    printf("Contenido de la cuarta celda (notación de puntero con desplazamiento): %c\n", *(puntFrase + 3));
    printf("cantidad de letras:%d\n", *p_letras);
    printf("cantidad de vocales:%d\n", *p_vocales);
    printf("cantidad de minusculas:%d\n", *p_minusculas);
    printf("cantidad de Mayusculas:%d\n", *p_mayusculas);
    return 0;
}

int esVocal(char *punt)
{
    int valor = 0;
    switch (*punt)
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

    return valor;
}