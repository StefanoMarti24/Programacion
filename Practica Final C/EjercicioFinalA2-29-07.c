/*En una fábrica de electrodomésticos se producen diez tipos de productos diferentes:
Refrigeradores, Lavadoras, Secadoras, Microondas, Televisores, Aspiradoras, Lavavajillas, Hornos, Licuadoras y Ventiladores.
La fábrica opera durante todo el año y se requiere ingresar los datos de producción para un período específico (puede ser Diario, Semanal o Mensual).
A partir de los datos ingresados, Período, tipo electrodoméstico (numerarlos de 1 a 10), fabricaElectrodomesticos producida.

Se deben calcular los siguientes seis requerimientos por separado:
1. El electrodoméstico que tuvo la mayor y menor producción en el período seleccionado.
2. El total de unidades producidas para cada tipo de electrodoméstico.
3. El promedio de producción diaria, semanal o mensual para cada tipo de electrodoméstico.
*/

#include <stdio.h>
#include <stdlib.h>

#define CANT 20     // fabricaElectrodomesticos de pedidos
#define PRODUCTO 10 // Fila = Electrodomesticos
#define PERIODO 3   // Columna 0 = Diario
                    // Columna 1 = Semanal
                    // Columna 2 = Mensual

// Declaracion de funciones
void ingresoFabrica(int fabricaElectrodomesticos[PRODUCTO][PERIODO]);
void mostrarDatos(int fabricaElectromedesticos[PRODUCTO][PERIODO]);
// void calcularMayorMenor(int fabricaElectrodomesticos[PRODUCTO][PERIODO]);

void main()
{
    // Declaracion de arreglos
    int fabricaElectrodomesticos[PRODUCTO][PERIODO];

    ingresoFabrica(fabricaElectrodomesticos);
    mostrarDatos(fabricaElectrodomesticos);

    // calcularMayorMenor(fabricaElectrodomesticos);

    return;
}

