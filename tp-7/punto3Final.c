#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

void mezclarCadenas(char *cad1, char *cad2, int num);

int main(){
    char *p_cadena1, *p_cadena2;
    int num;

    p_cadena1 = (char *)malloc(MAX * sizeof(char));

    printf("ingrese cadema 1");
    gets(p_cadena1);

    p_cadena2 = (char *)malloc(MAX * sizeof(char));

    printf("ingrese cadema 2");
    gets(p_cadena2);

    printf("ingrese un numero:\n");
    scanf("%d", &num);

    p_cadena1 = (char *)realloc(p_cadena1, (strlen(p_cadena1) + strlen(p_cadena2)) * sizeof(char));
    mezclarCadenas(p_cadena1, p_cadena2, num);

    free(p_cadena1);
    free(p_cadena2);
    return 0;
}

void mezclarCadenas(char *cad1, char *cad2, int num){
    char *aux2 = cad2, *aux1 = cad1;
    int longitud=strlen(cad2);
    
    aux1 += num;
    aux2 += longitud;
    
    strcpy(aux2,aux1);
    puts(cad2);

    aux2 = cad2;
    strcpy(aux1, aux2);
    puts(cad1);
}