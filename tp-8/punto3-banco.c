#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct fecha
{
    int dia, mes, anio;
};
typedef struct fecha tipofecha;

struct cuenta
{
    int cbu[8];
    float saldo;
    int cantMov;
    float *historial;
} typedef tipoCuenta;

struct tipoCliente
{
    char nombre[15], apellido[15], contrasena[12];
    int dni;
    tipofecha fecNac;
    tipoCuenta cuenta;
} typedef tipoCliente;

void mostrarDatos(tipoCliente cliente);
int menuClientes(tipoCliente cliente[]);
int menuOpcion();
tipoCliente cambiarContrasena(tipoCliente dato);
tipoCliente depositar(tipoCliente dato);
tipoCliente retirar(tipoCliente dato);

int main()
{

    tipoCliente cliente[2] = {{"eduardo", "trigo", "lemmy27", 31030627, {7, 1, 85}, {{25252525}, 5000.00, 0, 0}},
                              {"lemmy", "trigo", "lemmy27", 31030627, {7, 1, 85}, {{25252525}, 5000.00, 0, 0}}};

    for (int i = 0; i < 2; i++)
    {
        cliente[i].cuenta.historial = malloc(2 * sizeof(float));  // asigno memoria dinamica al historial de movimientos
        cliente[i].cuenta.historial[0] = cliente[i].cuenta.saldo; // asigno el valor del saldo al principio del arreglo
        cliente[i].cuenta.cantMov += 1;                           // aumento la cantidad de moviminetos
    }

    for (int i = 0; i < 2; i++)
    {
        mostrarDatos(cliente[i]);
    }

    int numcliente, opcion1, salir = 0;

    do
    {
        numcliente = menuClientes(cliente);

        opcion1 = menuOpcion();
    } while (opcion1 == 7);

    int id = numcliente - 1;

    switch (opcion1)
    {
    case 1:
        cliente[id] = cambiarContrasena(cliente[id]);
        printf("nc : %s", cliente[id].contrasena);
        break;
    case 2:
        cliente[id] = depositar(cliente[id]);
        mostrarDatos(cliente[id]);
        break;
    case 3:
        cliente[id] = retirar(cliente[id]);
        mostrarDatos(cliente[id]);
        break;
    case 4:
        printf("saldo disponible:\n");
        printf("saldo: %.2f", cliente[id].cuenta.saldo);
        break;
    case 5:
        printf("datos completos:\n");
        mostrarDatos(cliente[id]);
        break;
    case 6:
        printf("historial de movimientos:\n");
        for (int j = 0; j < cliente[id].cuenta.cantMov; j++)
        {
            printf("\tmovimiento - %d: %.2f\n", j + 1, cliente[id].cuenta.historial[j]);
        }
        break;
    default:
        break;
    }

    return 0;
}

void mostrarDatos(tipoCliente cliente)
{

    printf("nombre Completo: %s, %s \n", cliente.apellido, cliente.nombre);
    printf("dni: %d,  \n", cliente.dni);
    printf("saldo: %.2f\n", cliente.cuenta.saldo);
    printf("fecha de nacimiento: %d / %d / %d\n", cliente.fecNac.dia, cliente.fecNac.mes, cliente.fecNac.anio);
    printf("historial: \n");
    for (int j = 0; j < cliente.cuenta.cantMov; j++)
    {
        printf("\tmovimiento - %d: %.2f\n", j + 1, cliente.cuenta.historial[j]);
    }
};

int menuOpcion()
{
    int valor;
    do
    {
        printf("elija una opcion:\n");
        printf("1 - cambiar contraseña.\n");
        printf("2 - depositar monto.\n");
        printf("3 - retirar dinero.\n");
        printf("4 - consultar saldo.\n");
        printf("5 - mostrar datos.\n");
        printf("6 - mostrar historial.\n");
        printf("7 - volver al menu cliente.\n");
        scanf("%d", &valor);
    } while (valor > 7 || valor < 1);
    return valor;
};

int menuClientes(tipoCliente cliente[])
{
    int valor;
    do
    {
        printf("elija una opcion:\n");
        for (int i = 0; i < 2; i++)
        {
            printf("%d -  %s, %s, %d \n", i + 1, cliente[i].apellido, cliente[i].nombre, cliente[i].dni);
        }
        scanf("%d", &valor);
    } while (valor != 2 && valor != 1);

    return valor;
};

tipoCliente cambiarContrasena(tipoCliente dato)
{
    char nuevoPass[12];
    fflush(stdin);
    printf("ingrese nueva contraseña: \n");
    fgets(nuevoPass, 12, stdin);
    strcpy(dato.contrasena, nuevoPass);
    return dato;
};

tipoCliente depositar(tipoCliente dato)
{
    float deposito;
    printf("ingrese monto a depositar: ");
    scanf("%f", &deposito);
    dato.cuenta.saldo += deposito;
    dato.cuenta.cantMov += 1;
    // reasigno memoria dinamica sumando un lugar al historial de movimientos
    dato.cuenta.historial = realloc(dato.cuenta.historial, dato.cuenta.cantMov * sizeof(float));
    dato.cuenta.historial[dato.cuenta.cantMov - 1] = deposito;
    return dato;
};

tipoCliente retirar(tipoCliente dato)
{
    float retirar;
    printf("ingrese monto a retirar:");
    scanf("%f", &retirar);

    dato.cuenta.saldo -= retirar;
    dato.cuenta.cantMov += 1;
    // reasigno memoria dinamica sumando un lugar al historial de movimientos
    dato.cuenta.historial = realloc(dato.cuenta.historial, dato.cuenta.cantMov * sizeof(float));
    dato.cuenta.historial[dato.cuenta.cantMov - 1] = -(retirar);
    return dato;
};