#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int opcion;
    float base, altura, radio;
    puts("C�LCULO DE �REA DE FIGURAS GEOM�TRICAS");
    printf("1.    Tri�ngulo rect�ngulo.\n2.    Circulo.\n3.    Cuadrado\n4.    Rect�ngulo\n5.    Salir.\nEscribe la opci�n:");
    scanf("%d",&opcion);



    while(opcion != 5)
    {
        switch(opcion)
        {
        case 1:
            printf("C�lculo del �rea de un tri�ngulo rect�ngulo\n");
            printf("Escriba la base y la altura:");
            scanf("%f%f",&base, &altura);



            printf("\nEL �rea es: %.2f\n",(base*altura)/2.0);
            break;
        case 2:
            printf("\nC�lculo del �rea de un c�rculo\n");
            printf("Escriba la radio:");
            scanf("%f",&radio);



            printf("\nEL �rea es: %.2f\n",3.1416*(radio*radio));
            break;
        case 3:
            printf("C�lculo del �rea de un cuadrado\n");
            printf("Escriba la base:");
            scanf("%f",&base);



            printf("\nEL �rea es: %.2f\n",(base*base));
            break;
        case 4:
            printf("\nC�lculo del �rea de un rect�ngulo\n");
            printf("Escriba la base y la altura:");
            scanf("%f%f",&base, &altura);



            printf("\nEL �rea es: %.2f\n",(base*altura));
            break;
        case 5:
            printf("C�lculo del �rea de un tri�ngulo rect�ngulo\n");
            printf("Escriba la base y la altura:");
            scanf("%f%f",&base, &altura);



            printf("\nEL �rea es: %.2f\n",(base*altura)/2.0);
            break;
        default:
            printf("Opci�n no disponible.");
            break;
        }
        puts("");
        system("pause");
        system("cls");
        puts("\n\nC�LCULO DE �REA DE FIGURAS GEOM�TRICAS");
        printf("1.    Tri�ngulo rect�ngulo.\n2.    Circulo.\n3.    Cuadrado\n4.    Rect�ngulo\n5.    Salir.\nEscribe la opci�n:");
        scanf("%d",&opcion);
    }



    return 0;
}

