#include <stdio.h>
#include <locale.h>
//a= (per*a)/2
//p= n*lado
int main()
{
    setlocale(LC_ALL,"");
     float  lado, apo, numero, perimetro;

    printf("\"programa para sacar el perimetro y el área del poligono regular\"");
    printf("\n\nIntroduzca el valor del lado del poligono regular:");
    scanf ("%f", &lado);
    printf("Introduzca el valor del apotema del poligono regular:");
    scanf ("%f", &apo);
    printf("Introduzca el numero de lados del poligono regular:");
    scanf ("%f", &numero);

    perimetro = numero*lado;

    printf("\n\nEl área del poligono regular es: %.2f", (perimetro*apo)/2.0);
    printf("\nEl perimetro del poligono es: %.2f", perimetro);
    return 0;
}
