#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    float peso, estatura, IMC;

    printf("escribe tú peso en KG:");
    scanf ("%f", &peso);
    printf("escribe tú estatura en metros:");
    scanf ("%f", &estatura);

    IMC = peso / (estatura*estatura);

    if (IMC < 18.5)
    {
        puts("peso inferior al normal");
    }
    else
    {
        if((IMC >= 18.5 && IMC <= 24.9))
        {
            printf ("peso normal");
        }

        else
        {
            if(( IMC >= 25.0) && (IMC <= 29.9))
            {

                printf ("peso superior al normal");

            }
            else
            {
                if(IMC >= 30.0);
                {

                    printf ("obesidad");
                }

            }
        }
    }


    return 0;
}