// Definicion de funciones
void ingresoFabrica(int fabricaElectrodomesticos[PRODUCTO][PERIODO])
{
    int acumR = 0, acumL, acumS;
    int electrodomestico;
    int refrigeradores, lavadoras, secadoras, microondas, televisores, aspiradoras, lavavajillas, hornos, licuadoras, ventiladores;
    int i = 0, columna;
    char periodos; // Variables de trabajo

    do
    {
        printf("\t PERIODOS\n");
        printf("D - Diario\n");
        printf("S - Semanal\n");
        printf("M - Mensual\n");
        printf("Q - Quit\n");
        printf("Ingrese el periodo de trabajo: ");
        scanf(" %c", &periodos);
    } while (periodos != 'D' && periodos != 'M' && periodos != 'S' && periodos != 'Q');

    system("cls");
    while (i < PRODUCTO || periodos == 'D' || periodos == 'M' || periodos == 'S' || periodos != 'Q')
    {
        // Ingreso switch de electrodomesticos
        system("pause");
        system("cls");
        do
        {
            if (periodos == 'Q')
            {
                printf("El total de unidades producidas de los refrigeradores son: %d", acumR);
            }
            if (periodos == 'D')
            {
                columna = 0;
                printf("\t PERIODO DIARIO\n");
            }
            else if (periodos == 'S')
            {
                columna = 1;
                printf("\t PERIODO SEMANAL\n");
            }
            else
            {
                columna = 2;
                printf("\t PERIODO MENSUAL\n");
            }
            printf("1. Refrigeradores\n");
            printf("2. Lavadoras\n");
            printf("3. Secadoras\n");
            printf("4. Microondas\n");
            printf("5. Televisores\n");
            printf("6. Aspiradoras\n");
            printf("7. Lavavajillas\n");
            printf("8. Hornos\n");
            printf("9. Licuadoras\n");
            printf("10. Ventiladores\n");
            printf("0. Salir\n");
            printf("Ingrese el electrodomestico 1 - 10: ");
            scanf("%d", &electrodomestico);
        } while (electrodomestico < 1 && electrodomestico > 10);
        while (i < PRODUCTO && electrodomestico != 0)
        {

            switch (electrodomestico)
            {
            case 1:
                printf("Ingrese la cantidad de refrigeradores: ");
                scanf("%d", &refrigeradores);
                fabricaElectrodomesticos[0][columna] = refrigeradores;
                acumR += refrigeradores;
                break;
            case 2:
                printf("Ingrese la cantidad de lavadoras: ");
                scanf("%d", &lavadoras);
                fabricaElectrodomesticos[1][columna] = lavadoras;
                break;
            case 3:
                printf("Ingrese la cantidad de secadoras: ");
                scanf("%d", &secadoras);
                fabricaElectrodomesticos[2][columna] = secadoras;
                break;
            case 4:
                printf("Ingrese la cantidad de microondas: ");
                scanf("%d", &microondas);
                fabricaElectrodomesticos[3][columna] = microondas;
                break;
            case 5:
                printf("Ingrese la cantidad de televisores: ");
                scanf("%d", &televisores);
                fabricaElectrodomesticos[4][columna] = televisores;
                break;
            case 6:
                printf("Ingrese la cantidad de aspiradoras: ");
                scanf("%d", &aspiradoras);
                fabricaElectrodomesticos[5][columna] = aspiradoras;
                break;
            case 7:
                printf("Ingrese la cantidad de lavavajillas: ");
                scanf("%d", &lavavajillas);
                fabricaElectrodomesticos[6][columna] = lavavajillas;
                break;
            case 8:
                printf("Ingrese la cantidad de hornos: ");
                scanf("%d", &hornos);
                fabricaElectrodomesticos[7][columna] = hornos;
                break;
            case 9:
                printf("Ingrese la cantidad de licuadoras: ");
                scanf("%d", &licuadoras);
                fabricaElectrodomesticos[8][columna] = licuadoras;
                break;
            case 10:
                printf("Ingrese la cantidad de ventiladores: ");
                scanf("%d", &ventiladores);
                fabricaElectrodomesticos[9][columna] = ventiladores;
                break;
            case 0:
                printf("Gracias por utilizar el programa.\n");
                break;
            default:
                printf("Opcion invalida");
                break;
            }

            system("pause");
            system("cls");
            do
            {
                if (periodos == 'Q')
                {
                    printf("El total de unidades producidas de los refrigeradores son: %d", acumR);
                }
                if (periodos == 'D')
                {
                    columna = 0;
                    printf("\t PERIODO DIARIO\n");
                }
                else if (periodos == 'S')
                {
                    columna = 1;
                    printf("\t PERIODO SEMANAL\n");
                }
                else
                {
                    columna = 2;
                    printf("\t PERIODO MENSUAL\n");
                }
                printf("1. Refrigeradores\n");
                printf("2. Lavadoras\n");
                printf("3. Secadoras\n");
                printf("4. Microondas\n");
                printf("5. Televisores\n");
                printf("6. Aspiradoras\n");
                printf("7. Lavavajillas\n");
                printf("8. Hornos\n");
                printf("9. Licuadoras\n");
                printf("10. Ventiladores\n");
                printf("0. Salir\n");
                printf("Ingrese el electrodomestico 1 - 10: ");
                scanf("%d", &electrodomestico);
            } while (electrodomestico < 1 && electrodomestico > 10);
            i++;
            // system("cls");
            system("pause");
            system("cls");
            do
            {
                printf("\t PERIODOS\n");
                printf("D - Diario\n");
                printf("S - Semanal\n");
                printf("M - Mensual\n");
                printf("Q - Quit\n");
                printf("Ingrese el periodo de trabajo: ");
                scanf(" %c", &periodos);
            } while (periodos != 'D' && periodos != 'M' && periodos != 'S' && periodos != 'Q');
            system("cls");
        }
        system("pause");
    }
}
void mostrarDatos(int fabricaElectrodomesticos[PRODUCTO][PERIODO]) {}