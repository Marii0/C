#include <stdio.h>
#include <locale.h>
void operaciones_por_referencia(int *puntero_numa, int *puntero_numb);

int main()
{
    setlocale(LC_ALL, "");
    int numeroa, numerob;
    int *puntero_numa = &numeroa;
    int *puntero_numb = &numerob;

    printf("Escriba el primer número: ");
    scanf("%d", &numeroa);
    printf("Escriba el segundo número: ");
    scanf("%d", &numerob);

    printf("\nEl usuario escribió: %d y %d\n\n", *puntero_numa, *puntero_numb);

    operaciones_por_referencia(&numeroa, &numerob);

    return 0;
}
void operaciones_por_referencia(int *puntero_numa, int *puntero_numb)
{
    int suma = *puntero_numa + *puntero_numb;
    int resta = *puntero_numa - *puntero_numb;
    int multiplicacion = *puntero_numa * *puntero_numb;
    int division = *puntero_numa / *puntero_numb;
    printf("La suma de los dos números es: %d\n", suma);
    printf("La resta de los dos números es: %d\n", resta);
    printf("La multiplicación de los dos números es: %d\n", multiplicacion);
    printf("La división de los dos números es: %d\n", division);
}

