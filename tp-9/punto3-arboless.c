#include <stdio.h>
#include <stdlib.h>

struct cliente
{
    char razonS[20];
    char telefono[15];
} typedef tipocliente;

struct empleado
{
    char nombre[20];
    char apellido[20];
} typedef tipoEmpleado;

struct pedido
{
    tipoEmpleado empleado;
    tipocliente cliente;
    int cantidad;
} typedef tipoPedido;

struct tipoEspecie
{
    char especie[20];
    char categoria; // c: caduca - d: perenne - e: conifera - f:frutal
    char nombre[20];
} typedef tipoEspecie;

struct arbol
{
    tipoEspecie tEspecie;
    int stock;
    float precio;
    int cantPed;
    tipoPedido *pedido;
} typedef tArbol;

void cargarArbol(tArbol *arbol, int cant);
void mostrarDatos(tArbol *arbol, int cant);
void agregarPedidos(tArbol *arbol, int cant);

int main()
{
    tArbol *pArbol;
    int cant;
    printf("ingrese una cantidad de especies a cargar:\n ");
    scanf("%d", &cant);
    pArbol = (tArbol *)malloc(cant * sizeof(tArbol));
    cargarArbol(pArbol, cant);
    mostrarDatos(pArbol, cant);
    agregarPedidos(pArbol, cant);
    return 0;
}

void cargarArbol(tArbol *arbol, int cant)
{
    for (int i = 0; i < cant; i++)
    {
        fflush(stdin);
        printf("ingrese nombre cientifico de la especie\n");
        fgets(arbol->tEspecie.especie, 20, stdin);

        printf("ingrese una categoria:\n");
        printf("\tc: caduca - d: perenne - e: conifera - f:frutal\n");
        do
        {
            scanf("%c", &arbol->tEspecie.categoria);
        } while (arbol->tEspecie.categoria != 'c' && arbol->tEspecie.categoria != 'd' && arbol->tEspecie.categoria != 'e' && arbol->tEspecie.categoria != 'f');

        fflush(stdin);
        printf("ingrese nombre vulgar:\n");
        fgets(arbol->tEspecie.nombre, 20, stdin);

        fflush(stdin);
        printf("ingrese el stck:\n");
        scanf("%d", &arbol->stock);

        printf("ingrese el precio:\n");
        scanf("%f", &arbol->precio);

        arbol->cantPed = 0;
        arbol->pedido = NULL;
        arbol++;
        // printf("ingrese cantidad de pedidos:\n");
        // scanf("%d",&arbol->cantPed)

        // if (&arbol->cantPed > 0)
        // {
        //     arbol->pedido = (tipoPedido *)malloc( arbol->cantPed * sizeof(tipoPedido));
        //     for (int j = 0; j < count; j++)
        //     {
        //         printf("ingrese razon social del cliente\n");
        //         fgets(&arbol->pedido.cliente.razon, 20, stdin);

        //         printf("ingrese telefono del cliente\n");
        //         fgets(&arbol->pedido.cliente.telefono, 20, stdin);

        //         printf("ingrese nombre del vendedor:\n");
        //         fgets(&arbol->)
        //     }

        // }
    }
};

void mostrarDatos(tArbol *arbol, int cant)
{
    for (int i = 0; i < cant; i++)
    {
        printf("----arbol[%d]----\n", i + 1);
        printf("nombre cientifico: %s", arbol->tEspecie.especie);
        switch (arbol->tEspecie.categoria)
        {
        case 'c':
            printf("\tcategoria: C");
            break;
        case 'd':
            printf("categoria: D");
            break;
        case 'e':
            printf("categoria: E");
            break;
        case 'f':
            printf("categoria: F");
            break;
        default:
            break;
        }
        printf("\tnombre vulgar:%s", arbol->tEspecie.nombre);
        printf("\nprecio: %.2f", arbol->precio);
        printf("\nstock: %.2f\n", arbol->stock);
        if (arbol->pedido != NULL)
        {
            for (int j = 0; j < arbol->cantPed; j++)
            {
                printf("razon social del cliente: %s\n", arbol->pedido[j].cliente);
                printf("vendedor: %s\n", arbol->pedido[j].empleado);
                printf("cantidad: %d\n", arbol->pedido[j].cantidad);
            }
        }
        arbol++;
    }
}

void agregarPedidos(tArbol *arbol, int cant)
{
    int cantPed, opcion;
    do
    {
        printf("ingrese la especie para agregar pedido:\n");
        for (int i = 0; i < cant; i++)
        {
            printf("%d - %s . \n", i + 1, arbol->tEspecie.especie);
            arbol++;
        }
        scanf("%d", &opcion);
    } while (opcion < 1 || opcion > cant);

    int id = opcion - 1;
    arbol = arbol - cant;
    printf("ingrese la cantidad a encargar:\n");
    scanf("%d", &cantPed);

    if (cantPed <= arbol[id].stock)
    {
        for (int i = 0; i < cantPed; i++)
        {
            arbol[id].pedido = (tipoPedido*)malloc(sizeof(tipoPedido));
            fflush(stdin);
            printf("ingrese el razon social del cliente:\n ");
            fgets(arbol[id].pedido[i].cliente.razonS , 15 , stdin);
            
            printf("ingrese telefono del cliente:\n ");
            fgets(arbol[id].pedido[i].cliente.telefono , 15 , stdin);

            printf("ingrese el nombre del empleado:\n ");
            fgets(arbol[id].pedido[i].empleado.nombre , 15 , stdin);

            printf("ingrese cantidad de unidades a encargar\n");
            scanf("%d", &arbol[id].pedido[i].cantidad);

            printf("ingrese cantidad de unidades a encargar\n");
            scanf("%d", &arbol[id].pedido[i].cantidad);
        }
    }
};
