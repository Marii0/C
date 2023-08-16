#include <stdio.h>

int main()
{
    float calificacion;
    printf("escribe tu calificacion final[0.0-10.0]:");
    scanf ("%f", &calificacion);

    if (calificacion >= 0.0 && calificacion <=10.0)
    {
        if(calificacion >=7.0)
        {
            puts ("usted esta aprobado, FELICIDADES!");
        }
        else
        {
            printf ("%s", "usted no paso, nos vemos en el siguiente semestre\n");
        }
    }
    else
    {
        puts ("ha introducido un valor no valido.\nintente de nuevo");
    }

    return 0;
}
