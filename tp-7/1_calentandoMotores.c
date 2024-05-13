#include <stdio.h>
#include <ctype.h>

#define TAMA 100

void contarConsonantes(char frase[TAMA]);
int esVocal(char *punt);

int main(){
    char frase[TAMA];
    char *punt = &frase[0]; // inicializo y declaro el puntero de tipo caracter.
    // tambien puedo realizarlo de esta manera
    // char *punt;
    // punt = &frase[0];
    int vocales=0, minusculas=0, mayusculas=0, letras=0;
    printf("ingrese una frase\n");
    fgets(frase, 100, stdin);
    char *puntAux;
    puntAux = punt;
    while (*puntAux != '\0')
    {
        if (isalpha(*puntAux))
        {
            letras+=1;
            if (esVocal(puntAux)) ///no lleva el operador indireccion (*) ya que estoy pasando por referencia un puntero a la funcion.
            {
                vocales += 1;
            }
            if (islower(*puntAux))
            {
                minusculas+=1;
            }
            if (isupper(*puntAux))
            {
                mayusculas+=1;
            }
        }
        puntAux++;
    }
    printf("vocales: %d\n", vocales);
    printf("minusculas: %d\n", minusculas);
    printf("mayusculas: %d\n", mayusculas);


    printf("lo que contiene el puntero: %p\n", punt);
    printf("la direccion de memoria de la variable frase[0]: %p", &frase[0]);
}

int esVocal(char *punt){
    int aux=0;
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
        aux = 1;
        break;
    default:
        break;
    }
    return aux;
}
