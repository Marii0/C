#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    float numero1, numero2, S, Me, M, D;
    char operacion;

    printf("Escribe la operacion aritmetica que deasea realizar: Ejemplo: 7 + 7\n");
    scanf("%f %c %f", &numero1, &operacion, &numero2);

  switch(operacion)
    {
    case '+':
        S = numero1 + numero2;
        printf("El resultado de %.2f %c %.2f es:%.2f\n", numero1, operacion, numero2, S);
        break;
    case '-':
        Me = numero1 - numero2;
        printf("El resultado de %.2f %c %.2f es:%.2f\n", numero1, operacion, numero2, Me);
        break;
    case '*':
        M = numero1 * numero2;
        printf("El resultado de %.2f %c %.2f es:%.2f\n", numero1, operacion, numero2, M);
        break;
    case '/':
        D = numero1 / numero2;
        printf("El resultado de %.2f %c %.2f es:%.2f\n", numero1, operacion, numero2, D);
        break;
    }
    return 0;
}
