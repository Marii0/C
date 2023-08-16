#include <stdio.h>
#include <locale.h>
//a= pi*r^2
//p= 2*pi*r
int main()
{
    setlocale(LC_ALL,"");
    float  radio;

    printf("\"programa para sacar el perimetro y el área del circulo\"");
    printf("\n\nIntroduzca el valor del radio del círculo:");
    scanf ("%f", &radio);

    printf("\n\nEl área del círculo es es: %.2f", (radio*radio)*3.1416);
    printf("\nEl perimetro del círculo: %.2f", (3.1416*radio)*2.0);
    return 0;
}
