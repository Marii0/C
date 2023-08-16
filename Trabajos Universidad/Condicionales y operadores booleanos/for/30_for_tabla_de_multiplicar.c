#include <stdio.h>
#include <locale.h>

int main()
{
    int numerot, numero;

    setlocale(LC_ALL,"");

    printf("Ingresa un número que quiera la tabla de multiplicar:");
    scanf("%d", &numerot);
    for(numero = 1; numero <= 10; numero++)
    {
            printf("%d x %d = %d\n", numerot, numero, numero*numerot);
    }
    return 0;
}
