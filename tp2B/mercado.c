#include <stdio.h>

int main()
{
    int rubro, esCeliaco, metodoPago, pagos;
    float monto, total, totalAPagar,cuotas;

    printf("ingrese monto\n");
    scanf("%f", &monto);

    printf("ingrese rubro\n");
    printf("1: Carnes\n");
    printf("2: Pastas\n");
    printf("3: Frutas y Verduras\n");
    printf("4: Forrajeria\n");
    printf("5: Lacteos y Huevos\n");
    printf("6: Articulos de Limpieza\n");
    scanf("%d", &rubro);

    switch (rubro)
    {
    case 1:
        total = monto * 0.9;
        break;
    case 2:
        total = monto * 0.9;
        break;
    case 3:
        total = monto * 0.95;
        break;
    case 4:
        printf("Es Celiaco?\n");
        printf("1 : Si -- 0 : No\n");
        scanf("%d", &esCeliaco);
        switch (esCeliaco)
        {
        case 1:
            total = monto * 0.88;
            break;
        case 0:
            total = monto * 0.8;
            break;        
        }        
        break;
    case 5:
        total = monto * 0.92;
        break;
    case 6:
        total = monto;
        break;
    default:
        total = monto;
        break;
    }

    printf("Subtotal : %.2f\n", total);
    printf("\n");
    printf("metodo de pago :\n");
    printf("1: efectivo o transferencia\n");
    printf("2: tarjeta de credito\n");
    scanf("%d", &metodoPago);

    switch (metodoPago)
    {
    case 1:
        totalAPagar = total * 0.90;
        break;
    case 2:
        printf("en cuantos pagos: 1 o 3\n");
        scanf("%d", &pagos);
        switch (pagos)
        {
        case 1:
            totalAPagar = total;
            printf("Monto: %.2f\n", monto);
            printf("total: %.2f\n", total);
            printf("total a pagar: %.2f\n", totalAPagar);
            break;
        case 3:
            totalAPagar = total * 1.15;
            cuotas = totalAPagar/3;
            printf("Monto: %.2f\n", monto);
            printf("total: %.2f\n", total);
            printf("total a pagar: %.2f\n", totalAPagar);
            printf("3 cuotas de: %.2f\n", cuotas);

            break;
        default:
            break;
        }
        break;
    default:
        break;
    }

    return 0;
}