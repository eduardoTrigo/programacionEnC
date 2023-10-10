#include <stdio.h>

int main(){
    float monto, montoRecargo, montoFinal, descuento;
    int porcDescuento;

    printf("ingrese monto: ");
    scanf("%f", &monto);

    printf("ingrese descuento: ");
    scanf("%d",&porcDescuento);

    montoRecargo = monto * 1.15;
    descuento = montoRecargo * porcDescuento/100;
    montoFinal = montoRecargo - descuento ;

    printf("monto ingresado: %.2f\n", monto);
    printf("monto con recargo: %.2f\n", montoRecargo);
    printf("monto Final con descuento: %.2f\n", montoFinal);

    return 0;
}