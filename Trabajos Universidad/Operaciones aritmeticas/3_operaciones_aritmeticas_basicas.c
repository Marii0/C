#include <stdio.h>

int main()
{
    int numero;
    int numero1;
    int suma;
    int resta;
    int multiplicacion;
    int division;


    printf("Escribe el primer numero numero:");
    scanf("%d",&numero);
    printf("Escribe el segundo numero numero:");
    scanf("%d",&numero1);

    suma = numero + numero1;
    resta = numero - numero1;
    multiplicacion = numero * numero1;
    division = numero / numero1;


    printf("\n\nLa suma de %d y %d es: %d", numero, numero1, suma);
    printf("\nLa resta de %d y %d es: %d", numero, numero1, resta);
    printf("\nLa multiplicacion de %d y %d es: %d", numero, numero1, multiplicacion);
    printf("\nLa division de %d y %d es: %d\n", numero, numero1, division);

    return 0;
}
