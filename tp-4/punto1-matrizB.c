#include <stdio.h>

int main(){
    int n, num =1, fila =1, col;

    printf("ingrese orden de la matriz cuadrada.\n");
    scanf("%d", &n);
    while (fila <= n)
    {
        col = 1;
        while (col <n)
        {
            printf("%d", num);
            num = num +1;
            col += 1;
        }
        printf("%d", num);
        printf("\n");
        num = num + 1;
        fila = fila +1;
    }
    
    return 0;
}