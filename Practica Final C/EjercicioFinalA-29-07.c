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
void ingresoDiario(int fabricaElectrodomesticos[PRODUCTO][PERIODO]);
void ingresoSemanal(int fabricaElectrodomesticos[PRODUCTO][PERIODO]);
void ingresoMensual(int fabricaElectrodomesticos[PRODUCTO][PERIODO]);
void calcularMayorMenor(int fabricaElectrodomesticos[PRODUCTO][PERIODO]);

void main()
{
    // Declaracion de arreglos
    int fabricaElectrodomesticos[PRODUCTO][PERIODO];

    ingresoFabrica(fabricaElectrodomesticos);

    calcularMayorMenor(fabricaElectrodomesticos);
}

// Definicion de funciones
void ingresoFabrica(int fabricaElectrodomesticos[PRODUCTO][PERIODO])
{
    int i = 0;
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
        do
        {
            switch (periodos)
            {
            case 'D':
                ingresoDiario(fabricaElectrodomesticos);

                break;
            case 'S':
                ingresoSemanal(fabricaElectrodomesticos);

                break;
            case 'M':
                ingresoMensual(fabricaElectrodomesticos);
                break;
            case 'Q':
                return;
            default:
                printf("Periodo invalido\n");
                break;
            }
        } while (periodos != 'D' && periodos != 'M' && periodos != 'S' && periodos != 'Q');

        i++;
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
    return;
}
void ingresoDiario(int fabricaElectrodomesticos[PRODUCTO][PERIODO])
{
    int electrodomestico;
    int i = 0;
    int refrigeradores, lavadoras, secadoras, microondas, televisores, aspiradoras, lavavajillas, hornos, licuadoras, ventiladores;

    do
    {
        printf("\tINGRESO DIARIO\n");
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
            fabricaElectrodomesticos[0][0] = refrigeradores;
            
            break;
        case 2:
            printf("Ingrese la cantidad de lavadoras: ");
            scanf("%d", &lavadoras);
            fabricaElectrodomesticos[1][0] = lavadoras;
            break;
        case 3:
            printf("Ingrese la cantidad de secadoras: ");
            scanf("%d", &secadoras);
            fabricaElectrodomesticos[2][0] = secadoras;
            break;
        case 4:
            printf("Ingrese la cantidad de microondas: ");
            scanf("%d", &microondas);
            fabricaElectrodomesticos[3][0] = microondas;
            break;
        case 5:
            printf("Ingrese la cantidad de televisores: ");
            scanf("%d", &televisores);
            fabricaElectrodomesticos[4][0] = televisores;
            break;
        case 6:
            printf("Ingrese la cantidad de aspiradoras: ");
            scanf("%d", &aspiradoras);
            fabricaElectrodomesticos[5][0] = aspiradoras;
            break;
        case 7:
            printf("Ingrese la cantidad de lavavajillas: ");
            scanf("%d", &lavavajillas);
            fabricaElectrodomesticos[6][0] = lavavajillas;
            break;
        case 8:
            printf("Ingrese la cantidad de hornos: ");
            scanf("%d", &hornos);
            fabricaElectrodomesticos[7][0] = hornos;
            break;
        case 9:
            printf("Ingrese la cantidad de licuadoras: ");
            scanf("%d", &licuadoras);
            fabricaElectrodomesticos[8][0] = licuadoras;
            break;
        case 10:
            printf("Ingrese la cantidad de ventiladores: ");
            scanf("%d", &ventiladores);
            fabricaElectrodomesticos[9][0] = ventiladores;
            break;
        case 0:
            printf("Gracias por utilizar el programa.\n");
            break;
        default:
            printf("Opcion invalida");
            break;
        }
        i++;
        do
        {
            system("pause");
            system("cls");
            printf("\tINGRESO DIARIO\n");
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
    }
}

