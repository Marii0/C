#include <stdio.h>
#include <locale.h>
void cuadradoPorReferencia(int *apuntado); //prototipo de la función

int main()
{
    setlocale(LC_ALL, "");
    int numero;
    printf("Escriba un número: ");
    scanf("%d", &numero);

    printf("El usuario escribió: %d\n", numero);
    //pasamos la dirección de la variable numero a la función cuadradoPorReferencia
    cuadradoPorReferencia(&numero);

    printf("El nuevo valor de la variable numero es: %d\n", numero);
    return 0;
}
//calculamos el cuadrado de *apuntador; actualmente el valor de la varible numero se modifica en la función
void cuadradoPorReferencia(int *apuntador)
{
    *apuntador = *apuntador * *apuntador; //cuadrado de *apuntador
}
