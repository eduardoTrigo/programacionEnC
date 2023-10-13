#include <stdio.h>

int main(){
    int edad, cuil, arg;
    printf("ingrese DNI:\n");
    scanf("%d", &edad);
    printf("ingrese CUIL:\n");
    scanf("%d", &cuil);
    printf("es Argentino y tiene cuenta en mi argentina?\n");
    printf("0: NO ");
    printf("1: SI ");
    scanf("%d", &arg);



    if (edad >= 18 && arg == 1)
    {
        printf("");
    }
    
    return 0;
}