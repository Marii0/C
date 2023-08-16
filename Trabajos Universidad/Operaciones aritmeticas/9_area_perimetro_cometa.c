#include <stdio.h>
#include <locale.h>
//a= ((D*d)/2)
//p= 2*(b+a)
int main()
{
    setlocale(LC_ALL,"");
    float Diago, diago, ladoA, ladob;

    printf("\"programa para sacar el perimetro y el área del cometa\"");
    printf("\n\nIntroduzca el valor de la diagonal mayor del cometa:");
    scanf ("%f", &Diago);
    printf("Introduzca el valor de la diagonal menor del cometa:");
    scanf ("%f", &diago);
    printf("Introduzca el valor del lado mayor del cometa:");
    scanf ("%f", &ladoA);
    printf("Introduzca el valor del lado menor del cometa:");
    scanf ("%f", &ladob);


    printf("\n\nEl área del cometa es: %.2f", ((Diago*diago)/2.0));
    printf("\nEl perimetro del cometa es: %.2f", ((ladoA+ladob)*2.0));
    return 0;
}
