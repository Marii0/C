#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <time.h>
int num_filas, num_columnas;
void imprimir_arreglo(int arreglo[][num_columnas], int num_filas, int num_columnas);
int media_arreglo(int arreglo[][num_columnas], int num_filas, int num_columnas);
int varianza_arreglo(int arreglo[][num_columnas], int num_filas, int num_columnas);
int desviacion_arreglo(int arreglo[][num_columnas], int num_filas, int num_columnas);

int main()
{

    time_t t;


    srand((unsigned) time(&t));


    setlocale(LC_ALL, "");
    printf("Especifíca las filas y columnas para el arreglo: ");
    scanf("%d%d", &num_filas, &num_columnas);

    int A[num_filas][num_columnas];

    for(int fila = 0; fila < num_filas; ++fila)
    {
        for(int columna = 0; columna < num_columnas; columna++)
        {
            int numero_aleatorio = 2 + rand() % 8;
            A[fila][columna] = numero_aleatorio;
        }
    }

    imprimir_arreglo(A, num_filas, num_columnas);
    puts("");
    puts("");
    media_arreglo(A, num_filas, num_columnas);
    puts("");
    puts("");
    varianza_arreglo(A, num_filas, num_columnas);
    puts("");
    puts("");
    desviacion_arreglo(A, num_filas, num_columnas);
    puts("");
    puts("");

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
int media_arreglo(int arreglo[][num_columnas], int num_filas, int num_columnas)
{
    int suma = 0;
    float media;
    for(int fila = 0; fila < num_filas; ++fila)
    {
        for(int columna = 0; columna < num_columnas; columna++)
        {
            suma = suma + arreglo[fila][columna];
        }
    }
    media = ((float)suma / ((float)num_columnas * (float)num_filas));
    printf("La media de los arreglos es: %.2f", media);
}
int varianza_arreglo(int arreglo[][num_columnas], int num_filas, int num_columnas)
{
    int suma = 0;
    float media;
    float varianza;
    float suma_varianza = 0;
    media = media_arreglo(arreglo, num_filas, num_columnas);
    for(int fila = 0; fila < num_filas; ++fila)
    {
        for(int columna = 0; columna < num_columnas; columna++)
        {
            suma_varianza = suma_varianza + (pow(arreglo[fila][columna] - media, 2.00));
        }
    }
    varianza = ((float)suma_varianza / ((float)num_columnas * (float)num_filas));
    printf("La varianza de los arreglos es: %.2f", varianza);
}
int desviacion_arreglo(int arreglo[][num_columnas], int num_filas, int num_columnas)
{
    int suma = 0;
    float media;
    float suma_varianza = 0;
    float desviacion;
    media = media_arreglo(arreglo, num_filas, num_columnas);
    suma_varianza = varianza_arreglo(arreglo, num_filas, num_columnas);
    desviacion = pow(((float)suma_varianza / (((float)num_columnas * (float)num_filas) - 1.0)), .5);
    printf("La desviación estándar de los arreglos es: %.2f", desviacion);
}

