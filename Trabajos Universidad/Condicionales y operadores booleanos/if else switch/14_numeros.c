#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    float numeroa, numerob, numeroc;

    printf("escribe el número \"a\":");
    scanf ("%f", &numeroa);
    printf("escribe el núero \"b\":");
    scanf ("%f", &numerob);
    printf("escribe el número \"c\":");
    scanf ("%f", &numeroc);

    if ((numeroa == numerob) && (numerob == numeroc))
    {
        puts("Los número son iguales");
    }
    else if (numeroa >= numerob && numeroa <= numeroc)
        {
            {
                printf("\nEl número mayor es: %.2f", numeroc);
            }
        }
        else if (numerob >= numeroa && numerob <= numeroc)
            {
                {
                    printf ("\nEl número mayor es: %.2f", numeroc);
                }
            }
            else if (numerob >= numeroc && numerob <= numeroa)
                {
                    {
                        printf ("\nEl número mayor es: %.2f", numeroa);
                    }
                }
                else if (numeroc >= numerob && numeroc <= numeroa)
                    {
                        {
                            printf ("\nEl número mayor es: %.2f", numeroa);
                        }
                    }
                    else if (numeroa >= numeroc && numeroa <= numerob)
                        {
                            {
                                printf ("\nEl número mayor es: %.2f", numerob);
                            }
                        }
                        else if (numeroc >= numeroa && numeroc <= numerob)
                            {
                                {
                                    printf ("\nEl número mayor es: %.2f", numerob);
                                }
                            }
    return 0;
}
