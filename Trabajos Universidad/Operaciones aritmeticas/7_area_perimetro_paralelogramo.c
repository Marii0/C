#include <stdio.h>
#include <locale.h>
//a= h*b
//p= (a+b)*2
int main()
{
    setlocale(LC_ALL,"");
    float base, altura, lado;

    printf("\"programa para sacar el perimetro y el área del paralelogramo\"");
    printf("\n\nIntroduzca el valor de la base del paralelogramo:");
    scanf ("%f", &base);
    printf("Introduzca el valor de la altura del paralelogramo:");
    scanf ("%f", &altura);
    printf("Introduzca el valor del lado del paralelogramo:");
    scanf ("%f", &lado);

    printf("\n\nEl área del paralelogramo es: %.2f", base * altura);
    printf("\nEl perimetro del paralelogramo es: %.2f", (base+lado)*2.0);
    return 0;
}
