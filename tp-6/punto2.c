#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 12

int main()
{
    char password[MAX], passConfirm[MAX];
    int longitud = 0, may = 0, min = 0, num = 0;

    do
    {
        printf("Ingrese una contraseña:\n");
        fgets(password, MAX, stdin);
        longitud = strlen(password);

    } while ( longitud < 8);

    for (int i = 0; i < longitud; i++)
    {
        if (isdigit(password[i]))
        {
            num = 1;
        }
        if (islower(password[i]))
        {
            min = 1;
        }
        if (isupper(password[i]))
        {
            may = 1;
        }
    }

    printf("Ingrese NUEVAMENTE la contraseña para confirmar:\n");
    fgets(passConfirm, MAX, stdin);

    int confirmacion = strcmp(password, passConfirm);
    if (confirmacion == 0 && num == 1 && min == 1 && may == 1)
    {
        printf("Contraseña valida\n");
        printf("La contraseña ingresada es: %s\n", password);
    }
    else
    {
        printf("Las contraseñas son diferentes o no cumplen con los requisitos.");
    }

    return 0;
}