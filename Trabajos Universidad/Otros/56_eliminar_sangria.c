#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 60

int main()
{
    char mi_cadena[TAM];
    char *mi_cadena2;
    printf("Escribe un texto: ");
    fgets(mi_cadena, TAM, stdin);
    fflush(stdin);
    mi_cadena2 = strtok(mi_cadena, "\n");
    printf("\nUsted escribió: %s", mi_cadena);
    printf("Esta es otra cadena", mi_cadena);
    return 0;
}
