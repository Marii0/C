#include <stdio.h>
#include <locale.h>
//a= l^2
//p= l*4
int main()
{
    setlocale(LC_ALL,"");
    float lado;

    printf("\"programa para sacar el perimetro y el �rea del cuadrado\"");
    printf("\n\nIntroduzca el valor del lado del cuadrado:");
    scanf ("%f", &lado);

    printf("El �rea del cuadrado es: %.2f", lado * lado);
    printf("\nEl perimetro del cuadrado es: %.2f", lado * 4);
    return 0;
}
