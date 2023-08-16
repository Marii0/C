#include <stdio.h>

int main()
{
    int c = 5;
    printf("postincremento:\n");
    printf("c: %d\n", c);
    printf("c++: %d\n", c++);
    printf("c: %d\n", c);

    c = 5;

    printf("preincremento:\n");
    printf("c: %d\n", c);
    printf("++c: %d\n", ++c);
    printf("c: %d\n", c);

    c = 5;

    printf("postdecrrement0:\n");
    printf("c: %d\n", c);
    printf("c--: %d\n", c--);
    printf("c: %d\n", c);

    c = 5;

    printf("postdecrrement0:\n");
    printf("c: %d\n", c);
    printf("--c: %d\n", --c);
    printf("c: %d\n", c);
    return 0;
}
