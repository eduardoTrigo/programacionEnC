#include <stdio.h>
#define MAX 15

struct persona {
    char nombre[MAX];
    char ape[MAX];
    int edad;
    float peso;
    char sexo;
};

int main(){
    struct  persona PACIENTE;
    printf("ingrese nombre del Paciente");
    gets(PACIENTE.nombre);
    
    printf("ingrese apellido del Apellido");
    gets(PACIENTE.ape);

    printf("ingrese edad del paciente");
    scanf("%d", &PACIENTE.edad);

    printf("ingrese peso del paciente");
    scanf("%f", &PACIENTE.peso);

    printf("ingrese peso del paciente");
    gets(&PACIENTE.sexo);

    puts("los datos ingresados:\n");
    puts(PACIENTE.nombre);
    puts(PACIENTE.ape);
    printf("%d\n", PACIENTE.edad);
    printf("%.2f\n", PACIENTE.peso);
    puts(PACIENTE.sexo);

}