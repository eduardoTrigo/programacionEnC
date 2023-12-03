#include <stdio.h>

struct 
{
    char nombre[20];
    char apellido[20];
    int edad;
    float nota1;
    float nota2;
    float nota3;

} typedef Alumno;

float promedio( float nota1, float nota2, float nota3);
void cambiarNotas(float *nota1, float *nota2, float *nota3);
int main(){
    Alumno estudiante;
    float prom;

    printf("ingrese nombre del  alumno");
    gets(estudiante.nombre);

    printf("\ningrese apellido del  alumno");
    gets(estudiante.apellido);

    printf("\n ingrese edad del alumno:");
    scanf("%d", &estudiante.edad);

    printf("\n ingrese nota 1:");
    scanf("%f",&estudiante.nota1);

    printf("\n ingrese nota 2:");
    scanf("%f",&estudiante.nota2);

    printf("\n ingrese nota 3:");
    scanf("%f",&estudiante.nota3);

    cambiarNotas(&estudiante.nota1, &estudiante.nota2, &estudiante.nota3);
    prom = promedio(estudiante.nota1, estudiante.nota2, estudiante.nota3);

    printf("\nEl promedio del alumno es: %f", prom);
    
    return 0;
}

float promedio(float nota1, float nota2, float nota3){
    float promedio;
    promedio= (nota1 + nota2 + nota3)/3;
    return promedio;
}

void cambiarNotas(float  *nota1, float *nota2, float *nota3){
    *nota1 = (*nota1)*0.2;
    *nota2 = (*nota2)*0.3;
    *nota3 = (*nota3)*0.6;
}