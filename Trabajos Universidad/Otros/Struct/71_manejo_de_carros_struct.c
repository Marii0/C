#include <stdio.h>
#include <string.h>
#include<locale.h>

struct carro
{
    char modelo[20];
    char anio[4];
    float precio;
    int estado; //1: activo, 0:inactivo
};

int contadorCarros = 0; //Variable global para contar autos

int main()
{
    setlocale(LC_ALL,"");
    struct carro misCarros[100];
    char anio2[4];
    int opcion, centinela = 0, n;
    printf("ADMINISTRACI�N DE AUTOS\n1.	Registrar auto.\n2.	Consultar auto.\n3.	Actualizar auto.\n4.	Recuperar auto.\n5. Eliminar auto\n6.	Salir.\n\nEscriba su opci�n:");
    scanf("%d", &opcion);

    //printf("Usted seleccion� la opcion: %d", opcion);
    while(opcion!=6)
    {
        switch(opcion)
        {
        case 1:
            printf("Registro de autos\n");
            fflush(stdin);
            printf("Escriba el modelo de su auto:");
            fgets(misCarros[contadorCarros].modelo, 20, stdin);
            fflush(stdin);
            printf("Escriba el a�o de su auto:");
            scanf("%s",&misCarros[contadorCarros].anio);
            fflush(stdin);
            printf("Escriba el precio:");
            scanf("%f",&misCarros[contadorCarros].precio);
            fflush(stdin);
            contadorCarros++;
            break;
        case 2:
            printf("Consulta de autos\n");
            printf("Escriba el a�o del auto a consultar:");
            scanf("%s", &anio2);
            n = 0;
            while(centinela != -1)
            {
                if(strcmp(misCarros[n].anio,anio2) == 0)
                {
                    puts("Datos del auto:");
                    printf("Modelo: %s\n",strtok(misCarros[n].modelo, "\n"));
                    printf("A�o: %s\n",misCarros[n].anio);
                    printf("Precio: %.2f\n",misCarros[n].precio);
                    centinela = -1;
                }
                if(n > contadorCarros)
                {
                    centinela = -1;
                    printf("No hay coincidencia.");
                }
                n = n + 1;
            }
            break;
        case 3:
            printf("Actualizar autos");

            break;
        case 4:
            printf("Eliminar auto");

            break;
        case 5:
            printf("Recuperar auto");

            break;
        default:
            printf("Opci�n no v�lida");
        }
        puts("");
        system("pause");
        system("cls");
        printf("ADMINISTRACI�N DE AUTOS\n1.	Registrar auto.\n2.	Consultar auto.\n3.	Actualizar auto.\n4.	Recuperar auto.\n5. Eliminar auto\n6.	Salir.\n\nEscriba su opci�n:");
        scanf("%d", &opcion);
    }

    return 0;
}
