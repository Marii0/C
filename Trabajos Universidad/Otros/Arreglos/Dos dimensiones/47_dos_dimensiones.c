#include <stdio.h>
#include <stdlib.h>
void imprimir_arreglo(int arreglo[2][2], int num_filas, int num_columnas);

int main()
{
    int A[2][2]= {{1,2}, {3,4}};
    imprimir_arreglo(A, 2, 2);
    return 0;
}
void imprimir_arreglo(int arreglo[2][2], int num_filas, int num_columnas)
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
