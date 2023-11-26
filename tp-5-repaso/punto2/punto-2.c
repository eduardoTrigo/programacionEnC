#include <stdio.h>
#include <ctype.h>

void mostrarPrimerCaracter(char caracter);
int esVocal(char caracter);

int main(){
    char frase , anterior=' ';
    int digito=0, vocales=0;
    printf("ingrese una frase:\n");
    scanf("%c", &frase);
    while (frase != '.')
    {
        if (isalpha(frase))
        {
            vocales += esVocal(frase);
            switch (frase)
            {
            case 'a':
            case 'A':
                frase = '@';
                break;
            case 'o':
            case 'O':
                frase = '#';
                break;
            default:
                break;
            }
        }
        else if (isdigit(frase))
        {
            digito += 1;    
        }
        
        if (anterior == ' ' && isalpha(frase))
        {
            if (islower(frase))
            {
                frase = toupper(frase);
            }else{
                frase = tolower(frase);
            }
        }
        anterior = frase;
        mostrarPrimerCaracter(frase);
        scanf("%c",&frase);
    }
    mostrarPrimerCaracter(frase);
    printf("\ndigitos: %d", digito);
    printf("\nvocales: %d", vocales);
    return 0;
}

void mostrarPrimerCaracter(char frase){
    printf("%c", frase);
}

int esVocal(char frase){
    int valor=0 ;
    switch (frase)
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