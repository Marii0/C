#include <stdio.h>

int main()
{
    unsigned int matricula;
    char nombre[30];
    double promedio;

    FILE *cfPtr;
    if((cfPtr = fopen( "C:\\Users\\chiqu\\OneDrive\\Documentos\\Programacion\\C\\Otros\\Leer un archivo.dat", "r")) == NULL)
    {
        puts("No es posible abrir el archivo.");
    }
    else
    {
        printf("%-10s%-13%s\n", "Matricula", "Nombre", "Promedio");
        fscanf(cfPtr, "%d%29s%lf", &matricula, &nombre, &promedio);
        while(!feof(cfPtr))
        {
            printf("%-10d%-13s%7.2f\n", matricula, nombre, promedio);
            fscanf(cfPtr, "%d%29s%lf",&matricula, nombre, &promedio);
        }
        fclose(cfPtr);
    }
    return 0;
}
