#include <stdio.h>
#include <locale.h>

int main()
{
    int numerot, numero;

    setlocale(LC_ALL,"");

    printf("tablas de multiplicar:\n");
    for(numero = 0; numero <= 10; numero++)
    {
        for(numerot = 1; numerot <= 10; numerot++)
        {
            printf("%d X %d = %d\t", numerot, numero, numero*numerot);
        }
        printf("\n");
    }
    return 0;
}
