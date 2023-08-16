#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int numero1, signo;

    printf("Escribe el número que desea convertir a valor absoluto:");
    scanf("%d", &numero1);

    switch(numero1>=0)
    {
    case 1:
        signo = 1;
        break;
    case 0:
        signo = -1;
        break;
    }
    printf("\nEl valor absoluto de %d es:%d\n",numero1, signo*numero1);
    return 0;
}
