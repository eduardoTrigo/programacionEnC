#include <stdio.h>

int main(){
    char cc;
    int cantA=0, cantE=0, cantO=0;
    printf("ingrese una frase terminada en .\n");
    fflush(stdin);
    scanf("%c",&cc );
    while (cc != '.')
    {
        switch (cc)
        {
        case 'A':
        case 'a': cantA +=1;
            break;
        case 'E':
        case 'e': cantE +=1;
            break;
        case 'O':
        case 'o': cantO +=1;
            break;
        default:
            break;
        }
        scanf("%c", &cc);
    }

    printf("cantidad de vocales A:%d\n",cantA);
    printf("cantidad de vocales E:%d\n",cantE);
    printf("cantidad de vocales O:%d\n",cantO);
    
}
