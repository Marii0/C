#include <stdio.h>
#include <locale.h>
void cuadradoPorReferencia(int *apuntado); //prototipo de la funci�n

int main()
{
    setlocale(LC_ALL, "");
    int numero;
    printf("Escriba un n�mero: ");
    scanf("%d", &numero);

    printf("El usuario escribi�: %d\n", numero);
    //pasamos la direcci�n de la variable numero a la funci�n cuadradoPorReferencia
    cuadradoPorReferencia(&numero);

    printf("El nuevo valor de la variable numero es: %d\n", numero);
    return 0;
}
//calculamos el cuadrado de *apuntador; actualmente el valor de la varible numero se modifica en la funci�n
void cuadradoPorReferencia(int *apuntador)
{
    *apuntador = *apuntador * *apuntador; //cuadrado de *apuntador
}
