#include <stdio.h>
#include <locale.h>
//a= pi*r^2
//p= 2*pi*r
int main()
{
    setlocale(LC_ALL,"");
    float  radio;

    printf("\"programa para sacar el perimetro y el �rea del circulo\"");
    printf("\n\nIntroduzca el valor del radio del c�rculo:");
    scanf ("%f", &radio);

    printf("\n\nEl �rea del c�rculo es es: %.2f", (radio*radio)*3.1416);
    printf("\nEl perimetro del c�rculo: %.2f", (3.1416*radio)*2.0);
    return 0;
}
