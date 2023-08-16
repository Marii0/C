#include <stdio.h>
#include <locale.h>
void anio_biciesto(int anio);
int dia_incorrecto(int dias);

int main()
{
    setlocale(LC_ALL, "");
    int dias_uno,  meses_uno, anios_uno,dias_dos,  meses_dos, anios_dos;

    printf("PARA CALCULAR LOS DÍAS QUE HAY ENTRE UNA FECHA Y OTRA SIGA LOS SIGUIENTES PASOS.\nIntroduce la primera fecha: \n");
    printf("Dia:\n");
    scanf("%d", &dias_uno);
    printf("Mes:\n");
    scanf("%d", &meses_uno);
    printf("Año\n");
    scanf("%d", &anios_uno);
    puts("");
    printf("Introduce la segunda fecha: \n");
    printf("Dia:\n");
    scanf("%d", &dias_dos);
    printf("Mes:\n");
    scanf("%d", &meses_dos);
    printf("Año\n");
    scanf("%d", &anios_dos);

    printf("fecha 1: %d %d %d\n", dias_uno, meses_uno, anios_uno);
    printf("fecha 2: %d %d %d\n\n", dias_dos, meses_dos, anios_dos);

    anio_biciesto(anios_uno);
    puts("");
    puts("");
    anio_biciesto(anios_dos);

    return 0;
}
void anio_biciesto(int anio)
{
    if(anio % 4 == 0)
    {
        if(anio % 100 == 0)
        {
            if(anio % 400 == 0)
            {
                printf("es biciesto");
            }
            else
            {
                printf("no es ");
            }
        }
        else
        {
            printf("es biciesto");
        }

    }
    else
    {
        printf("no es ");
    }
}
