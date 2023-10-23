#include <stdio.h>
#define GACEOSA 350
#define AGUA 300
#define ENERGIZANTE 600

int main()
{
    int producto, stock_G = 4, stock_A = 10, stock_E = 3, finCompra = 0;
    float dinero, vuelto;

    while (finCompra == 0)
    {
        printf("ingrese producto:\n");
        printf("1: Gaceosa\n");
        printf("2: Agua.\n");
        printf("3: Energizante.\n");
        scanf("%d", &producto);

        printf("ingrese dinero\n");
        scanf("%f", &dinero);
        switch (producto)
        {
        case 1:
            if (dinero >= GACEOSA && stock_G != 0)
            {
                vuelto = dinero - GACEOSA;
                stock_G -= 1;
                printf("Entregar Gaceosa\n");
                printf("vuelto %.2f \n", vuelto);
            }
            break;
        case 2:
            if (dinero >= AGUA && stock_A != 0)
            {
                vuelto = dinero - AGUA;
                stock_A -= 1;
                printf("Entregar Agua\n");
                printf("vuelto %.2f \n", vuelto);
            }
            break;
        case 3:
            if (dinero >= ENERGIZANTE && stock_E != 0)
            {
                vuelto = dinero - ENERGIZANTE;
                stock_E -= 1;
                printf("Entregar energizante\n");
                printf("vuelto %.2f \n", vuelto);
            }
            break;

        default:
            break;
        }

        printf("desea realizar otra compra?\n");
        printf("0: SI\n");
        printf("1: NO\n");
        scanf("%d", &finCompra);
    }

    return 0;
}