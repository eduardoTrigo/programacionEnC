#include <stdio.h>

int main(){
    int a, b, c, d, perimetro;


    printf("ingrese lado 1: ");
    scanf("%d", &a);

    printf("ingrese lado 2: ");
    scanf("%d", &b);

    printf("ingrese lado 3: ");
    scanf("%d", &c);

    printf("ingrese lado 4: ");
    scanf("%d", &d);

    if (a>0 && b>0 && c>0 && d>=0)
    {
        if (d == 0)
        {
            if (a == b && b == c && c == a)
            {
                perimetro = a + b + c + d;
                printf("La figura es un triangulo equilatero de perimetro : %d", perimetro);
            }else
            {
                if (a == b && b != c || a==c && b != a)
                {
                    perimetro = a + b + c + d;
                    printf("La figura es un triangulo isosceles de perimetro : %d", perimetro);
                }else
                {
                    perimetro = a + b + c + d;
                    printf("La figura es un triangulo escaleno de perimetro : %d", perimetro);
                }               
                
            }            
            
        }else
        {
        if (a == b && b==c && c==d)
            {
                perimetro = a * 4;
                printf("La figura es un cuadrado de perimetro : %d", perimetro);
            }else{
                if ( (a==c && b==d) || (a==b && c==d))
                {
                    perimetro = a + b + c + d;
                    printf("La figura es un rectangulo de perimetro : %d", perimetro);
                }else
                {
                    printf("figura no valida");
                }
                
                    
            }   
        }        
    }else{
        printf("Datos ingresados incorrectos");
    }
    
        return 0;            
    }
    
