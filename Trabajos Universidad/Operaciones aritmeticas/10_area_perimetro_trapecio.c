#include <stdio.h>
#include <locale.h>
//a= ((B+b)*h) /2
//p= B+b+a+c
int main()
{
    setlocale(LC_ALL,"");
    float Base, bame, ladoa, altura, ladob;

    printf("\"programa para sacar el perimetro y el área del trapecio\"");
    printf("\n\nIntroduzca el valor de la base mayor del trapecio:");
    scanf ("%f", &Base);
    printf("Introduzca el valor de la base menor del trapecio:");
    scanf ("%f", &bame);
    printf("Introduzca el valor del lado a del trapecio:");
    scanf ("%f", &ladoa);
    printf("Introduzca el valor del lado a del trapecio:");
    scanf ("%f", &ladob);
    printf("Introduzca el valor de la altura del trapecio:");
    scanf ("%f", &altura);


    printf("\n\nEl área del trapecio es: %.2f", (((Base+bame)*altura)/2.0));
    printf("\nEl perimetro del trapecio es: %.2f", Base+bame+ladoa+ladob);
    return 0;
}
