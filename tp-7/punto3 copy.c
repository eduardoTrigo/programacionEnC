#include <stdio.h>
#include <string.h>
#define MAX 20

void mezclarCadenas(char *cad1, char *cad2, int num);
void mezclarCadenas2(char *cad1, char *cad2, int num);
int main(){
    char cadena1[MAX], cadena2[MAX];
    char *p_cadena1, *p_cadena2;
    int num;

    printf("ingrese cadena 1: \n");
    fgets(cadena1, MAX, stdin);

    printf("ingrese cadena 2: \n");
    fgets(cadena2, MAX, stdin);
    cadena1[strcspn(cadena1, "\n")] = '\0'; // Eliminar el salto de línea al final
    cadena2[strcspn(cadena2, "\n")] = '\0'; // Eliminar el salto de línea al final
    p_cadena1 = cadena1;
    p_cadena2 = cadena2;

    printf("ingrese un numero :\n");
    scanf("%d", &num);
    mezclarCadenas2(p_cadena1, p_cadena2, num);

    puts(p_cadena1);

    return 0;    
}


void mezclarCadenas(char *cad1, char *cad2, int num){
    char *aux_cad1, *aux_cad2;
    aux_cad1 = cad1;
    aux_cad2 = cad2;
    int longCad2=0;
    
    for (int i = 0; aux_cad2[i] !='\0'; i++)
    {
        longCad2++;
    }
    
     for (int i = 0; i < num; i++)
    {
        cad2[longCad2 + i] = cad1[i+num];
    }
    
    for (int i = 0; *aux_cad2 !='\0'; i++)
    {
        cad1[num + i] = cad2[i];
        aux_cad2++;
    }
};
