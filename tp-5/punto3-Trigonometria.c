#include <stdio.h>
#include <math.h>

void angulo(float a, float b, float c, int opcion);
int esRectangulo(float a, float b, float c);

int main()
{
    float a, b, c;
    int opcion;
    printf("ingrese angulo A:\n");
    scanf("%f", &a);
    printf("ingrese angulo B:\n");
    scanf("%f", &b);
    printf("ingrese angulo C:\n");
    scanf("%f", &c);

    if (esRectangulo(a, b, c) == 0)
    {
        printf("elija una opcion:\n");
        printf("1:Angulo A\n");
        printf("2:Angulo B\n");
        printf("3:Angulo C\n");
        printf("4:salir C\n");
        scanf("%d", &opcion);
        angulo(a, b, c, opcion);
    }else{
        printf("triangulo rectangulo");
    }

    return 0;
}

int esRectangulo(float a, float b, float c)
{
    int valor = 0;
    if (pow(a, 2) == pow(b, 2) + pow(c, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2) || pow(c, 2) == pow(a, 2) + pow(b, 2))
    {
        valor = 1;
    }
    return (valor);
}

void angulo(float a, float b, float c, int opcion)
{
    float radianes, grados;
    switch (opcion)
    {
    case 1:
        radianes = acos((pow(a, 2) - pow(b, 2) - pow(c, 2)) / (-2 * b * c));
        grados = radianes * 180 / M_PI;
        printf("ANGULO A --> %.2f Radianes | %.2f Grados", radianes, grados);
        break;
    case 2:
        radianes = acos((pow(b, 2) - pow(a, 2) - pow(c, 2)) / (-2 * a * c));
        grados = radianes * 180 / M_PI;
        printf("ANGULO B --> %.2f Radianes | %.2f Grados", radianes, grados);
        break;
    case 3:
        radianes = acos((pow(c, 2) - pow(a, 2) - pow(b, 2)) / (-2 * a * b));
        grados = radianes * 180 / M_PI;
        printf("ANGULO C --> %.2f Radianes | %.2f Grados", radianes, grados);
        break;
    case 4:
        printf("hasta la proxima");
        break;
    default:
        printf("opcion no valida");
        break;
    }
}