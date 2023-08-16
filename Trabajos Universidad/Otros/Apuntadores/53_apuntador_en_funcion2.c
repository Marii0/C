#include <stdio.h>
#include <locale.h>
int cuadradoPorReferencia(int numero); //prototipo de la función

int main()
{
    setlocale(LC_ALL, "");
    int numero;
    printf("Escriba un número: ");
    scanf("%d", &numero);

    printf("El usuario escribió: %d\n", numero);

    //pasamos el numero por valor a la función cuadradoPorReferencia
    cuadradoPorReferencia(numero);

    printf("El nuevo valor de la variable número es: %d\n", cuadradoPorReferencia(numero));
    return 0;
}
//calculamos y devolmemos el cuadrado de un argumento entero
int cuadradoPorReferencia(int numero)
{
    return numero * numero; //cuadrado de *apuntador... apuntador * apuntador
}