void ingresoSemanal(int fabricaElectrodomesticos[PRODUCTO][PERIODO])
{
    int electrodomestico;
    int i = 0;
    int refrigeradores, lavadoras, secadoras, microondas, televisores, aspiradoras, lavavajillas, hornos, licuadoras, ventiladores;

    do
    {
        system("cls");
        printf("\tINGRESO SEMANAL\n");
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
            fabricaElectrodomesticos[0][1] = refrigeradores;
            break;
        case 2:
            printf("Ingrese la cantidad de lavadoras: ");
            scanf("%d", &lavadoras);
            fabricaElectrodomesticos[1][1] = lavadoras;
            break;
        case 3:
            printf("Ingrese la cantidad de secadoras: ");
            scanf("%d", &secadoras);
            fabricaElectrodomesticos[2][1] = secadoras;
            break;
        case 4:
            printf("Ingrese la cantidad de microondas: ");
            scanf("%d", &microondas);
            fabricaElectrodomesticos[3][1] = microondas;
            break;
        case 5:
            printf("Ingrese la cantidad de televisores: ");
            scanf("%d", &televisores);
            fabricaElectrodomesticos[4][1] = televisores;
            break;
        case 6:
            printf("Ingrese la cantidad de aspiradoras: ");
            scanf("%d", &aspiradoras);
            fabricaElectrodomesticos[5][1] = aspiradoras;
            break;
        case 7:
            printf("Ingrese la cantidad de lavavajillas: ");
            scanf("%d", &lavavajillas);
            fabricaElectrodomesticos[6][1] = lavavajillas;
            break;
        case 8:
            printf("Ingrese la cantidad de hornos: ");
            scanf("%d", &hornos);
            fabricaElectrodomesticos[7][1] = hornos;
            break;
        case 9:
            printf("Ingrese la cantidad de licuadoras: ");
            scanf("%d", &licuadoras);
            fabricaElectrodomesticos[8][1] = licuadoras;
            break;
        case 10:
            printf("Ingrese la cantidad de ventiladores: ");
            scanf("%d", &ventiladores);
            fabricaElectrodomesticos[9][1] = ventiladores;
            break;
        case 0:
            printf("Gracias por utilizar el programa.\n");
            break;
        default:
            printf("Opcion invalida");
            break;
        }
        i++;
        do
        {
            printf("\tINGRESO SEMANAL\n");
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
        system("pause");
        system("cls");
    }
}
void ingresoMensual(int fabricaElectrodomesticos[PRODUCTO][PERIODO])
{
    int electrodomestico;
    int i = 0;
    int refrigeradores, lavadoras, secadoras, microondas, televisores, aspiradoras, lavavajillas, hornos, licuadoras, ventiladores;

    do
    {
        printf("\tINGRESO MENSUAL\n");
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
    system("pause");
    system("cls");

    while (i < CANT && electrodomestico != 0)
    {
        switch (electrodomestico)
        {
        case 1:
            printf("Ingrese la cantidad de refrigeradores: ");
            scanf("%d", &refrigeradores);
            fabricaElectrodomesticos[0][2] = refrigeradores;
            break;
        case 2:
            printf("Ingrese la cantidad de lavadoras: ");
            scanf("%d", &lavadoras);
            fabricaElectrodomesticos[1][2] = lavadoras;
            break;
        case 3:
            printf("Ingrese la cantidad de secadoras: ");
            scanf("%d", &secadoras);
            fabricaElectrodomesticos[2][2] = secadoras;
            break;
        case 4:
            printf("Ingrese la cantidad de microondas: ");
            scanf("%d", &microondas);
            fabricaElectrodomesticos[3][2] = microondas;
            break;
        case 5:
            printf("Ingrese la cantidad de televisores: ");
            scanf("%d", &televisores);
            fabricaElectrodomesticos[4][2] = televisores;
            break;
        case 6:
            printf("Ingrese la cantidad de aspiradoras: ");
            scanf("%d", &aspiradoras);
            fabricaElectrodomesticos[5][2] = aspiradoras;
            break;
        case 7:
            printf("Ingrese la cantidad de lavavajillas: ");
            scanf("%d", &lavavajillas);
            fabricaElectrodomesticos[6][2] = lavavajillas;
            break;
        case 8:
            printf("Ingrese la cantidad de hornos: ");
            scanf("%d", &hornos);
            fabricaElectrodomesticos[7][2] = hornos;
            break;
        case 9:
            printf("Ingrese la cantidad de licuadoras: ");
            scanf("%d", &licuadoras);
            fabricaElectrodomesticos[8][2] = licuadoras;
            break;
        case 10:
            printf("Ingrese la cantidad de ventiladores: ");
            scanf("%d", &ventiladores);
            fabricaElectrodomesticos[9][2] = ventiladores;
            break;
        case 0:
            printf("Gracias por utilizar el programa.\n");
            break;
        default:
            printf("Opcion invalida");
            break;
        }
        i++;
        do
        {
            printf("\tINGRESO MENSUAL\n");
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
            printf("Ingrese el electrodomestico 1 - 10: ");
            scanf("%d", &electrodomestico);
        } while (electrodomestico < 1 && electrodomestico > 10);
        system("pause");
        system("cls");
    }
}
void calcularMayorMenor(int fabricaElectrodomesticos[PRODUCTO][PERIODO])
{
    int mayor = -1, menor = 1000000; // Inicializar menor con un valor grande
    int tipoMayor = -1, tipoMenor = -1; //Inicialización de mayor y menor: mayor se inicializa en -1 para asegurar que cualquier valor positivo lo supere. menor se inicializa en 1000000 como un valor alto arbitrario.
    char rta;

    do
    {
        printf("Electrodoméstico con mayor y menor producción en el periodo.\n");
        printf("D - Diario\n");
        printf("S - Semanal\n");
        printf("M - Mensual\n");
        printf("Q - Quit\n");
        printf("Ingrese el periodo que quiera calcular: ");
        scanf(" %c", &rta);
    } while (rta != 'D' && rta != 'M' && rta != 'S' && rta != 'Q');

    if (rta == 'Q')
        return;

    int columna;
    if (rta == 'D')
        columna = 0;
    else if (rta == 'S')
        columna = 1;
    else
        columna = 2;

    for (int i = 0; i < PRODUCTO; i++)
    {
        if (fabricaElectrodomesticos[i][columna] > mayor)
        {
            mayor = fabricaElectrodomesticos[i][columna];
            tipoMayor = i;
        }
        if (fabricaElectrodomesticos[i][columna] < menor)
        {
            menor = fabricaElectrodomesticos[i][columna];
            tipoMenor = i;
        }
    }

    if (tipoMayor != -1 && tipoMenor != -1)
    {
        printf("Electrodomestico con mayor produccion es: %d.\n", tipoMayor + 1);
        printf("Electrodomestico con menor produccion es: %d.\n", tipoMenor + 1);
    }
    else
    {
        printf("No hay datos suficientes para calcular la producción.\n");
    }
    return;
}