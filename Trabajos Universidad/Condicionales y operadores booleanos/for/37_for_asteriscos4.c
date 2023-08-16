#include <stdio.h>

int main()
{
    int n = 10;
    for(int a = 1; a <= n; a++)
    {
        for(int b = n-1; b >= a; b--)
        {
            printf(" ");
        }
        for(int k = 1; k <= a; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
