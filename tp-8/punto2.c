#include <stdio.h>
#include <stdlib.h>

struct dataGuia
{
    char apellido[15];
    char nombre[15];
    int dni;
} typedef dataGuia;

struct tipoFecha
{
    int dia;
    int mes;
    int anio;
} typedef tipoFecha;

struct datosViaje
{
    char destino[15];
    dataGuia guia;
    tipoFecha salida;
    tipoFecha regreso;
    float costo;
    int cantHabitaciones;
    int *habitaciones;
} typedef datosViaje;

datosViaje cargarDatos();
void mostrarViaje(datosViaje data);
int verificacionFecha(tipoFecha data);
datosViaje actializarCosto(datosViaje dato);
void pisoHabitaciones(datosViaje dato);

int main()
{
    datosViaje viaje;

    viaje = cargarDatos();
    mostrarViaje(viaje);

    viaje = actializarCosto(viaje);
    printf("costo actualizado: %.2f\n", viaje.costo);
    pisoHabitaciones(viaje);
    return 0;
}

datosViaje cargarDatos()
{
    datosViaje viaje;
    printf("ingrese un destino: ");
    fgets(viaje.destino, 15, stdin);

    fflush(stdin);
    printf("ingrese datos del guia: \n");
    printf("ingrese apellido del guia: \n");
    fgets(viaje.guia.apellido, 15, stdin);

    printf("ingrese nombre del guia: \n");
    fgets(viaje.guia.nombre, 15, stdin);

    printf("ingrese dni del guia: \n");
    scanf("%d", &viaje.guia.dni);

    do
    {
        printf("ingrese fecha de salida: \n");
        scanf("%d %d %d", &viaje.salida.dia, &viaje.salida.mes, &viaje.salida.anio);
    } while (verificacionFecha(viaje.salida));

    do
    {
        printf("ingrese fecha de regreso: \n");
        scanf("%d %d %d", &viaje.regreso.dia, &viaje.regreso.mes, &viaje.regreso.anio);
    } while (verificacionFecha(viaje.regreso));

    printf("ingrese cantidad de habitaciones: \n");
    scanf("%d", &viaje.cantHabitaciones);

    printf("ingrese el costo del viaje: \n");
    scanf("%f", &viaje.costo);

    viaje.habitaciones = malloc(viaje.cantHabitaciones * sizeof(int));
    int numero, existe;
    for (int i = 0; i < viaje.cantHabitaciones; i++)
    {
        do
        {
            existe = 0;
            numero = rand() % 301 + 100;
            for (int j = 0; j < viaje.cantHabitaciones; j++)
            {
                if (numero == viaje.habitaciones[j])
                {
                    existe = 1;
                }
            }
        } while (existe);
        viaje.habitaciones[i] = numero;
    }
    return viaje;
}

int verificacionFecha(tipoFecha data)
{
    int dias[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (data.anio % 4 == 0 && data.anio % 100 != 0 || data.anio % 400)
    {
        dias[2] = 29;
    }

    if (data.anio >= 2023 && data.anio <= 2025)
    {
        if (data.mes >= 0 && data.mes <= 0)
        {
            if (data.dia >= 0 && data.dia <= dias[data.mes])
            {
                return 1;
            }
        }
    }
    return 0;
}

void mostrarViaje(datosViaje viaje)
{
    printf("destino : %s", viaje.destino);
    printf("fecha de salida : %d / %d / %d\n", viaje.salida.dia, viaje.salida.mes, viaje.salida.anio);
    printf("fecha de Regreso : %d / %d / %d\n", viaje.regreso.dia, viaje.regreso.mes, viaje.regreso.anio);
    printf("%d habitaciones reservadas:\n", viaje.cantHabitaciones);
    for (int i = 0; i < viaje.cantHabitaciones; i++)
    {
        printf("\thabitacion: %d\n", viaje.habitaciones[i]);
    }
    printf("costo del viaje : %.2f\n", viaje.costo);
}

datosViaje actializarCosto(datosViaje dato)
{
    int porcentaje;
    printf("ingrese un porcentaje de aumento\n");
    scanf("%d", &porcentaje);

    dato.costo = dato.costo + dato.costo * porcentaje / 100;

    return dato;
}

void pisoHabitaciones(datosViaje dato)
{
    printf("habitaciones\n");
    for (int i = 0; i < dato.cantHabitaciones; i++)
    {
        int numHab, numPiso;
        numPiso = dato.habitaciones[i] / 100;
        numHab = dato.habitaciones[i] % 100;
        printf("\tpiso: %d -- habitacion: %d\n", numPiso , numHab);
    }
}