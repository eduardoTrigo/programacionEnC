#include <stdio.h>

int main()
{
    int nivel, pagos, opcion;
    float aPagar, preValor;

    printf("ingrese el nivel del estudiante:\n1:Inicial.\n2:Primario.\n3:Secundaria.\n4:Terciario.\n");
    scanf("%d", &nivel);

    switch (nivel)
    {
    case 1:
        preValor = 12800;
        break;
    case 2:
        preValor = 15000;
        break;
    case 3:
        preValor = 18500;
        break;
    case 4:
        // int opcion;
        printf("ingrese la carrera a la que pertenece:\n");
        printf("1:Profesorado en educacion fisica.\n");
        printf("2:Profesorado en ingles.\n");
        printf("3:Tecnicatura en Programacion.\n");
        printf("4:Otro.\n");
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            preValor = 20000;
            break;
        case 2:
            preValor = 19500;
            break;
        case 3:
            preValor = 22000;
            break;
        case 4:
            preValor = 15000;
            break;
        default:
            break;
        }
        break;

    default:
        printf("nivel inexistente\n");
        break;
    }

    printf("ingrese una forma de pago:\n");
    scanf("%d", &pagos);
    switch (pagos)
    {
    case 1:
        aPagar = preValor * 0.90;
        break;
    case 2:
        aPagar = preValor * 1.15;
        break;
    case 3:
        aPagar = preValor * 1.25;
        break;
    default:
        printf("cantidad de pagos incorrecta\n");
        break;
    }
    printf("Total a pagar: %.2f",aPagar);
    return 0;
}