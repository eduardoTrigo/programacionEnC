#include <stdio.h>
#include <math.h>

double operacion(double a, double b);

int main()
{
    double a, b, resultado;
    int opcion;

    printf("ingrese numero A:\n");
    scanf("%lf", &a);
    printf("ingrese numero B:\n");
    scanf("%lf", &b);

    resultado = operacion(a , b);
    printf("resultado: %.2lf", resultado);
    return 0;
}

double operacion(double a, double b )
{
    int operacion;
    double resultado;
    printf("elija una operacion:\n");
    printf("1:Suma.\n");
    printf("2:Producto.\n");
    printf("3:Resta.\n");
    printf("4:Divicion.\n");
    printf("5:Cosiente.\n");
    printf("6:Potencia.\n");

    scanf("%d", &operacion);

    switch (operacion)
    {
    case 1:
        resultado = a + b;
        break;
    case 2:
        resultado = a * b;
        break;
    case 3:
        resultado = a - b;
        break;
    case 4:
        resultado = a / b;
        break;
    case 5:
        resultado = fmod(a,b);
        break;
    case 6:
        resultado = pow(a , b);
        break;
    default:
        break;
    }

    return resultado;
}

