#include <stdio.h>
// #define DESC 0.50

int main()
{
    int rubro, tipo, dia, mes;
    float monto, reintegro;

    printf("ingrese rubro:\n");
    printf("1: transporte\n");
    printf("2: alojamiento\n");
    printf("3: excurciones\n");
    printf("4: museos\n");
    scanf("%d", &rubro);

    // printf("ingrese Tipo de factura o ticket:\n");
    // printf("1: Ticket aereo\n");
    // printf("2: Pasaje Terrestre\n");
    // printf("3: Factura A\n");
    // printf("4: Factura B\n");
    // printf("4: Factura C\n");
    // scanf("%d", &tipo);

    printf("Ingrese Monto:\n");
    scanf("%f", &monto);

    printf("Ingrese Fecha: dia/mes\n");
    scanf("%d/%d", &dia, &mes);

    switch (rubro)
    {
    case 1:
        printf("ingrese Tipo de factura o ticket:\n");
        printf("1: Ticket aereo\n");
        printf("2: Pasaje Terrestre\n");
        printf("4: Factura A\n");
        printf("5: Factura B\n");
        printf("6: Factura C\n");
        scanf("%d", &tipo);

        if (tipo == 1 || tipo == 2)
        {

            if (mes == 9 && dia >= 1 && dia <= 7)
            {
                if (monto >= 0)
                {
                    if (monto <= 10000)
                    {
                        reintegro = 0;
                        printf("Beneficio APROBADO. Credito disponible: %f", reintegro);
                    }
                    else
                    {
                        if (monto > 10000 && monto <= 200000)
                        {
                            reintegro = monto * 0.50;
                            printf("Beneficio APROBADO. Credito disponible: %f", reintegro);
                        }
                        else
                        {
                            reintegro = 100000;
                            printf("Beneficio APROBADO. Credito disponible: %f", reintegro);
                        }
                    }
                }
                else
                {
                    printf("monto ingresado incorrecto");
                }
            }
            else
            {
                printf("Beneficio DESAPROBADO. ticket fuera de fecha.");
            }
        }
        else
        {
            printf("Beneficio DESAPROBADO. Ticket no válido");
        }

        break;
    case 2:
    case 3:
    case 4:
        printf("Ingrese Tipo de factura o ticket:\n");
        
        printf("1: Factura A\n");
        printf("2: Factura B\n");
        printf("3: Factura C\n");
        printf("4: Ticket aereo\n");
        printf("5: Pasaje Terrestre\n");
        scanf("%d", &tipo);
        if (tipo == 3 || tipo == 2)
        {
            if (mes == 9 && dia >= 1 && dia <= 7)
            {
                if (monto >= 0)
                {
                    if (monto <= 10000)
                    {
                        reintegro = 0;
                        printf("Beneficio APROBADO. Credito disponible: %.2f", reintegro);
                    }
                    else
                    {
                        if (monto <= 200000)
                        {
                            reintegro = monto * 0.50;
                            printf("Beneficio APROBADO. Credito disponible: %.2f", reintegro);
                        }
                        else
                        {
                            reintegro = 100000;
                            printf("Beneficio APROBADO. Credito disponible: %.2f", reintegro);
                        }
                    }
                }
                else
                {
                    printf("monto ingresado incorrecto");
                }
            }
            else
            {
                printf("Beneficio DESAPROBADO. ticket fuera de fecha.");
            }
        }
        else
        {
            printf("Beneficio DESAPROBADO. Ticket no válido");
        }

        break;
    default:
        break;
    }

    return 0;
}