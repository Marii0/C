#include <stdio.h>
#include <locale.h>
int potencia_entera(int base, int exponente);

int main()
{
    setlocale (LC_ALL,"");
    float basea, n;
    printf("Escribe el número y el exponente:\n");
    scanf("%f%f", &basea, &n);
    float potencia = potencia_entera(basea, n);
    printf("El %.0f elevado a %.0f es: %.2f\n", basea, n, potencia);

    return 0;
}
int potencia_entera(int base, int exponente)
{
    int i;
    int resultado = 1;

    for(i = 1; i <= exponente; i++)
    {
        resultado = resultado * base;
    }
    return resultado;
}

