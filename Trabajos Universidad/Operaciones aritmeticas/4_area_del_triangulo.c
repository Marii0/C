#include <stdio.h>
#include <locale.h>
//a= bxh / 2
int main()
{
    setlocale(LC_ALL,"");
    float base, altura;
    printf("progrma para sacar el �rea del triangulo");
    printf("\n\nIntroduzca el valor de la base:");
    scanf ("%f", &base);
    printf("Introduzca el valor de la altura:");
    scanf ("%f", &altura);

    printf("El area del tri�ngulo es: %.2f", (base*altura)/2.0);
    return 0;
}
