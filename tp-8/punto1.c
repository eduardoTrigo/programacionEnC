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
    int cantVendidaxMes;
    proveedor proveedor;
    fechaInicio fecha;
} typedef producto;

void cargarDatos(producto *prod, int cant);
void modificarPUnitario(producto *punt);
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

    // modificarPUnitario(p_prod);

    mostrarDatos(prod, cant);

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
    scanf("%d", &prod->cantVendidaxMes);

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
        printf("\tprecio: %.2f", prod[i].precio);
        printf("\tcantidad vendida en el mes: %d\n", prod[i].cantVendidaxMes);
        printf("----proveedor----\n");
        printf("nombre: %s", prod[i].proveedor.nombre);
        printf("\tcelular: %d\n", prod[i].proveedor.cel);
        printf("----fecha-----\n");
        printf("%d / %d / %d\n", prod[i].fecha.dia, prod[i].fecha.mes, prod[i].fecha.anio);
    }
}

void modificarPUnitario(producto *punt)
{
    float precio;
    fflush(stdin);
    printf("ingrese nuevo precio: \n");
    scanf("%f", &precio);

    punt->precio = precio;
}