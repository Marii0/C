#include <stdio.h>

int main()
{
    FILE *archivo;
    char buffer[255];
    archivo = fopen("C:\\Users\\chiqu\\OneDrive\\Documentos\\Programacion\\C\\Otros\\Leer un archivo.txt", "r");
    fscanf(archivo, "%s", buffer);
    printf("1: %s\n", buffer);
    fgets(buffer, 255, archivo);
    printf("2: %s\n", buffer);
    fgets(buffer, 255, archivo);
    printf("3: %s\n", buffer);
    fclose(archivo);
    return 0;
}
