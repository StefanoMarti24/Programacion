/*
// En una fábrica de ventiladores se trabaja en 3 turnos: Mañana, Tarde y Noche, todos los días
// laborables.
De  un  determinado  mes,  se  conoce  la  cantidad  de  días  laborables  que  hubo  y  de  cada  día
laborable del mismo se tiene, sin orden alguno, las siguientes ternas de datos: número del día,
turno y cantidad de ventiladores producidos.(5 dias habiles, 3 turnos = 15 ternas)
// Se pide procesar la información correspondiente a un determinado mes para conocer:
//     ● En qué día y en qué turno se produjeron más ventiladores.
//     ● En qué día y en qué turno se hicieron menos ventiladores.
// Tener en cuenta que es necesario validar la consistencia del número de día (valor entero que
// pertenezca al intervalo [1, 31]) y la codificación del turno (letras M, T o N).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FI 31 // Las filas son los 31 dias del mes
#define CO 3  // 3 columnas, Columna 0 : Dias
              //              Columna 1 : Turnos
              //              Columna 2 : Ventiladores

// Defino las funciones

void ingresoDatos(int dias[FI][CO], int turno[FI][CO], int ventiladores[FI][CO]);
int mayorTurno(int dias[FI][CO], int turno[FI][CO], int ventiladores[FI][CO]);
int menorTurno(int dias[FI][CO], int turno[FI][CO], int ventiladores[FI][CO]);
void mostrarDatos(int dias[FI][CO], int turno[FI][CO], int ventiladores[FI][CO]);

void main()
{
    int dias[FI][CO], turno[FI][CO], ventiladores[FI][CO]; // Variables de trabajo
    int max, min;

    // invoco funciones
    ingresoDatos(dias, turno, ventiladores);
    mayorTurno(dias, turno, ventiladores);
    menorTurno(dias, turno, ventiladores);
    mostrarDatos(dias, turno, ventiladores);
}

// Declaracion de funcion Ingreso de Datos
void ingresoDatos(int dias[FI][CO], int turno[FI][CO], int ventiladores[FI][CO])
{
    int i = 0;
    int dia, prodVentilador;
    char turnos;

    do
    {
        printf("Ingrese el dia (Dia 1-31 / 0 - Salir): ");
        scanf("%d", &dia);
    } while (dia < 0 && dia > 31);
    dias[i][0] = dia;

    while (i < FI && dia != 0)
    {
        do
        {
            printf("Ingrese el turno: (M = Mañana/ T = Tarde/ N = Noche): ");
            scanf(" %c", &turnos);
        } while (turnos != 'M' && turnos != 'T' && turnos != 'N');
        turno[i][1] = turnos;

        do
        {
            printf("Ingrese la cantidad de ventiladores que se producieron (0 para salir): ");
            scanf("%d", &prodVentilador);
        } while (prodVentilador < 0);
        ventiladores[i][2] = prodVentilador;

        i++; // incrementa el contador para el proximo pedido

        do
        {
            printf("Ingrese el dia (Dia 1-31 / 0 - Salir): ");
            scanf("%d", &dia);
        } while (dia < 0 && dia > 31);
        dias[i][0] = dia;
    }
    return;
}
// Mostrar ingreso de datos
void mostrarDatos(int dias[FI][CO], int turno[FI][CO], int ventiladores[FI][CO])
{
    int i = 0;
    printf("\t Registro de dias");
    while (i < FI && dias[i][0] != 0)
    {
        printf("\n El dia %d, en el turno %c se produjeron %d ventiladores", dias[i][0], turno[i][1], ventiladores[i][2]);
        i++;
    }

}

// Declaracion de la funcion para sacar el mayor turno
int mayorTurno(int dias[FI][CO], int turno[FI][CO], int ventiladores[FI][CO])
{
    system("pause");
    system("cls");
    int maxDia = 0, maxTurno = 0;
    int i = 0;
    int max = 0;
    while (i < FI && dias[i][0] != 0)
    {
        if (ventiladores[i][2] > max)
        {
            max = ventiladores[i][2];
            maxDia = dias[i][0];
            maxTurno = turno[i][1];
        }
        i++;
    }
    printf("\t Mayor Turno");
    printf("\nEl dia %d en el turno %c se produjeron mas ventiladores. Cantidad: %d\n", maxDia, maxTurno,max);
    return 0;
}
// Declaracion de la funcion para sacar el menor turno
int menorTurno(int dias[FI][CO], int turno[FI][CO], int ventiladores[FI][CO])
{
    int minDia = 0, minTurno = 0;
    int i = 0;
    int min;
    while (i < FI && dias[i][0] != 0)
    {
        if (ventiladores[i][2] < min)
        {
            min = ventiladores[i][2];
            minDia = dias[i][0];
            minTurno = turno[i][1];
        }
        i++;
    }
    printf("\t Menor Turno");
    printf("\n El dia %d en el turno %c se produjeron menos ventiladores. Cantidad: %d\n", minDia, minTurno, min);
    return 0;
}
