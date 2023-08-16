#include <stdio.h>
#include <locale.h>
//a= a*b
//p= (a+b)*2
int main()
{
    setlocale(LC_ALL,"");
    float base, altura;

    printf("\"programa para sacar el perimetro y el área del rectangulo\"");
    printf("\n\nIntroduzca el valor de la base del rectangulo:");
    scanf ("%f", &base);
    printf("Introduzca el valor de la altura del rectangulo:");
    scanf ("%f", &altura);

    printf("\n\nEl área del rectangulo es: %.2f", base * altura);
    printf("\nEl perimetro del rectangulo es: %.2f", (base+altura)*2.0);
    return 0;
}
