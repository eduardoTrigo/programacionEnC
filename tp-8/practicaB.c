#include <stdio.h>

struct recibo
{
    float basico;
    float bono;
    float antiguedad;
    float neto;
}typedef recibo;


struct empleado
{
    int dni;
    char nombre[15];
    int edad;
    int hijos;
    int antiguedad;
    recibo sueldo;
}typedef empleado;

void cargarEmpleado(empleado *punt, int cant);
void calcularNeto(empleado *punt, int cant);
void mostrarDatos(empleado *punt, int cant);
void mostrarUnDato(empleado *punt);

int main(){
    empleado emple[5], *p_emple;
    int cantidad;
    p_emple = emple;

    printf("ingrese cantidad de empleados:\n");
    scanf("%d", &cantidad);

    cargarEmpleado(p_emple, cantidad);
    calcularNeto(p_emple, cantidad);
    mostrarDatos(p_emple, cantidad);

    return 0;
}

void cargarEmpleado(empleado *punt, int cant){
    printf("------cargar arreglo-------\n");
    for (int i = 0; i < cant; i++)
    {
        printf("----empleado [%d]----\n",i);
        printf("ingrese DNI:\n");
        scanf("%d", &punt->dni);
        
        fflush(stdin);
        printf("ingrese nombre:\n");
        gets(punt->nombre);

        printf("ingrese la edad:\n");
        scanf("%d", &punt->edad);

        printf("ingrese cantidad de hijos:\n");
        scanf("%d", &punt->hijos);

        printf("ingrese cantidad de antiguedad:\n");
        scanf("%d", &punt->antiguedad);

        printf("ingrese cantidad de basico:\n");
        scanf("%f", &punt->sueldo.basico);

        punt++;
    }
}

    void calcularNeto(empleado *punt, int cant){
        empleado *aux = punt;
        for (int i = 0; i < cant; i++)
        {
            aux->sueldo.bono = aux->hijos * 5000;
            aux->sueldo.antiguedad = aux->sueldo.basico * aux->antiguedad/100;
            aux->sueldo.neto = aux->sueldo.basico + aux->sueldo.antiguedad + aux->sueldo.bono;
            aux++;
        }
    }

    void mostrarUnDato(empleado *punt){
        empleado *aux = punt;
        printf("----Recibo de Sueldo----\n");
        printf("empleado: %s\n", aux->nombre);
        printf("dni: %d\n", aux->dni);
        printf("antiguedad: %d\n", aux->antiguedad);
        printf("basico: %.2f\n", aux->sueldo.basico);
        printf("bono: %.2f\n", aux->sueldo.bono);
        printf("antiguedad: %.2f\n", aux->sueldo.antiguedad);
        printf("antiguedad: %.2f\n", aux->sueldo.neto);

    }

    void mostrarDatos(empleado *punt, int cant){
        empleado *aux = punt;  
        for (int i = 0; i < cant; i++)
        {
            printf("empleado numero [%d]\n", i);
            mostrarUnDato(aux);
            aux++;
        }
              
    }
    
