#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    float numeroa, numerob, numeroc;

    printf("escribe el n�mero \"a\":");
    scanf ("%f", &numeroa);
    printf("escribe el n�ero \"b\":");
    scanf ("%f", &numerob);
    printf("escribe el n�mero \"c\":");
    scanf ("%f", &numeroc);

    if ((numeroa == numerob) && (numerob == numeroc))
    {
        puts("Los n�mero son iguales");
    }
    else if (numeroa >= numerob && numeroa <= numeroc)
        {
            {
                printf("\nEl n�mero mayor es: %.2f", numeroc);
            }
        }
        else if (numerob >= numeroa && numerob <= numeroc)
            {
                {
                    printf ("\nEl n�mero mayor es: %.2f", numeroc);
                }
            }
            else if (numerob >= numeroc && numerob <= numeroa)
                {
                    {
                        printf ("\nEl n�mero mayor es: %.2f", numeroa);
                    }
                }
                else if (numeroc >= numerob && numeroc <= numeroa)
                    {
                        {
                            printf ("\nEl n�mero mayor es: %.2f", numeroa);
                        }
                    }
                    else if (numeroa >= numeroc && numeroa <= numerob)
                        {
                            {
                                printf ("\nEl n�mero mayor es: %.2f", numerob);
                            }
                        }
                        else if (numeroc >= numeroa && numeroc <= numerob)
                            {
                                {
                                    printf ("\nEl n�mero mayor es: %.2f", numerob);
                                }
                            }
    return 0;
}
