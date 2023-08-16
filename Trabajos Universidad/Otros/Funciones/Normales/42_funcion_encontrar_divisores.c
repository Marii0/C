#include <stdio.h>
#include <locale.h>
int encontrar_divisores(int numero);

int main()
{
    setlocale(LC_ALL, "");
    int numero;
    printf("Escribe un número del que quieras conocer sus divisores:\n");
    scanf("%d, ", &numero);
    printf("Los divisores de %d son: ", numero);

    printf("", encontrar_divisores(numero));
    return 0;
}
int encontrar_divisores(int numero)
{
    int i, resultado;
    for(i = 1; i <= numero; i++)
    {
        if(numero % i ==0)
        {
            printf("%d ", i);
        }
    }
    return resultado;
}
