#include <stdio.h>

struct proveedor
{
    char nombre[15];
    int cel;
} typedef proveedor;

struct fecha
{
    int dia;
    int mes;
    int anio;
} typedef fechaInicio;

struct producto
{
    char nombre[15];
    float precio;
    int cantVendidaxMes[12];
    proveedor proveedor;
    fechaInicio fecha;
} typedef producto;

void cargarDatos(producto *prod, int cant);
void modificarPUnitario(producto *punt, int cant);
void montoTotal(producto *punt, int cant);
void mayorVenta(producto *punt, int cant);
void mostrarDatos(producto prod[], int cant);

int main()
{
    producto prod[5], *p_prod;
    int cant;
    p_prod = prod;
    printf("ingrese cantidad de productos");
    scanf("%d", &cant);
    cargarDatos(p_prod, cant);
    mostrarDatos(prod, cant);

    // modificarPUnitario(p_prod, cant);
    montoTotal(p_prod, cant);
    mayorVenta(p_prod, cant);
    // mostrarDatos(prod, cant);

    return 0;
}

void cargarDatos(producto *prod, int cant)
{
    // producto *aux = prod;
    for (int i = 0; i < cant; i++)
    {
        fflush(stdin);
        printf("ingrese nombre del producto:\n");
        fgets(prod->nombre, 15, stdin);

        printf("ingrese precio del producto:\n");
        scanf("%f", &prod->precio);

        printf("ingrese cantidad vendida en el mes :\n");
        for (int j = 0; j < 12; j++)
        {
            printf("mes %d: ", j + 1);
            scanf("%d", &prod->cantVendidaxMes[j]);
        }

        fflush(stdin);
        printf("ingrese nombre del proveedor: \n");
        fgets(prod->proveedor.nombre, 15, stdin);

        printf("ingrese celular del vendedor:\n");
        scanf("%d", &prod->proveedor.cel);

        printf("ingrese dia:");
        scanf("%d", &prod->fecha.dia);

        printf("mes:");
        scanf("%d", &prod->fecha.mes);

        printf("anio: ");
        scanf("%d", &prod->fecha.anio);
        prod++;
    }
};

void mostrarDatos(producto prod[], int cant)
{
    for (int i = 0; i < cant; i++)
    {
        printf("----producto[%d]----\n", i + 1);
        printf("producto: %s", prod[i].nombre);
        printf("precio: %.2f\n", prod[i].precio);
        printf("cantidad vendida x mes:\n");
        for (int j = 0; j < 12; j++)
        {
            printf("mes %d: %d\n", j + 1, prod[i].cantVendidaxMes[j]);
        }

        printf("----proveedor----\n");
        printf("nombre: %s", prod[i].proveedor.nombre);
        printf("celular: %d\n", prod[i].proveedor.cel);
        printf("----fecha-----\n");
        printf("%d / %d / %d\n", prod[i].fecha.dia, prod[i].fecha.mes, prod[i].fecha.anio);
    }
}

void modificarPUnitario(producto *punt, int cant)
{
    producto *aux = punt;
    float precio;
    int opcion;
    printf("ingrese que producto necesita modificar el precio:\n");
    for (int i = 0; i < cant; i++)
    {
        printf("producto %d - %s", i + 1, aux->nombre);
        aux++;
    }
    aux = punt;
    scanf("%d", &opcion);
    for (int i = 0; i < cant; i++)
    {
        if (opcion == i + 1)
        {
            fflush(stdin);
            printf("ingrese nuevo precio: \n");
            scanf("%f", &precio);

            aux->precio = precio;
        }
        aux++;
    }
}

void montoTotal(producto *punt, int cant){
    producto *aux = punt;
    for (int i = 0; i < cant; i++)
    {
        float suma=0;
        for (int j = 0; j < 12; j++)
        {
            suma += aux->precio * aux->cantVendidaxMes[j];
        }
        printf("monto total vendido del producto %s: %.2f\n", aux->nombre, suma);
        aux++;
    }
}

void mayorVenta(producto *punt, int cant){
    producto *aux = punt;
    for (int i = 0; i < cant; i++)
    {
        int mayor = 0, mes;
        for (int j = 0; j < 12; j++)
        {
            if (aux->cantVendidaxMes[j] > mayor)
            {
                mayor = aux->cantVendidaxMes[j];
                mes = j+1;
            }
        }
        printf("la mayor venta se produjo en el mes %d con %d cantidades vendidas del producto %s", mes, mayor, aux->nombre);
        aux++;
    }
}