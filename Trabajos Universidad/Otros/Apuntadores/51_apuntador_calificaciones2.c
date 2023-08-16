#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    float calificaciones[] = {9.0, 10.0, 8.7};
    float *apuntador_calificaciones;

    apuntador_calificaciones = &calificaciones;

    printf("%-10s%-7s%-11s\n", "Ubicación", "Valor", "Dirección");
    for(int indice = 0; indice < 3; ++indice)
    {
        printf("%-10d%-6.1f%-11X\n", indice, *apuntador_calificaciones, apuntador_calificaciones);
        apuntador_calificaciones++;
    }

    return 0;
}
