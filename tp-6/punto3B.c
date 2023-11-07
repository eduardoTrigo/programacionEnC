#include <stdio.h>
#include <string.h>
#define TAMA 50

int main(){
    char nom[TAMA], ape[TAMA],apeNom[TAMA];

    printf("ingrese nombre:");
    fgets(nom, TAMA, stdin);

    printf("ingrese apellido:");
    fgets(ape, TAMA, stdin);

    ape[strcspn(ape,"\n")]='\0';   //reemplaza el salto de linea con el carater nulo 

    snprintf(apeNom, TAMA,"%s, %s", ape, nom);

    printf("nombre completo: %s\n", apeNom);
    return 0;
}