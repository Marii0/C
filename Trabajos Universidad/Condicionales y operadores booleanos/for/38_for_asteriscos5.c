#include <stdio.h>

int main()
{
    int n=5, i, k, j;

    for (i = 1; n-1 >= i; i++)
    {
        for (j = n; j >= i; j--)
        {
          printf(" ");
        }
        for (k = 1; 2*i-1 >= k; k++)
        {
           printf("*");
        }
        printf("\n");
     }
     for (i = 1; n >= i; i++)
     {
         for (j = 1; j <= i; j++)
         {
           printf(" ");
         }
         for (k = 2*n-1 ; 2*i-1 <= k; k--)
         {
            printf("*");
         }
         printf("\n");
      }
      return 0;
}
