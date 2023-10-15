#include <stdio.h>

int main(){
    char cc;
    int espacios = 0;

    printf("escribe una frase terminada en punto.\n");
    fflush(stdin);
    scanf("%c", &cc);

    while (cc != '.')
    {
        if (cc==' ')
        {
            espacios += 1;
        }
        scanf("%c", &cc);        
    }
    printf("la frase contiene %d espacios en blanco.\n", espacios);
    return 0;
}