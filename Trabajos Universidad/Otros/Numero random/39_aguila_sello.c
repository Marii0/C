#include <stdio.h>
#include <time.h>
#include <locale.h>

int main(void)
{
    setlocale (LC_ALL,"");
    time_t t;
    srand((unsigned) time(&t));
    int valor= 1+(rand()%2);
    switch(valor)
    {
    case 1:
        printf("El resultado del lanzamiento de una moneda es: Águila\n");
        break;
    case 2:
        printf("El resultado del lanzamiento de una moneda es: Sol\n");
        break;
    }


    return 0;
}
