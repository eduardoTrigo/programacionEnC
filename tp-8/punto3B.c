#include <stdio.h>
#include <stdlib.h>

struct tipoFecha
{
    int dia;
    int mes;
    int anio;
} typedef tipoFecha;

struct cuentaBan
{
    int cbu[9];
    float saldo;
    float *movimientos;
} typedef cuentaBan;

struct tipocliente
{
    char apellido[15];
    char nombre[15];
    int dni;
    tipoFecha nacimiento;
    char contrasena[15];
    cuentaBan cuenta;
} typedef tipoCliente;

tipoCliente* cargarDatos(int cant);
void menuCliente(tipoCliente dato[], int cant);

int main(){
    tipoCliente *cliente;
    int cant;
    printf("ingrese la cantidad de clientes a igresar:\n");
    scanf("%d", &cant);
    cliente = cargarDatos(cant);
    menuCliente( cliente , cant);
    return 0;
}

tipoCliente* cargarDatos(int cant)
{
    // tipoCliente dato[cant];
    tipoCliente *dato = malloc(cant * sizeof(tipoCliente));
    
    for (int i = 0; i < cant; i++)
    {
        fflush(stdin);
        printf("ingrese apellido del cliente\n");
        fgets(dato[i].apellido, 20, stdin);

        printf("ingrese nombre del cliente\n");
        fgets(dato[i].nombre, 20, stdin);

        printf("ingrese dni del cliente:\n");
        scanf("%d", &dato[i].dni);

        printf("ingrese fecha de nacimiento del cliente:\n");
        scanf("%d %d %d", &dato[i].nacimiento.dia, &dato[i].nacimiento.mes, &dato[i].nacimiento.dia);

        fflush(stdin);
        printf("ingrese contraseña.\n");
        fgets(dato[i].contrasena, 12, stdin);

        dato[i].cuenta.movimientos = malloc(2 * sizeof(float));

        int digitoCBU;
        for (int j = 0; j < 8; j++)
        {
            digitoCBU = rand() % 10;
            dato[i].cuenta.cbu[j] = digitoCBU;
        }

        printf("ingrese saldo:\n");
        scanf("%f", &dato[i].cuenta.saldo);

        dato[i].cuenta.movimientos[0] = dato[i].cuenta.saldo;
    }
    return dato;
}

void menuCliente(tipoCliente dato[], int cant)
{
    int valor;    
    printf("eliga una cuenta: \n");
    for (int i = 0; i < cant; i++)
    {
        printf("%d - [%s , %s, %d]", i, dato[i].apellido, dato[i].nombre, dato[i].dni);
    }
    scanf("%d", &valor);
    
};
