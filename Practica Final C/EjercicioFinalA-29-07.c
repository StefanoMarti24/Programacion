/*En una fábrica de electrodomésticos se producen diez tipos de productos diferentes:
Refrigeradores, Lavadoras, Secadoras, Microondas, Televisores, Aspiradoras, Lavavajillas, Hornos, Licuadoras y Ventiladores.
La fábrica opera durante todo el año y se requiere ingresar los datos de producción para un período específico (puede ser Diario, Semanal o Mensual).
A partir de los datos ingresados, Período, tipo electrodoméstico (numerarlos de 1 a 10), cantidad producida.

Se deben calcular los siguientes seis requerimientos por separado:
1. El electrodoméstico que tuvo la mayor y menor producción en el período seleccionado.
2. El total de unidades producidas para cada tipo de electrodoméstico.
3. El promedio de producción diaria, semanal o mensual para cada tipo de electrodoméstico.
*/

#include <stdio.h>
#include <stdlib.h>

#define PRODUCTO 10 // Fila = Electrodomesticos
#define PERIODO 3   // Columna 0 = Diario
                    // Columna 1 = Semanal
                    // Columna 2 = Mensual

// Declaracion de funciones
void ingresoFabrica(int electro[PRODUCTO][PERIODO], int pd[PRODUCTO][PERIODO], int cantidad[PRODUCTO][PERIODO]);

void main()
{
    // Declaracion de arreglos
    int electro[PRODUCTO][PERIODO], pd[PRODUCTO][PERIODO], cantidad[PRODUCTO][PERIODO];

    ingresoFabrica(electro, pd, cantidad);
}

// Definicion de funciones
void ingresoFabrica(int electro[PRODUCTO][PERIODO], int pd[PRODUCTO][PERIODO], int cantidad[PRODUCTO][PERIODO])
{
    int refrigeradores, lavadoras, secadoras, microondas, televesiores, aspiradoras, lavavajillas, hornos, licuadoras, ventiladores; 
    char periodos; // Variables de trabajo
    int i = 0;

    printf("Ingrese el perido de trabajo\n");
    printf("D = Diario\n");
    printf("S = Semanal\n");
    printf("M = Mensual\n");
    scanf(" %c", &periodos);

    switch (periodos)
    {
    case 'D': pd[i][0] = periodos; break;
    case 'S': pd[i][1] = periodos; break;
    case 'M': pd[i][2] = periodos; break;
    default:
        printf("Periodo invalido\n");
    break;
    }
    // do
    // {
    //     printf("Ingrese el periodo: (D - Diario / S - Semanal / M - Mensual)");
    //     scanf("% c", &periodos);
    // } while (periodos != 'D' && periodos != 'S' && periodos != 'M');

    // if (periodos == 'D')
    // {
    //     pd[i][0] = periodos;
    // }
    // else if (periodos == 'S')
    // {
    //     pd[i][1] = periodos;
    // }
    // else if (periodos == 'M')
    // {
    //     pd[i][2] = periodos;
    // }

    // while (i < PRODUCTO && periodos != 'D' && periodos != 'S' && periodos != 'M')
    // {
    //     do
    //     {
    //         printf("")
    //     } while (refrigeradores < 0);
    // }
    
    system("pause");
}