#include <stdio.h>

int main(){
    int dni, cbu, operacion;
    float saldo, aDepositar, aExtraer;

    printf("ingrese DNI\n");
    scanf("%d", &dni);

    printf("ingrese CBU\n");
    scanf("%d", &cbu);

    printf("ingrese SALDO\n");
    scanf("%f", &saldo);

    printf("Ingrese Operacion\n");
    printf("1:Depositar Dinero\n");
    printf("2:Retirar Dinero\n");
    printf("3:Consultar Saldo\n");
    printf("4:Mostrar Datos\n");
    printf("5:Salir\n");
    scanf("%d", &operacion);
    
    switch (operacion)
    {
    case 1:
        printf("ingrese monto a Deposiar\n");
        scanf("%f", &aDepositar);
        saldo += aDepositar;
        printf("Saldo actualizado: %.2f\n", saldo);
        break;

    case 2:
        printf("ingrese monto a Extraer\n");
        scanf("%f", &aExtraer);
        saldo -= aExtraer;
        printf("Saldo actualizado: %.2f\n", saldo);
        break;
    
    case 3:
        printf("Saldo:\n");        
        printf("%.2f\n", saldo);
        break;

    case 4:
        printf("Datos de la cuenta:\n");        
        printf("DNI: %d\n", dni);
        printf("CBU: %d\n", cbu);
        break;

    case 5:
        printf("Salir\n");        
        break;

    default:
        break;
    }
    return 0;
}