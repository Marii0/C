#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"");

    double cantidad_inicial = 1000.00;
    double tasa_de_interes = 0.05;

    printf("%-6s%-27s\n","AÑO", "CANTIDAD SOBRE EL DEPÓSITO");
    for(int anio = 1; anio <= 10; anio++)
    {
        double cantidad_anio = cantidad_inicial*pow(1+tasa_de_interes, anio);
        printf ("%-6d%-25.2f\n", anio, cantidad_anio);
    }
    return 0;
}
