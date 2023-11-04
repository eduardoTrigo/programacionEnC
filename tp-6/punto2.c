#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 8

int main(){
    char password[MAX] , passConfirm[MAX];
    int longitud, may=0, min=0, num=0;
    printf("ingrese una contraseña:\n");
    gets(password);
    longitud = strlen(password);
    for (int i = 0; i < longitud ; i++)
    {
        if (num==0 && isdigit(password[i])>0)
        {
            num=1;
        }
        if (num==0 && islower(password[i])>0)
        {
            min=1;
        }
        if (num==0 && isupper(password[i])>0)
        {
            may=1;
        }
    }
    if (num ==1 && min == 1 && may ==1)
    {
        printf("ingrese NUEVAMENTE la contraseña:\n");
        gets(passConfirm);
    }
    
    printf("la contraseña ingresada es:\n");
    puts(password);
    printf("la SEGUNDA contraseña ingresada es:\n");
    puts(passConfirm);
    printf("longitud:\n%d", longitud);
    printf("\nnum: %d", num);
    printf("\nnum: %d", min);
    printf("\nnum: %d", may);

    return 0;
}