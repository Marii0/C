#include <stdio.h>

int main()
{
    for(int a = 1; a <= 10; a++)
    {
        for(int b = 1; a >= b; b++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
