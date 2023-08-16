#include <stdio.h>

int main()
{
    for(int a = 1; a <= 10; a++)
    {
        for(int b = 10; b >= a; b--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
