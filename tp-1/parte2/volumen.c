#include <stdio.h>
#define PI 3.14

int main(){
    float altura, radio, volumenCilindro, volumenEsfera;

    printf("ingrese altura del cilindro en metros: ");
    scanf("%f", &altura);

    printf("ingrese radio del cilindro en milimetros: ");
    scanf("%f", &radio);

    radio = radio * 0.001;

    volumenCilindro = PI * (radio*radio)* altura;
    volumenCilindro *= 100 ;
    volumenEsfera = 4/3*PI*(radio*radio*radio);
    volumenEsfera *= 100 ;


    printf("el volumen del cilindro es: %.4f cm\n", volumenCilindro );
    printf("el volumen del esfera es: %.4f cm", volumenEsfera );

    return 0;
}