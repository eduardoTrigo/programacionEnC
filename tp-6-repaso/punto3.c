#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char nombre[20], apellido[20], apeNom[40];
    int tamanoApe, tamanoNomApe;

    printf("ingrese el nombre:\n");
    fgets(nombre, 20, stdin);

    printf("ingrese aellido:\n");
    fgets(apellido, 20 , stdin);

    apellido[strcspn(apellido, "\n")] = '\0';

    tamanoApe = strlen(apellido);
    strcpy(apeNom, apellido);

    apeNom[tamanoApe] = ',';
    tamanoApe++;
    apeNom[tamanoApe] = ' ';
    tamanoApe++;

    for (int i = 0; nombre[i]!='\0'; i++)
    {
        apeNom[tamanoApe+i] = nombre[i];
    }
    printf("nombre y apellido completo:\n");
    tamanoNomApe = strlen(apeNom);
    puts(apeNom);
    printf("completo: %s", apeNom);
}