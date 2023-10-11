#include <stdio.h>

int main()
{
    int codigo;

    printf("ingrese el codigo del 0 al 256\n");
    scanf("%d", &codigo);

    if (codigo >= 0 && codigo <= 256)
    {
        if (codigo >= 48 && codigo <= 57)
        {
            printf("El codigo Ingresado es un NUMERO");
        }
        else
        {
            if ((codigo >= 65 && codigo <= 90) || (codigo >= 97 && codigo <= 122))
            {
                switch (codigo)
                {
                case 65:
                    printf("el codigo es una A mayuscula");
                    break;
                case 69:
                    printf("el codigo es una E mayuscula");
                    break;
                case 73:
                    printf("el codigo es una I mayuscula");
                    break;
                case 79:
                    printf("el codigo es una O mayuscula");
                    break;
                case 85:
                    printf("el codigo es una U mayuscula");
                    break;
                case 97:
                    printf("el codigo es una a minuscula");
                    break;
                case 101:
                    printf("el codigo es una e minuscula");
                    break;
                case 105:
                    printf("el codigo es una i minuscula");
                    break;
                case 111:
                    printf("el codigo es una o minuscula");
                    break;
                case 117:
                    printf("el codigo es una u minuscula");
                    break;
                default:
                    if (codigo >= 65 && codigo <= 90)
                    {
                        printf("el codigo es una letra MAYUSCULA");
                    }
                    else
                    {
                        printf("el codigo es una letra Minuscula");
                    }
                    break;
                }
            }
            else
            {
                switch (codigo)
                {
                case 64:
                    printf("El codigo ingresado representa una @");
                    break;
                case 42:
                case 43:
                case 45:
                case 47:
                case 37:
                    printf("El codigo ingresado representa un CARACTER ARITMETICO");
                    break;
                default:
                    printf("El codigo ingresado representa un CARACTER");
                    break;
                }
            }
        }
    }
    else
    {
        printf("El codigo ingresado ES INCORRECTO");        
    }
    return 0;
}