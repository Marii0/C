#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int numerop;

        printf("Escribe un n�mero:");
        scanf ("%d", &numerop);

        if ( numerop % 2 == 0 )
        {
            printf("\nEl n�mero es par.\n");
        }
        else
        {
            printf("\nEl n�mero es impar.\n");
        }


    return 0;
}
