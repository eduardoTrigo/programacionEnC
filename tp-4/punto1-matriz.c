#include <stdio.h>
int main(){
    int n, num=1;
    printf("ingrese orden de la matriz cuadrada.\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d", num);
            num = num +1;
        }
        printf("\n");
    }
    return 0;
}