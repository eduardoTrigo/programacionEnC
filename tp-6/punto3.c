#include <stdio.h>
#define TAMA 50

int main(){
    char nombre[TAMA] , apellido[TAMA];
    printf("ingrese su nombre:");
    fgets(nombre, TAMA , stdin);
    printf("ingrese su apellido:");
    fgets(apellido, TAMA, stdin);
    
    puts(nombre);
    printf("nombre: %c", nombre[TAMA]);
    printf("apellido: %c", apellido[TAMA]);

    return 0;
}