#include <stdio.h>
#include <ctype.h>

int main()
{
    char mensaje[] = "Quiero cafe del 646";

    for(int i = 0; i <= 18; i++)
    {
        /*if(isblank(mensaje[i]))
        {
            printf("%c: Es un blanco\n", mensaje[i]);
        }
        if(isdigit(mensaje[i]))
        {
            printf("%c: Es un digito\n", mensaje[i]);
        }
        if(isalpha(mensaje[i]))
        {
            printf("%c: Es una letra\n", mensaje[i]);
        }
        if(isalnum(mensaje[i]))
        {
            printf("%c: Es un caracter alfanumerico\n", mensaje[i]);
        }*/
        if(isupper(mensaje[i]) || isblank(mensaje[i]) || isdigit(mensaje[i]))
        {
            printf("%c", mensaje[i]);
        }
        else
        {
            printf("%c", toupper(mensaje[i]));
        }

    }

    return 0;
}
