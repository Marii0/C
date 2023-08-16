#include <stdio.h>
#include <time.h>
void imprimir_arreglo(int arreglo[][3]);
void sumar_arreglo(int arregloa[][3], int arreglob[][3]);
void restar_arreglo(int arregloa[][3], int arreglob[][3]);
void mul_arreglo(int arregloa[][3], int arreglob[][3]);
void div_arreglo(int arregloa[][3], int arreglob[][3]);

int main()
{
    int A[3][3], B[3][3], C[3][3];
    time_t t;
    srand((unsigned)time(&t));

    for(int f = 0; f <= 2; f++)
    {
        for(int c = 0; c <= 2; c++)
        {
            int valor1 = 1 + (rand()%10);
            A[f][c] = valor1;
            int valor2 = 1 + (rand()%10);
            B[f][c] = valor2;
        }
    }

    puts("Arreglo A");
    imprimir_arreglo(A);
    puts("Arreglo B");
    imprimir_arreglo(B);
    puts("");
    puts("La suma del arreglo A y B es:");
    sumar_arreglo(A,B);
    puts("");
    puts("La resta del arreglo A y B es:");
    restar_arreglo(A,B);
    puts("");
    puts("La multiplicación del arreglo A y B es:");
    mul_arreglo(A,B);
    puts("");
    puts("La división del arreglo A y B es:");
    div_arreglo(A,B);

    return 0;
}

void imprimir_arreglo(int arreglo[][3])
{
    for(int f = 0; f <= 2; f++)
    {
        for(int c = 0; c <= 2; c++)
        {
            printf("%d ", arreglo[f][c]);
        }
        puts("");
    }
}
void sumar_arreglo(int arregloa[][3], int arreglob[][3])
{
    int C[3][3];
    for(int f = 0; f <= 2; f++)
    {
        for(int c = 0; c <= 2; c++)
        {
            C[f][c] = arregloa[f][c] + arreglob[f][c];
        }
    }
    imprimir_arreglo(C);
}
void restar_arreglo(int arregloa[][3], int arreglob[][3])
{
    int C[3][3];
    for(int f = 0; f <= 2; f++)
    {
        for(int c = 0; c <= 2; c++)
        {
            C[f][c] = arregloa[f][c] - arreglob[f][c];
        }
    }
    imprimir_arreglo(C);
}
void mul_arreglo(int arregloa[][3], int arreglob[][3])
{
    int C[3][3];
    for(int f = 0; f <= 2; f++)
    {
        for(int c = 0; c <= 2; c++)
        {
            C[f][c] = arregloa[f][c] * arreglob[f][c];
        }
    }
    imprimir_arreglo(C);
}
void div_arreglo(int arregloa[][3], int arreglob[][3])
{
    int C[3][3];
    for(int f = 0; f <= 2; f++)
    {
        for(int c = 0; c <= 2; c++)
        {
          C[f][c] = arregloa[f][c] / arreglob[f][c];
        }
    }
    imprimir_arreglo(C);
}
