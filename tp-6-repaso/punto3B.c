#include  <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 30
int main(){
    char apellido[MAX], nombre[MAX], apeNomb[MAX];
    int tamaApe;

    printf("ingrese el nombre:\n");
    fgets(nombre, MAX, stdin);

    printf("ingrese apellido:\n");
    fgets(apellido, MAX, stdin);

    nombre[0] = toupper(nombre[0]);
    apellido[0] = toupper(apellido[0]);
    apellido[strcspn(apellido, "\n")] = '\0'; // Eliminar el salto de línea al final

    tamaApe=strlen(apellido);
    strcpy(apeNomb, apellido);
    
    apeNomb[tamaApe] =',';
    tamaApe++;
    apeNomb[tamaApe] =' ';
    tamaApe++;
    
    for (int i = 0; nombre[i]!='\0'; i++)
    {
        apeNomb[tamaApe] = nombre[i];
        tamaApe++;
    }
    apeNomb[tamaApe-1]='.';
    puts(apeNomb);
    printf("completo: %s", apeNomb);
    return 0;
}