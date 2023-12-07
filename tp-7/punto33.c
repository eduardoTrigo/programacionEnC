#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 20

void mezclarCadenas(char *cad1, char *cad2, int num);

int main() {
    char cadena1[MAX], cadena2[MAX];
    char *p_cadena1, *p_cadena2;
    int num;

    printf("Ingrese cadena 1:\n");
    fgets(cadena1, MAX, stdin);

    printf("Ingrese cadena 2:\n");
    fgets(cadena2, MAX, stdin);
    cadena1[strcspn(cadena1, "\n")] = '\0'; // Eliminar el salto de línea al final
    cadena2[strcspn(cadena2, "\n")] = '\0'; // Eliminar el salto de línea al final

    p_cadena1 = (char *)malloc(MAX * sizeof(char));
    p_cadena1 = (char *)malloc(MAX * sizeof(char));
    strcpy(p_cadena1,cadena1);
    p_cadena2 = cadena2;

    printf("Ingrese un número:\n");
    scanf("%d", &num);

    mezclarCadenas(p_cadena1, p_cadena2, num);

    puts(p_cadena1);

    // Liberar la memoria asignada
    free(p_cadena1);

    return 0;
}

void mezclarCadenas(char *cad1, char *cad2, int num) {
    int longCad1 = strlen(cad1);
    int longCad2 = strlen(cad2);

    // Ajustar el tamaño de cad1 para incluir cad2
    cad1 = (char *)realloc(cad1, longCad1 + longCad2 + 1);  // +1 para el carácter nulo

    // Desplazar el contenido de cad1 hacia la derecha para hacer espacio para cad2
    for (int i = longCad1; i >= num; i--) {
        cad1[i + longCad2] = cad1[i];
    }

    // Copiar los caracteres de cad2 a cad1
    for (int i = 0; i < longCad2; i++) {
        cad1[num + i] = cad2[i];
    }

    // Añadir el carácter nulo al final de la cadena resultante
    cad1[longCad1 + longCad2] = '\0';
}
