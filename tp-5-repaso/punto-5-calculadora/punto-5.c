#include <stdio.h>
#include <math.h>

int suma(int a, int b);
int resta(int a, int b);
int producto(int a, int b);
float division(int a, int b);
int resto(int a, int b);
int potencia(int a , int b);

int main(){
    int a, b, operacion;
    double resultado;
    printf("ingrese el numero A:\n");
    scanf("%d", &a);
    printf("ingrese numero B:\n");
    scanf("%d",&b);

    printf("indique una operacion.\n");
    printf("1: SUMA\n2: RESTA\n3: PRODUCTO\n4: DIVISION\n5: RESTO\n6: POTENCIA\n");
    scanf("%d",&operacion);
    switch (operacion)
    {
    case 1:
        resultado = suma(a , b);
        break;
    case 2:
        resultado = resta(a , b);
        break;
    case 3:
        resultado = producto(a , b);
        break;
    case 4:
        resultado = division(a , b);
        break;
    case 5:
        resultado = resto(a , b);
        break;
    case 6:
        resultado = potencia(a , b);
        break;
    default:
        break;
    }
    printf("resultado de la operacion:%.2f\n", resultado);
    return 0;
}

int suma(int a , int b){
    return(a + b);
}

int resta(int a, int b){
    return(a - b);
}

int producto(int a , int b){
    return(a * b);
}

float division(int a, int b){
    return(a / b);
}

int resto(int a, int b){
    return(a % b);
}

int potencia(int a , int b){
    return(pow(a,b));
}

