#include <stdio.h>
#include <locale.h>
int cuadradoPorReferencia(int numero); //prototipo de la funci�n

int main()
{
    setlocale(LC_ALL, "");
    int numero;
    printf("Escriba un n�mero: ");
    scanf("%d", &numero);

    printf("El usuario escribi�: %d\n", numero);

    //pasamos el numero por valor a la funci�n cuadradoPorReferencia
    cuadradoPorReferencia(numero);

    printf("El nuevo valor de la variable n�mero es: %d\n", cuadradoPorReferencia(numero));
    return 0;
}
//calculamos y devolmemos el cuadrado de un argumento entero
int cuadradoPorReferencia(int numero)
{
    return numero * numero; //cuadrado de *apuntador... apuntador * apuntador
}
