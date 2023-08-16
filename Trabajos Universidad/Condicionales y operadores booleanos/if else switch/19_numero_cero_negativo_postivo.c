#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int numero1;
    printf("Escribe un número:");
    scanf("%d", &numero1);

    switch (numero1>0)
    {
    case 0:
        if (numero1<0)
        {
            printf("El número es negativo.\n");
        }
        else
        {
            printf("El número es cero.\n");
        }
        break;
    case 1:
        printf("El número es positivo.\n");
        break;
    }
    return 0;
}
