#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "");

    int numero1, de;
    printf("Escribe un n�mero:");
    scanf ("%d", &numero1);
    //de = (numero1 % 2 == 0);
    // printf ("%d", de);
    switch(numero1 % 2)
    {
        case 0 :
            printf("\nEl n�mero es par.\n");
            break;
        case 1 :
            printf("\nEl n�mero es impar.\n");
            break;
    }
    return 0;
}
