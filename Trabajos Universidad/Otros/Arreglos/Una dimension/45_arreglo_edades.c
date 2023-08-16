#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int arreglo_edades[3]= {19,23,21};
    /*arreglo_edades[0]= 19;
    arreglo_edades[1]= 21;
    arreglo_edades[3]= 23;*/

    printf("%-8s%-10s\n", "Indice", "Elemento");
    for(int indice = 0; indice <= 2; ++indice)
    {
            printf("%-8d%-10d\n", indice, arreglo_edades[indice]);
    }
    return 0;
}
