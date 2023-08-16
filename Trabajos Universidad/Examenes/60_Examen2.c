#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#define TAM 600
int palindroma(char palabra[]);
int num_de_caracteres(char cadena[]);
int num_filas, num_columnas;
void imprimir_arreglo(int arreglo[][num_columnas], int num_filas, int num_columnas);
float media_arreglo(int arreglo[][num_columnas], int num_filas, int num_columnas);
float varianza_arreglo(int arreglo[][num_columnas], int num_filas, int num_columnas);
float varianza_suma(int arreglo[][num_columnas], int num_filas, int num_columnas);
float desviacion_arreglo(int arreglo[][num_columnas], int num_filas, int num_columnas);
int palabra_reves(char cadena[], char *puntero_cadena);
int num_de_caracteres(char cadena[]);

int main()
{
    int numero;

    char cadena[TAM];

    int A[num_filas][num_columnas];
    time_t t;
    srand((unsigned) time(&t));

    char *puntero_cadena = &cadena;

    setlocale(LC_ALL, "");
    printf("------------------------------------------------------------------------------------------------------------------------------\n");
    printf("EXAMEN PARCIAL I-MENÚ DE OPCIONES\n");
    printf("------------------------------------------------------------------------------------------------------------------------------\n");
    printf("1. Calcular la longitud de una cadena de texto.\n");
    printf("2. Calcular el promedio, la mediana y la moda de un arreglo bidimensional que contiene valores aleatorios en el rango de 1 a 30.\n");
    printf("3. Determinar si una palabra es palíndroma.\n");
    printf("4. Imprimir una cadena al revés.\n");
    printf("5. Salir.\n");

    puts("");

    printf("Escriba su opción:");
    scanf("%d", &numero);


    while(numero != 5)
    {
        switch(numero)
        {
        case 1: //cuando probe este caso no me funiciono pero cuando lo hice solo si me funciono, no supe porque no me funiono aqui.
            printf("Escribe una palabra u oración (el número máximo de caractéres es de 600): \n");

            fgets(cadena, TAM, stdin);

            printf("Usted escribió: %s", cadena);

            num_de_caracteres(cadena);
            fflush(stdin);

            break;
        case 2:

            printf("\nEspecifíca las filas y columnas para el arreglo: ");
            scanf("%d%d", &num_filas, &num_columnas);

            for(int fila = 0; fila < num_filas; ++fila)
            {
                for(int columna = 0; columna < num_columnas; columna++)
                {
                    int numero_aleatorio = 1 + rand() % 30;
                    A[fila][columna] = numero_aleatorio;
                }
            }

            imprimir_arreglo(A, num_filas, num_columnas);
            puts("");
            puts("");
            printf("La media de los arreglos es: %.2f", media_arreglo(A, num_filas, num_columnas));
            puts("");
            puts("");
            printf("La varianza de los arreglos es: %.2f", varianza_arreglo(A, num_filas, num_columnas));
            puts("");
            puts("");
            printf("La desviación estándar de los arreglos es: %.2f", desviacion_arreglo(A, num_filas, num_columnas));
            puts("");
            puts("");

            break;
        case 3:

           /* printf("Escribe una palabra u oracion (el numero maximo de caracteres es 600): ");


            fgets(cadena, TAM, stdin);
            fflush(stdin);


            palindroma(cadena);*/

            printf("caso 3 ");

            break;
        case 4:

           /* printf("Escriba una palabra (MAX: 600 caractéres): \n");
            fgets(cadena, TAM, stdin);


            printf("Usted escribió: %s", cadena);
            puts("");
            puts("");
            palabra_reves(cadena, *puntero_cadena);*/

            printf("caso 4");

            break;
        default:

            printf("\nIntrodujo un número incorrecto, vuelva a intentarlo.\n");

            break;
        }


        puts("");
        system("pause");
        system("cls");

        printf("------------------------------------------------------------------------------------------------------------------------------\n");
        printf("EXAMEN PARCIAL I-MENÚ DE OPCIONES\n");
        printf("------------------------------------------------------------------------------------------------------------------------------\n");
        printf("1. Calcular la longitud de una cadena de texto.\n");
        printf("2. Calcular el promedio, la mediana y la moda de un arreglo bidimensional que contiene valores aleatorios en el rango de 1 a 30.\n");
        printf("3. Determinar si una palabra es palíndroma.\n");
        printf("4. Imprimir una cadena al revés.\n");
        printf("5. Salir.\n");

        puts("");

        printf("Escriba su opción: ");
        scanf("%d", &numero);
    }

    return 0;
}
int num_de_caracteres(char cadena[])
{
    int centinela=0;
    int nummeros_total_arreglos = 0;
    int i=0;

    while(centinela != -1)
    {

        if(isalpha(cadena[i]) || isblank(cadena[i]))
        {
            nummeros_total_arreglos++;
            i++;
        }
        else
        {
            centinela = -1;
        }
    }
    printf("El número total de caractéres es: %d", nummeros_total_arreglos);
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
float media_arreglo(int arreglo[][num_columnas], int num_filas, int num_columnas)
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
    return media;

}
float varianza_arreglo(int arreglo[][num_columnas], int num_filas, int num_columnas)
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
    return varianza;
}
float varianza_suma(int arreglo[][num_columnas], int num_filas, int num_columnas)
{
    int suma = 0;
    float media;
    float suma_varianza = 0;
    media = media_arreglo(arreglo, num_filas, num_columnas);
    for(int fila = 0; fila < num_filas; ++fila)
    {
        for(int columna = 0; columna < num_columnas; columna++)
        {
            suma_varianza = suma_varianza + (pow(arreglo[fila][columna] - media, 2.00));
        }
    }
    return suma_varianza;
}
float desviacion_arreglo(int arreglo[][num_columnas], int num_filas, int num_columnas)
{
    int suma = 0;
    float media;
    float suma_varianza;
    float desviacion;
    media = media_arreglo(arreglo, num_filas, num_columnas);
    suma_varianza = varianza_suma(arreglo, num_filas, num_columnas);
    desviacion = pow(suma_varianza / (((float)num_columnas * (float)num_filas) - 1.0),.5);
    return desviacion;
}
/*int palindroma(char palabra[])
{
    int centinela=0;
    int hola = 0;
    int i=0;
    int pi=-1;

    while(palabra[i] > palabra[pi])
    {
        pi--;
        i++;

        if(strcmpz(palabra[i]), (palabra[pi])==0)
        {
            hola;
        }
        else
        {
            hola++;
        }
    }
    if(hola ==0)
    {
       printf("la palabra es alindroma");
    }
    else
    {
        printf("la palabra no es alindroma");
    }
}*/
/*int palabra_reves(char cadena[], char *puntero_cadena)
{
   int tope;
   tope = num_de_caracteres(cadena);
   int i =0;

   while( i < tope)
   {
       cadena[i];
       i = (i + tope) % 5;

       printf("%c", cadena);
   }
}*/
