#include <stdio.h>
#include <locale.h>
unsigned long long int fibonacci(unsigned int n);

int main()
{
    setlocale(LC_ALL,"");
    unsigned int n;
    printf("Escribe el número:");
    scanf("%u", &n);

    printf("fibonacci(%u): %llu", n, fibonacci(n));
    return 0;
}



unsigned long long int fibonacci(unsigned int n)
{
    if(0 == n || 1 == n)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
