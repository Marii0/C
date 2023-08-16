#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int numerop;

        printf("Escribe un número:");
        scanf ("%d", &numerop);

        if ( numerop % 2 == 0 )
        {
            printf("\nEl número es par.\n");
        }
        else
        {
            printf("\nEl número es impar.\n");
        }


    return 0;
}
