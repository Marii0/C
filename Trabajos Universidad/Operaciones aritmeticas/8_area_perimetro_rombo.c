#include <stdio.h>
#include <locale.h>
//a= (D*d) /2
//p= l*4
int main()
{
    setlocale(LC_ALL,"");
    float Dia, dia, lado;

    printf("\"programa para sacar el perimetro y el área del rombo\"");
    printf("\n\nIntroduzca el valor de la diagonal mayor del rombo:");
    scanf ("%f", &Dia);
    printf("Introduzca el valor de la diagonal menor del rombo:");
    scanf ("%f", &dia);
    printf("Introduzca el valor del lado del rombo:");
    scanf ("%f", &lado);

    printf("\n\nEl área del rombo es: %.2f", (Dia * dia)/2.0);
    printf("\nEl perimetro del rombo es: %.2f", lado*4.0);
    return 0;
}
