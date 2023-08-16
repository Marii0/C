#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "");

    int numero1, numero2;
    printf("Escribe el primer n�mero:");
    scanf ("%d", &numero1);
    printf("Escribe el segundo n�mero:");
    scanf ("%d", &numero2);

    // printf("res: %d", numero1 > numero2);
    switch(numero1 > numero2)
    {
    case 0:
        printf("El n�mero maximo es: %d\n", numero2);
        break;
    case 1:
        printf("El n�mero maximo es: %d\n", numero1);
        break;
    }
        return 0;
    }
