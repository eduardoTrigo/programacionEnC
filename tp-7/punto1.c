#include <stdio.h>
#include <ctype.h>

int main(){
    char frase[100];
    char *puntFrase;

    puntFrase = &frase[0];

    printf("ingrese una frase terminada en punto.");
    fgets(frase, 100, stdin);

    for (int i = 0; *puntFrase != '\0'; i++)
    {
        if (tolower())
        {
            /* code */
        }
        
    }
    


}