#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    float numeroc, fahrenheit;

    printf("Escribe los grados Celsius que desea convertir a Fahrenheit:");
    scanf("%f", &numeroc);

        fahrenheit = ((numeroc * 1.80) + 32.00);

    printf("\nLa temperatura en grados Fahrenheit es: %.2f\n", fahrenheit);

    return 0;
}
