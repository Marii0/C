#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int opcion;
    float base, altura, radio;
    puts("CÁLCULO DE ÁREA DE FIGURAS GEOMÉTRICAS");
    printf("1.    Triángulo rectángulo.\n2.    Circulo.\n3.    Cuadrado\n4.    Rectángulo\n5.    Salir.\nEscribe la opción:");
    scanf("%d",&opcion);



    while(opcion != 5)
    {
        switch(opcion)
        {
        case 1:
            printf("Cálculo del área de un triángulo rectángulo\n");
            printf("Escriba la base y la altura:");
            scanf("%f%f",&base, &altura);



            printf("\nEL área es: %.2f\n",(base*altura)/2.0);
            break;
        case 2:
            printf("\nCálculo del área de un círculo\n");
            printf("Escriba la radio:");
            scanf("%f",&radio);



            printf("\nEL área es: %.2f\n",3.1416*(radio*radio));
            break;
        case 3:
            printf("Cálculo del área de un cuadrado\n");
            printf("Escriba la base:");
            scanf("%f",&base);



            printf("\nEL área es: %.2f\n",(base*base));
            break;
        case 4:
            printf("\nCálculo del área de un rectángulo\n");
            printf("Escriba la base y la altura:");
            scanf("%f%f",&base, &altura);



            printf("\nEL área es: %.2f\n",(base*altura));
            break;
        case 5:
            printf("Cálculo del área de un triángulo rectángulo\n");
            printf("Escriba la base y la altura:");
            scanf("%f%f",&base, &altura);



            printf("\nEL área es: %.2f\n",(base*altura)/2.0);
            break;
        default:
            printf("Opción no disponible.");
            break;
        }
        puts("");
        system("pause");
        system("cls");
        puts("\n\nCÁLCULO DE ÁREA DE FIGURAS GEOMÉTRICAS");
        printf("1.    Triángulo rectángulo.\n2.    Circulo.\n3.    Cuadrado\n4.    Rectángulo\n5.    Salir.\nEscribe la opción:");
        scanf("%d",&opcion);
    }



    return 0;
}

