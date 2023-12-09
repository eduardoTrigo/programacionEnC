#include <stdio.h>

struct recibo{
    float basico;
    float bono;
    float antiguedad;
    float neto;
}typedef recibo;

struct empleado {
    int dni;
    char nombre[20];
    int edad;
    int antiguedad;
    int hijos;
    recibo sueldo;
}typedef empleado;


int main(){
    empleado emple;

    printf("\nescriba DNI del empleado:");
    scanf("%d", &emple.dni);

    printf("\nescriba nombre del empleado:");
    fflush(stdin);
    gets(emple.nombre);

    printf("\ningrese edad del empleado:");
    scanf("%d", &emple.edad);

    printf("\ningrese antiguedad del empleado:");
    scanf("%d", &emple.antiguedad);

    printf("\ningrese la cantidad de hijos del empleado:");
    scanf("%d", &emple.hijos);

    printf("\ningrese el sueldo basico del empleado:");
    scanf("%f", &emple.sueldo.basico);

    emple.sueldo.antiguedad = emple.antiguedad * emple.sueldo.basico / 100;

    emple.sueldo.bono = emple.hijos * 5000;

    emple.sueldo.neto = emple.sueldo.basico + emple.sueldo.antiguedad + emple.sueldo.bono;

    printf("\ndni:%d", emple.dni);
    printf("\nnombre:%s", emple.nombre);
    printf("\nedad:%d", emple.edad);
    printf("\nhijos:%d", emple.hijos);
    printf("\nantiguedad:%d", emple.antiguedad);
    printf("\nbasico:%.2f", emple.sueldo.basico);
    printf("\nantiguedad:%.2f", emple.sueldo.antiguedad);
    printf("\nbono:%.2f", emple.sueldo.bono);
    printf("\nneto:%.2f", emple.sueldo.neto);

    return 0;
}