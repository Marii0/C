#include <stdio.h>
#include <locale.h>
/*1. Calcular la cantidad de latas que pueden ser colocados de una caja.
2. Determinar si un número es primo.
3. Calcular la altura de la caida un objeto.*/

int main()
{
    setlocale(LC_ALL,"");
    int opcion, volumen_ocupado, numero;
    float base, altura, radio, ancho, alturaC, volumen_lata, volumen_caja, tiempo, entero, caida;
    puts("EXAMEN PARCIAL I-MEN� DE OPCIONES");
    printf("1.    Calcular la cantidad de latas que puden ser colocados en una caja.\n2.    Determinar si un n�mero es primo.\n3.    Calcular la altura de la ca�da un objeto.\n4.    Salir.\nEscribe la opci�n:");
    scanf("%d",&opcion);


    while(opcion != 4)
    {
        switch(opcion)
        {
        case 1:
            printf("C�lculo para saber cuantas latas caben en una caja.\n");
            printf("Escriba la altura de la lata:");
            scanf("%f",&altura);
            printf("Escriba el radio de la lata:");
            scanf("%f",&radio);
            printf("Escriba la medida de la base de la caja:");
            scanf("%f",&base);
            printf("Escriba la medida del ancho de la caja:");
            scanf("%f",&ancho);
            printf("Escriba la medida de la altura de la caja:");
            scanf("%f",&alturaC);

            volumen_lata = (((radio*radio)*3.1416) * altura);
            volumen_caja = ((base*ancho)*alturaC);
            volumen_ocupado = (volumen_caja/volumen_lata);

            printf("\nla caja puede contener: %d latas\n",volumen_ocupado);
            break;
        case 2:
            printf("\nDeterminar si un numero es primo.\n");
            printf("Escriba un numero:");
            scanf("%d",&numero);



           if(numero % 2 == 0)

           {
            printf("\nEl n�mero es primo");
           }
           else
            {
            printf("\nEl n�mero no es primo");
           }
            break;
        case 3:
            printf("C�lculo para saber saber la altura de la ca�da de un objeto.\n");
            printf("Escriba el tiempo que transcurrio en la ca�da del objeto:");
            scanf("%f",&tiempo);

            caida = ((tiempo*tiempo) * 9.8) / 2.0;

            printf("\nLa altura de donde cay� el obejto es: %.2f metros\n",caida);
            break;
        }
        puts("");
        system("pause");
        system("cls");
       puts("EXAMEN PARCIAL I-MEN� DE OPCIONES");
    printf("1.    Calcular la cantidad de latas que puden ser colocados en una caja.\n2.    Determinar si un n�mero es primo.\n3.    Calcular la altura de la ca�da un objeto.\n4.    Salir.\nEscribe la opci�n:");
    scanf("%d",&opcion);
    }



    return 0;
}
