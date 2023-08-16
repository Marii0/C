#include <stdio.h>
#include <locale.h>
#include <string.h>
#define MAX 100
struct
{
    int clave;
    char titulo[60];
    char autor[60];
    char tema[60];
    int estado; //1:activo, 0:inactivo
} mis_libros[MAX];

int main()
{
    setlocale(LC_ALL,"");
    int opcion;
    char cadena_temporal[60];
    int clave_temp, i = 0, opcion_consulta, clave_libro_actualizar, centinela = 0, contador, dato_modificar, clave_libro_eliminar, opcion_eliminar, opcion_recuperar, clave_libro_recuperar;
    printf("ADMINISTRACIÓN DE LIBROS\n1. Registrar\n2. Consultar\n3. Actualizar\n4. Dar de baja un libro\n5. Recuperar\n6. Salir\nEscriba su opción:");
    scanf("%d", &opcion);
    while(opcion != 6)
    {
        switch(opcion)
        {
        case 1:
            printf("Escriba la clave del libro o -1 para terminar:", i+1);
            scanf("%d",&clave_temp);
            while(clave_temp != -1)
            {
                mis_libros[i].clave = clave_temp;
                fflush(stdin);

                printf("Escriba el título:");
                fgets(cadena_temporal, 60, stdin);
                cadena_temporal[strlen(cadena_temporal)-1] = '\0';
                strcpy(mis_libros[i].titulo, cadena_temporal);

                printf("Escriba el nombre del autor:");
                fgets(cadena_temporal, 60, stdin);
                cadena_temporal[strlen(cadena_temporal)-1] = '\0';
                strcpy(mis_libros[i].autor, cadena_temporal);

                printf("Escriba el tema:");
                fgets(cadena_temporal, 60, stdin);
                cadena_temporal[strlen(cadena_temporal)-1] = '\0';
                strcpy(mis_libros[i].tema, cadena_temporal);

                mis_libros[i].estado = 1;

                i++;

                printf("Escriba la clave del libro o -1 para terminar:", i+1);
                scanf("%d",&clave_temp);
            }
            break;
        case 2:
            system("cls");
            printf("¿Qué libros quiere mostrar?:\n1. Consultar libros activos.\n2. Consultar libros inactivos\n3. Regresar al menú principal.\nEscriba opción:");
            scanf("%d",&opcion_consulta);
            while(opcion_consulta != 3)
            {
                switch(opcion_consulta)
                {
                case 1:
                    puts("LIBROS ACTIVOS");
                    printf("%-6s%-10s%-20s%-20s\n", "Clave", "Título", "Autor", "Tema");
                    for(int i = 0; i < MAX; ++i)
                    {
                        if(mis_libros[i].clave != 0 && mis_libros[i].estado == 1)
                        {
                            printf("%-6d%-10s%-20s%-20s\n", mis_libros[i].clave, mis_libros[i].titulo, mis_libros[i].autor, mis_libros[i].tema);
                        }
                    }
                    break;
                case 2:
                    puts("LIBROS INACTIVOS");
                    printf("%-6s%-10s%-20s%-20s\n", "Clave", "Título", "Autor", "Tema");
                    for(int i = 0; i < MAX; ++i)
                    {
                        if(mis_libros[i].clave != 0 && mis_libros[i].estado == -2)
                        {
                            printf("%-6d%-10s%-20s%-20s\n", mis_libros[i].clave, mis_libros[i].titulo, mis_libros[i].autor, mis_libros[i].tema);
                        }

                    }
                    break;
                default:
                    puts("Opción no válida");
                    break;
                }
                system("pause");
                system("cls");
                printf("¿Qué libros quiere mostrar?:\n1. Concultar libros activos.\n2. Consultar libros inactivos\n3. Regresar al menú principal.\nEscriba opción:");
                scanf("%d",&opcion_consulta);
            }

            break;
        case 3:
            contador = 0;
            printf("ACTUALIZACIÓN DE LIBROS\n");
            printf("Escriba la clave del libro a modificar:");
            scanf("%d", &clave_libro_actualizar);
            while(centinela != 1)
            {
                if(mis_libros[contador].clave == clave_libro_actualizar)
                {
                    puts("Datos del libro a modificar:");
                    printf("\n%-6s%-10s%-20s%-20s\n", "Clave", "Título", "Autor", "Tema");
                    printf("%-6d%-10s%-20s%-20s\n", mis_libros[contador].clave, mis_libros[contador].titulo, mis_libros[contador].autor, mis_libros[contador].tema);
                    printf("Seleccione dato a modificar: \n1. Título\n2. Autor\n3. Tema \n4. Regresar al menú principal\nEscriba la opción: ");
                    scanf("%d", &dato_modificar);

                    while(dato_modificar != 4)
                    {
                        fflush(stdin);
                        switch(dato_modificar)
                        {
                        case 1:
                            printf("Escribe el título:");
                            fgets(cadena_temporal, 60, stdin);
                            cadena_temporal[strlen(cadena_temporal)-1] = '\0';
                            strcpy(mis_libros[contador].titulo, cadena_temporal);
                            break;
                        case 2:
                            printf("Escribe el autor:");
                            fgets(cadena_temporal, 60, stdin);
                            cadena_temporal[strlen(cadena_temporal)-1] = '\0';
                            strcpy(mis_libros[contador].autor, cadena_temporal);
                            break;
                        case 3:
                            printf("Escribe el tema:");
                            fgets(cadena_temporal, 60, stdin);
                            cadena_temporal[strlen(cadena_temporal)-1] = '\0';
                            strcpy(mis_libros[contador].tema, cadena_temporal);
                            break;
                        default:
                            puts("Opción inválida");
                            break;
                        }
                        system("pause");
                        system("cls");
                        printf("Seleccione dato a modificar: \n1. Título\n2. Autor\n3. Tema \n4. Regresar al menú principal\nEscriba la opción: ");
                        scanf("%d", &dato_modificar);
                    }

                    centinela = 1;
                }
                else
                {
                    contador++;
                }
            }
            break;
        case 4:
            printf("DAR DE BAJA UN LIBRO\n");
            contador = 0;
            centinela = 0;
            printf("Escriba la clave del libro:");
            scanf("%d", &clave_libro_eliminar);
            while(centinela != 1)
            {
                if(mis_libros[contador].clave == clave_libro_eliminar && mis_libros[contador].estado == 1)
                {
                    puts("Datos del libro a eliminar:");
                    printf("\n%-6s%-10s%-20s%-20s\n", "Clave", "Título", "Autor", "Tema");
                    printf("%-6d%-10s%-20s%-20s\n", mis_libros[contador].clave, mis_libros[contador].titulo, mis_libros[contador].autor, mis_libros[contador].tema);

                    printf("¿Confirma que desea eliminar el libro [1: SI, 2: NO]?:");
                    scanf("%d", &opcion_eliminar);

                    if(opcion_eliminar == 1)
                    {
                        mis_libros[contador].estado = -2;
                        printf("El libro con clave %d ha sido dado de baja exitosamente.\n", mis_libros[contador].clave);
                    }
                    else
                    {
                        puts("Operación cancelada.");
                    }
                    centinela = 1;
                }
                contador++;
            }
            break;
        case 5:
            printf("RECUPERAR UN LIBRO\n");
            contador = 0;
            centinela = 0;
            printf("Escriba la clave del libro:");
            scanf("%d", &clave_libro_recuperar);
            while(centinela != 1)
            {
                if(mis_libros[contador].clave == clave_libro_recuperar && mis_libros[contador].estado == -2)
                {
                    puts("Datos del libro a recuperar:");
                    printf("\n%-6s%-10s%-20s%-20s\n", "Clave", "Título", "Autor", "Tema");
                    printf("%-6d%-10s%-20s%-20s\n", mis_libros[contador].clave, mis_libros[contador].titulo, mis_libros[contador].autor, mis_libros[contador].tema);

                    printf("¿Confirma que desea recuperar el libro [1: SI, 2: NO]?:");
                    scanf("%d", &opcion_recuperar);

                    if(opcion_recuperar == 1)
                    {
                        mis_libros[contador].estado = 1;
                        printf("El libro con clave %d ha sido dado recuperado exitosamente.\n", mis_libros[contador].clave);
                    }
                    else
                    {
                        puts("Operación cancelada.");
                    }
                    centinela = 1;
                }
                contador++;
            }
            break;
            break;
        default:
            printf("Escogió opción inválida");
            break;
        }
        system("pause");
        system("cls");
        printf("ADMINISTRACIÓN DE LIBROS\n1. Registrar\n2. Consultar\n3. Actualizar\n4. Dar de baja un libro\n5. Recuperar\n6. Salir\nEscriba su opción:");
        scanf("%d", &opcion);
    }

    return 0;
}
