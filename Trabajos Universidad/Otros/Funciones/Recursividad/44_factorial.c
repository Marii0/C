#include <stdio.h>
#include <stdlib.h>
unsigned long long int factorial(unsigned int numero);

int main()
{
    unsigned int i;
    unsigned int n;
    printf("Escribe un numero para calcular su factorial:");
    scanf("%u", &n);
    for ( i = 0; i <= n; ++i)
    {
      printf("%u!= %llu\n", i, factorial(i));
    }

    return 0;
}
unsigned long long int factorial(unsigned int numero)
{
    if(numero <= 1)
    {
        return 1;
    }
    else
    {
        return (numero * factorial(numero - 1));
    }
}
