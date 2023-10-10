#include <stdio.h>

int main(){
    int dni,cbu, opcion;
    float saldo, deposito, extraccion;
    printf("ingrese dni:");
    scanf("%d",&dni);
    printf("ingrese cbu:");
    scanf("%d", &cbu);
    printf("ingrese saldo:");
    scanf("%f", &saldo);

    printf("seleccione una operacion: \n");
    printf("1 : depositar dinero. \n");
    printf("2 : retirar dinero. \n");
    printf("3 : consultar saldo. \n");
    printf("4 : Motrar datos de la cuenta. \n");
    printf("5 : salir del programa. \n");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1: 
        printf("ingrese monto a depositar: \n");
        scanf("%f", &deposito);
        saldo += deposito ;
        printf("saldo actualizado: %.2f", saldo);
        break;

    case 2:
        printf("ingrese monto a extraer: \n");
        scanf("%f", &extraccion);
        if (saldo >= extraccion )
        {
            saldo -= extraccion;
            printf("saldo actualizado: %.2f", saldo);
        }else
        {
            printf("Monto Insuficiente");
        }      
        break;

    case 3:
            printf("Su saldo es : %.2f", saldo);
        break;
    case 4:
            printf("DNI: %d\n", dni);
            printf("CBU: %d", cbu);
        break;
    case 5:
            printf("SALIENDO");
        break;    
    default:
            printf("Ingrese Opcion Valida");        
        break;
    }    

    return 0;
}