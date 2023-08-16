// Escribir un programa que calcule la longitud de un arreglo
#include <stdio.h>
#include <locale.h>
double arreglo[]={1, 2, 3, 6, 7, 7};
double primer_arreglo[1];
int main()
{
    setlocale(LC_ALL,"");
    int tam_arreglo = sizeof (arreglo);
    int tam_primer_arreglo= sizeof(primer_arreglo);
    int no_arreglos = tam_arreglo / tam_primer_arreglo;

    printf("El número de arreglos es: %d", no_arreglos);


    return 0;
}


