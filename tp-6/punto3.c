#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define TAMA 50

int main(){
    int tamaApe = 0, tamNomApe=0;
    char nombre[TAMA] , apellido[TAMA], nomApe[TAMA];
    printf("ingrese su nombre:");
    fgets(nombre, TAMA , stdin);
    printf("ingrese su apellido:");
    fgets(apellido, TAMA, stdin);
    
    apellido[strcspn(apellido, "\n")] = '\0';

    tamaApe = strlen(apellido);
    // puts(nombre);
    strcpy(nomApe, apellido);

    nomApe[tamaApe] = ',';
    tamaApe++;
    nomApe[tamaApe] = ' ';
    tamaApe++;

    for (int i = 0; nombre[i]!='\0'; i++)
    {
        nomApe[tamaApe + i]= nombre[i];
    }
    
    tamNomApe = strlen(nomApe);
    nomApe[tamNomApe] = '\n';
    puts(nomApe);
    printf("completo: %s", nomApe);

    return 0;
}