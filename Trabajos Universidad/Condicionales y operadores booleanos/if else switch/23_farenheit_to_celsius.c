#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    float numerof, celsius;

        printf("Introduzca los grados Farenheit que desea convertir a Celsius:");
        scanf("%f", &numerof);

        celsius = ((numerof - 32.00) / 1.80);

        printf("\nLa temperatura en grados Celsius es: %.2f\n", celsius);


    return 0;
}
