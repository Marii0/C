#include <stdio.h>

int main()
{
    FILE *archivo;
    archivo = fopen("miarchivo.txt", "w");
    fprintf(archivo, "Somos UACJ!\n");
    fputs("Estamos por terminar un excelente semestre\n", archivo);
    fclose(archivo);
    return 0;
}
