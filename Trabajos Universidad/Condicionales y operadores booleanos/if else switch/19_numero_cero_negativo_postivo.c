#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int numero1;
    printf("Escribe un n�mero:");
    scanf("%d", &numero1);

    switch (numero1>0)
    {
    case 0:
        if (numero1<0)
        {
            printf("El n�mero es negativo.\n");
        }
        else
        {
            printf("El n�mero es cero.\n");
        }
        break;
    case 1:
        printf("El n�mero es positivo.\n");
        break;
    }
    return 0;
}
