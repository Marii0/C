#include <stdio.h>
#include <locale.h>
int longitud_arreglo(int A[]);
void imprimir_arreglo(int A[], int n);
int veces_reoetidas_numero(int A[], int n);
int main()
{
    setlocale(LC_ALL, "");
    int A[11] = {2,6,4,8,10,12,89,68,45,37,-1};
    int n = longitud_arreglo(A);
    puts("Arreglo no ordenado");
    imprimir_arreglo(A, n);
    puts("");
    for(int j=1; j<n; j++)
    {
        int clave = A[j];
        int i = j-1;
        while(i>=0 && A[i] > clave)
        {
            A[i+1] = A[i];
            i = i - 1;
        }
        A[i+1] = clave;
    }
    puts("Arreglo ordenado");
    imprimir_arreglo(A, n);
    return 0;
}
void imprimir_arreglo(int A[], int n)
{
    for(int c=0; c < n; c++)
    {
        printf("%d ", A[c]);
    }
}
int longitud_arreglo(int A[])
{
    int centinela = 0;
    int contador = 0;
    while(centinela != -1)
    {
        int valor = A[contador];
        if(valor != -1)
        {
            contador = contador + 1;
        }
        else
        {
            centinela = -1;
        }
    }
    return contador;
}
