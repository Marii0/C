#include <stdio.h>

int main()
{
    unsigned int matricula;
    char nombre[30];
    double promedio;

    FILE *cfPtr;
    if((cfPtr = fopen( "alumnos.dat", "w")) == NULL)
    {
        puts("No es posible abrir el archivo.");
    }
    else
    {
        puts("Escriba la matricula, nombre y promedio.");
        puts("Escriba EOF para terminar.");
        printf("%s", "<");
        scanf("%d%29s%lf", &matricula, nombre, &promedio);
        while(!feof(stdin))
        {
            fprintf(cfPtr, "%d %s %.2f\n", matricula, nombre, promedio);
            printf("%s, <");
            scanf("%d%29s%lf",&matricula, nombre, &promedio);
        }
        fclose(cfPtr);
    }
    return 0;
}
