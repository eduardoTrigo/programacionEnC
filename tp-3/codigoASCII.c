#include <stdio.h>

int main(){
    int numero;
    printf("ingrese un numero ASCII:");
    scanf("%d",&numero);

    if (numero >= 0 && numero <= 256)
    {
        if (numero >= 48 && numero <=57)
        {
            printf("el numero ingresado es un NUMERO");
        }else
        {
            if ((numero >= 65 && numero <= 90)||(numero >= 97 && numero <= 122))
            {
                
                switch (numero)
                {
                case 65: printf("el numero ingresado equivale a la letra A en mayuscula");                    
                    break;
                case 69: printf("el numero ingresado equivale a la letra E en mayuscula");                    
                    break;
                case 73: printf("el numero ingresado equivale a la letra I en mayuscula");                    
                    break;
                case 79: printf("el numero ingresado equivale a la letra O en mayuscula");                    
                    break;
                case 85: printf("el numero ingresado equivale a la letra U en mayuscula");                    
                    break;
                case 97: printf("el numero ingresado equivale a la letra a en minuscula");                    
                    break;
                case 101: printf("el numero ingresado equivale a la letra e en minuscula");                    
                    break;
                case 105: printf("el numero ingresado equivale a la letra i en minuscula");                    
                    break; 
                case 111: printf("el numero ingresado equivale a la letra o en minuscula");                    
                    break; 
                case 117: printf("el numero ingresado equivale a la letra u en minuscula");                    
                    break;              
                default:
                        if (numero >= 65 && numero <= 90)
                        {
                            printf("el numero ingresado es una letra MAYUSCULA");
                        }else{
                             printf("el numero ingresado es una letra MINUSCULA");
                        }                
                    break;
                }
            }else
            {
               switch (numero)
               {
                case 64: printf("el numero ingresado representa a caracter especial @");                
                    break;
                case 37: printf("el numero ingresado representa a caracter especial %%");                
                    break;
                case 42: printf("el numero ingresado representa a caracter especial *");                
                    break;
                case 43: printf("el numero ingresado representa a caracter especial +");                
                    break;
                case 45: printf("el numero ingresado representa a caracter especial -");                
                    break;
                case 47: printf("el numero ingresado representa a caracter especial /");                
                    break;
               default:
                    printf("el numero ingresado representa a Caracter Especial");                    
                break;
               } 
                
            }
            
            
        }
        
    
        
    }else{
        printf("ingrese un numero valido");
    }

    return 0;
    
}