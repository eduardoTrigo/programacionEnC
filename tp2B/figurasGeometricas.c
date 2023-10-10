#include <stdio.h>

int main()
{
    int a, b, c, d, perimetro;
    printf("ingresar lado A:\n");
    scanf("%d", &a);
    printf("ingresar lado B:\n");
    scanf("%d", &b);
    printf("ingresar lado C:\n");
    scanf("%d", &c);
    printf("ingresar lado D:\n");
    scanf("%d", &d);

    if (a > 0 && b > 0 && c > 0 && d >= 0)
    {
        if (d == 0)
        {
            if ((a == b && b == c))
            {
                perimetro = a + b + c + d;
                printf("la figura es un TRIANGULO EQUILATERO de perimetro %d cm", perimetro);
            }
            else
            {
                if ((a == b && b != c) || (a == c && b != c) || (b == c && a != c))
                {
                    perimetro = a + b + c + d;
                    printf("la figura es un TRIANGULO ISOSCELES de perimetro %d cm", perimetro);
                }
                else
                {                   
                        perimetro = a + b + c + d;
                        printf("la figura es un TRIANGULO ESCALENO de perimetro %d cm", perimetro);
                  
                }
            }
        }
        else
        {
            if (a == b && b == c && c == d)
            {
                perimetro = a + b + c + d;
                printf("la figura es un CUADRADO de perimetro %d cm", perimetro);
            }
            else
            {
                if ((a == b && c == d) || (a == c && b == d))
                {
                    perimetro = a + b + c + d;
                    printf("la figura es un RECTANGULO de perimetro %d cm", perimetro);
                }
                else
                {
                    perimetro = 0;
                    printf("Figura NO VALIDA , perimetro: %d", perimetro);
                }
            }
        }
    }
    else
    {
        printf("Datos Ingresados Incorrectos");
    }

    return 0;
}