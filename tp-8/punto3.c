#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

tipoCliente cargarDatos(int cant);
void menuCliente(tipoCliente dato[] , int cant);

int main()
{
    tipoCliente cliente;
    int valor, cant;
    fflush(stdin);
    printf("ingrese cantidad de clientes:\n");
    scanf("%d", &cant);

    cliente = cargarDatos(cant);

    menuCliente(cliente , cant);

    return 0;
}

tipoCliente cargarDatos(int cant)
{
    tipoCliente dato[5];
    // int cant;
    // printf("ingrese cantidad de clientes a ingresar");
    // scanf("%d", &cant);
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

        return dato[5];
    }
}

void menuCliente(tipoCliente dato[], int cant)
{
    

    printf("eliga una cuenta: \n");
    for (int i = 0; i < cant; i++)
    {
        printf("%d - [%s , %s, %d]", i, dato[i].apellido, dato[i].nombre, dato[i].dni);
    }
    scanf("%d", &valor);
    
};

// do
// {
//     int opcion, volver = 0;
//     if (valor != 0)
//     {
//         printf("ingrese una opcion:\n");
//         printf("1 - cambiar contraseña.\n");
//         printf("2 - depositar monto.\n");
//         printf("3 - retirar dinero.\n");
//         printf("4 - consultar saldo.\n");
//         printf("5 - mostrar datos.\n");
//         printf("6 - mostrar historial de movimientos.\n");
//         printf("7 - mostrar historial de movimientos.\n");
//         scanf("%d", &opcion);
//     }
//     switch (opcion)
//     {
//     case 1:
//         printf("ingrese nueva contraseña:\n");
//         fgets(dato[valor].contrasena , 15 , stdin);
//         break;
//     case 2:
//         printf("depositar monto:\n");
//         break;
//     case 3:
//         printf("retirar dinero:\n");
//         break;
//     case 4:
//         printf("consultar saldo:\n");
//         break;
//     case 5:
//         printf("mostrar datos:\n");
//         break;
//     case 6:
//         printf("historial:\n");
//         break;
//     case 7:
//         printf("saliendo:\n");
//         volver=1;
//         break;
//     default:
//         break;
//     }

// } while (volver != 0);

// if (valor == 0)
// {
//     printf("fin del programa\n");
// }

void menuOpciones(tipoCliente dato, int valor)
{
    int opcion;
    while (valor != 0)
    {
        printf("1 - cambiar contraseña.\n");
        printf("2 - depositar monto.\n");
        printf("3 - retirar dinero.\n");
        printf("4 - consultar saldo.\n");
        printf("5 - mostrar datos.\n");
        printf("6 - mostrar historial de movimientos.\n");
        printf("7 - mostrar historial de movimientos.\n");
    }
}