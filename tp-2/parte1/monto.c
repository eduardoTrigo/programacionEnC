#include <stdio.h>
#define IVA 0.21
int main(void){
    float monto,precio;                 //DECLARO VARIABLES
    precio=325.5;                       //ASIGNO VALOR A PRECIO
    monto= precio + (IVA * precio);     //CALCULO MONTO
    printf("Monto a pagar=%f",monto);   //MUESTRO EN PANTALLA
    return 0;
}