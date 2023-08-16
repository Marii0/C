#include <stdio.h>
#include <stdlib.h>
int num_filas, num_columnas;
void imprimir_arreglo(int arreglo[][num_columnas], int num_filas, int num_columnas);

int main()
{

    printf("Especifíca las filas y columnas para el arreglo: ");
    scanf("%d%d", &num_filas, &num_columnas);

    int A[num_filas][num_columnas];

    for(int fila = 0; fila < num_filas; ++fila)
    {
        for(int columna = 0; columna < num_columnas; columna++)
        {
          int numero_aleatorio = 2 + rand() % 9;
          A[fila][columna] = numero_aleatorio;
        }
    }

    imprimir_arreglo(A, num_filas, num_columnas);
    return 0;
}
void imprimir_arreglo(int arreglo[][num_columnas], int num_filas, int num_columnas)
{
    for(int fila = 0; fila < num_filas; ++fila)
    {
        for(int columna = 0; columna < num_columnas; columna++)
        {
          printf("%d ", arreglo[fila][columna]);
        }
        puts("");
    }
}
