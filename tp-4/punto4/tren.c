#include <stdio.h>
#define CONS_AGUA 0.33
#define CONS_CARBON 0.20
int main()
{
    int kilometros = 0, recorrido;
    float agua, carbon;
    printf("ingrese la cantidad de Kilometros a recorrer:\n");
    scanf("%d", &recorrido);
    printf("ingrese la cantidad de Agua:\n");
    scanf("%f", &agua);
    printf("ingrese la cantidad de Carbon:\n");
    scanf("%f", &carbon);

    while (agua > 0.33 && carbon > 0.2 && recorrido > 0)
    {
        kilometros += 1;
        recorrido -= 1;
        agua -= 0.33;
        carbon -= 0.2;
        printf("recorimos %d kilometros, agua restante: %.2f , carbon restante: %.2f.\n", kilometros, agua, carbon);
    }
    if (agua < 0.33 || carbon < 0.2)
    {
        if (agua < 0.33)
        {
            printf("el tren No llego a destino. Agua insufisiente");
        }else
        {
            printf("el tren No llego a destino. Carbon insufisiente");
        }
    }
    else
    {
        printf("el tren SI llego a destino");
    }
    return 0;
}