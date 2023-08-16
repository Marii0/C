#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "");

    char iniciales_de_nombres_dia;
    printf("Escribe la inicial (L, M, MI, J, V, S, D) dependiendo del nombre del d�a de la semana que es hoy:");
    scanf ("%c", &iniciales_de_nombres_dia);

    switch (iniciales_de_nombres_dia)
    {
    case 'L':
        printf("\nHoy es Lunes.\n");
        break;
    case 'M':
        printf("\nHoy es Martes.\n");
        break;
    case 'MI':
        printf("\nHoy es Miercoles.\n");
        break;
    case 'J':
        printf("\nHoy es Jueves.\n");
        break;
    case 'V':
        printf("\nHoy es viernes.\n");
        break;
    case 'S':
        printf("\nHoy es Sabado.\n");
        break;
    case 'D':
        printf("\nHoy es Domingo.\n");
        break;
    default:
        printf("\nIntrodujo un valor incorrecto.\n");

        }
        return 0;
}
