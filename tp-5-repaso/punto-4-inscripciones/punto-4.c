#include <stdio.h>

float formaPago(float matricula, int cuotas);
float nivelMatricula(int nivel);

int main()
{
    int nivel, cuotas, continuar = 1;
    float matricula, total, recaudacion =0;
    while (continuar == 1)
    {
        printf("ingrese el nivel del alumno:\n");
        printf("1: Inicial\n2: Primario\n3: Secundario\n4: Superior\n");
        scanf("%d", &nivel);
        matricula = nivelMatricula(nivel);
        
        printf("ingrese el numero de cuotas a abonar\n");
        printf("1 cuota.\n2 cuotas.\n3 cuotas.\n");
        scanf("%d", &cuotas);
        total = formaPago(matricula, cuotas);

        printf("valor matricula estudiante xxxx: $ %.2f\n", total);
        recaudacion += total;
        printf("desea calcular otra matricula?\n1: SI \t 0: NO\n");
        scanf("%d", &continuar);
    }
    printf("Recaudacion Total: %.2f", recaudacion);
    return 0;
}

float nivelMatricula(int nivel){
    float matricula;
    int carrera;
    switch (nivel)
        {
        case 1:
            matricula = 12800;
            break;
        case 2:
            matricula = 15000;
            break;
        case 3:
            matricula = 18500;
            break;
        case 4:
            printf("elija una carrera:\n");
            printf("1: Profesorado Educacion Fisica\n");
            printf("2: Profesorado de Ingles\n");
            printf("3: Tecnicatura en programacion\n");
            printf("4: Otro\n");
            scanf("%d", &carrera);
            switch (carrera)
            {
            case 1:
                matricula = 20000;
                break;
            case 2:
                matricula = 19500;
                break;
            case 3:
                matricula = 22000;
                break;
            case 4:
                matricula = 15000;
                break;
            default:
                break;
            }
            break;
        default:
            break;
        }
        return(matricula);
}

float formaPago(float matricula, int cuotas){
        float total;
        switch (cuotas)
        {
        case 1:
            total = matricula * 0.90;
            break;
        case 2:
            total = matricula * 1.15;
            break;
        case 3:
            total = matricula * 1.25;
            break;
        default:
            break;
        }
        return(total);
}