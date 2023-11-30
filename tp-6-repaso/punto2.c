#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 9

int verificacion(char contrasenia[] ,int tama);
// int confirmacion(char contrasenia[] ,int tama)

int main()
{
    char pass[MAX] , rePass[MAX];
    int verif=0 ,confirm = 1;;

    do
    {
        printf("ingrese una contraseña:\n");
        fflush(stdin);
        fgets(pass, MAX, stdin);
        verif = verificacion(pass, MAX);
    }
    while ((strlen(pass) < 8) && verif == 0);
    
    do{
        verif = 0;
        
        printf("ingrese la misma contrseña para verificacion:\n");
        fflush(stdin);
        fgets(rePass, MAX , stdin);
        verif = verificacion(pass , MAX);
        if (verif == 1)
        {
            confirm = strcmp(pass, rePass);
            if (confirm != 0)
            {
                printf("las contraseñas no coinciden\n");
            }
        }
    } while (strlen(rePass) < 8 && confirm == 1);
    printf("contrasña valida\n");
    printf("la contrseña ingresada es:");
    return 0;
}

int verificacion(char contrasenia[], int tama){
    int min=0, may=0, num=0, valor=0;
    for (int i = 0; i < MAX; i++)
        {
            char caracter;
            caracter = contrasenia[i];
            if (isdigit(caracter) && num == 0)
            {
                num = 1;
            }

            if (islower(caracter) && min == 0)
            {
                min = 1;
            }

            if (isupper(caracter) && may == 0)
            {
                may = 1;
            }
        }
    if (may == 1 && min == 1 && num == 1)
    {
        valor == 1;
    }

    return(valor);
}