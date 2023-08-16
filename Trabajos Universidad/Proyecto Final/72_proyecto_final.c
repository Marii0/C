#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

struct gorditas_burritos // maiz, o de harina, guisados: 1., precio, llevar , no. de orden, bebidas: cocacola. soda de sabor, jugo de naranja
{
    char tipo[30];//burrito o gordita
    char tipotortilla[30];
    char guisos[30];
    int salsa;
    char bebidas[30];
    double precio;
    int llevar;
    int orden;
    char nombre[30];
    int estado; //0-eliminado, 1-aun registrado

};

int opcion;
void imprimirMenu()
{
    printf("%s","Seleccione una opción\n"
           "1 - Agregar orden.\n"
           "2 - Eliminar orden.\n"
           "3 - Actualizar orden.\n"
           "4 - Consultar orden.\n"
           "5 - Salir.\n");
    scanf("%d", &opcion);
}
int main()
{
    setlocale(LC_ALL,"");
    FILE *cfPtr;
    int i,c,resultado;
    int ordenELIMINAR, orden,orden2, d;
    int centinela, centinela1, centinela2;
    char nombreArchivo[30];
    char nombreArchivoLeer[30];

    struct gorditas_burritos puesto = {"","","",0,0,"",0.0,0,0,"",-1};

    printf("Escriba nombre del registro: ");
    scanf("%s",nombreArchivo);
    strcat(nombreArchivo, ".dat");
    if((cfPtr = fopen( nombreArchivo, "wb"))==NULL)
    {
        puts( "No es posible abrir el archivo." );
    }
    else
    {
        for ( i = 1; i <= 100; ++i )
        {
            fwrite( &puesto, sizeof( struct gorditas_burritos ), 1, cfPtr );
        }
    }
    fclose ( cfPtr );
    printf("\nArchivo creado con éxito.\n\n");

    system("pause");
    system("cls");

    imprimirMenu();

    while(opcion != 5)
    {
        switch(opcion)
        {

        case 1:
            if((cfPtr = fopen( nombreArchivo, "rb+"))==NULL)
            {
                puts( "No es posible abrir el archivo." );
                system("pause");
                system("cls");
            }
            else
            {
                printf( "%s", "Escriba el numero de orden ( 1 a 100, 0 para salir. ):\n  " );
                scanf( "%d", &puesto.orden);

                while ( puesto.orden != 0 )
                {

                    printf( "%s", "Escriba si quiere una gordita o un burrito:\n-> gordita\n-> burrito\n " );
                    fscanf( stdin, "%30s", puesto.tipo);
                    printf( "%s", "Escriba el tipo de tortilla:\n-> maíz\n-> harina\n " );
                    fscanf( stdin, "%30s", puesto.tipotortilla);
                    printf( "%s", "Escriba el guiso:\n-> chicharron\n-> frijoles/queso\n->desebrada\n " );
                    fscanf( stdin, "%30s", puesto.guisos);
                    printf( "%s", "Escriba la bebida:\n-> sprite\n-> fanta\n " );
                    fscanf( stdin, "%30s", puesto.bebidas);
                    printf( "%s", "¿Con salsa?:\n1 - Si\n2 - No\n " );
                    fscanf( stdin, "%d", &puesto.salsa);
                    printf( "%s", "Precio: \n" );
                    fscanf( stdin, "%lf", &puesto.precio);
                    printf( "%s", "Para llevar:\n 1 - Si\n2 - No\n " );
                    fscanf( stdin, "%d", &puesto.llevar);
                    printf( "%s", "Nombre del cliente: \n" );
                    fscanf( stdin, "%30s", puesto.nombre);
                    puesto.estado = 1;
                    fseek( cfPtr, ( puesto.orden - 1 ) * sizeof( struct gorditas_burritos ), SEEK_SET );
                    fwrite( &puesto, sizeof( struct gorditas_burritos ), 1, cfPtr );
                    printf( "%s", "Escriba el número de orden:\n " );
                    scanf( "%d", &puesto.orden );
                    system("pause");
                    system("cls");
                }

            }
            fclose ( cfPtr );
            break;

        case 2:
            printf("Escribe el nombre del archivo: ");
            scanf("%s",nombreArchivoLeer);
            strcat(nombreArchivoLeer, ".dat");

            if((cfPtr = fopen( nombreArchivoLeer, "rb+"))==NULL)
            {
                puts( "No es posible abrir el archivo." );
                system("pause");
                system("cls");
            }

            else
            {
                centinela=0;
                printf( "%s", "Escriba el número de orden a eliminar: \n" );
                scanf( "%d", &ordenELIMINAR);

                while (centinela != 1 )
                {
                    resultado =  (int) fread( &puesto, sizeof( struct gorditas_burritos ), 1, cfPtr );
                    if(puesto.orden == ordenELIMINAR && puesto.estado == 1)
                    {
                        printf("Tipo: %s\nTortilla: %s\nGuiso: %s\nBebida: %s\nSalsa: %d\nPrecio: %lf\nLlevar: %d\nOrden: %d\nNombre: %s\nEstado: %d\n",
                               puesto.tipo, puesto.tipotortilla, puesto.guisos, puesto.bebidas, puesto.salsa,
                               puesto.precio, puesto.llevar, puesto.orden, puesto.nombre, puesto.estado);
                        printf("¿Desea eliminar PARA SIEMPRE esta orden? 1-Si, 0- No\n\n");
                        scanf("%d", &c);
                        if(c==1)
                        {
                            puesto.estado =0;
                            fseek( cfPtr, ( puesto.orden - 1 ) * sizeof( struct gorditas_burritos ), SEEK_SET );
                            fwrite( &puesto, sizeof( struct gorditas_burritos ), 1, cfPtr );
                            puts("REGISTRO ELIMINADO");
                            centinela = 1;
                            system("pause");
                            system("cls");
                        }

                        if(c==0)
                        {
                            centinela = 1;
                            system("pause");
                            system("cls");
                        }

                    }

                    else
                    {
                        puts("ESTA ORDEN NO EXISTE O YA FUE ELIMINADA ANTERIORMENTE");
                        centinela = 1;
                        system("pause");
                        system("cls");
                    }

                }
            }
            fclose ( cfPtr );
            break;

        case 3:
            printf("Escribe el nombre del archivo: ");
            scanf("%s",nombreArchivoLeer);
            strcat(nombreArchivoLeer, ".dat");
            if((cfPtr = fopen( nombreArchivoLeer, "rb+"))==NULL)
            {
                puts( "No es posible abrir el archivo." );
                system("pause");
                system("cls");
            }
            else
            {
                centinela1=0;
                printf( "%s", "Escriba el número de orden a actualizar: \n" );
                scanf( "%d", &orden);


                while (centinela1 != 1 )
                {

                    resultado =  (int) fread( &puesto, sizeof( struct gorditas_burritos), 1, cfPtr );
                    if(puesto.orden == orden)
                    {
                        printf("¿Desea actualizar esta orden? 1-Si, 0-No\n\n");
                        scanf("%d", &d);
                        if(d==1)
                        {
                            printf( "%s", "Escriba si quiere una gordita o un burrito:\n-> gordita\n-> burrito\n " );
                            fscanf( stdin, "%30s", puesto.tipo);
                            printf( "%s", "Escriba el tipo de tortilla:\n-> maíz\n-> harina\n " );
                            fscanf( stdin, "%30s", puesto.tipotortilla);
                            printf( "%s", "Escriba el guiso:\n-> chicharron\n-> frijoles/queso\n->desebrada " );
                            fscanf( stdin, "%30s", puesto.guisos);
                            printf( "%s", "Escriba la bebida:\n-> sprite\n-> fanta " );
                            fscanf( stdin, "%30s", puesto.bebidas);
                            printf( "%s", "¿Con salsa?:\n1 - Si\n2 - No\n " );
                            fscanf( stdin, "%d", &puesto.salsa);
                            printf( "%s", "Precio: \n" );
                            fscanf( stdin, "%lf", &puesto.precio);
                            printf( "%s", "Para llevar:\n 1 - Si\n2 - No\n " );
                            fscanf( stdin, "%d", &puesto.llevar);
                            printf( "%s", "Nombre del cliente: \n" );
                            fscanf( stdin, "%30s", puesto.nombre);

                            fseek( cfPtr, ( puesto.orden - 1 ) * sizeof( struct gorditas_burritos ), SEEK_SET );
                            fwrite( &puesto, sizeof( struct gorditas_burritos ), 1, cfPtr );
                            centinela1 =1;
                            system("pause");
                            system("cls");
                        }

                        else
                        {
                            centinela1 =1;
                        }

                    }

                    if(puesto.estado==0)
                    {
                        puts("ESTA ORDEN NO EXISTE O YA FUE ELIMINADA ANTERIORMENTE");
                        centinela=1;
                        system("pause");
                        system("cls");
                    }

                }

            }

            fclose ( cfPtr );

            break;

        case 4:
            printf("Escribe el nombre del archivo: ");
            scanf("%s",nombreArchivoLeer);
            strcat(nombreArchivoLeer, ".dat");
            if((cfPtr = fopen( nombreArchivoLeer, "rb"))==NULL)
            {
                puts( "No es posible abrir el archivo." );
                system("pause");
                system("cls");
            }
            else
            {
                centinela2=0;
                printf( "%s", "Escriba el número de orden a consultar: \n" );
                scanf( "%d", &orden2);


                while (centinela2 != 1 )
                {
                    resultado = (int)fread( &puesto, sizeof( struct gorditas_burritos ), 1, cfPtr );
                    if ( resultado != 0 && puesto.orden != 0 )
                    {
                        printf("Tipo: %s\nTortilla: %s\nGuiso: %s\nBebida: %s\nSalsa: %d\nPrecio: %lf\nLlevar: %d\nOrden: %d\nNombre: %s\nEstado: %d\n",
                               puesto.tipo, puesto.tipotortilla, puesto.guisos, puesto.bebidas, puesto.salsa,
                               puesto.precio, puesto.llevar, puesto.orden, puesto.nombre, puesto.estado);
                        centinela2 =1;
                        system("pause");
                        system("cls");
                    }
                    else
                    {
                        puts("ESTA ORDEN NO EXISTE O YA FUE ELIMINADA ANTERIORMENTE");
                        centinela2 =1;
                        system("pause");
                        system("cls");
                    }
                }

            }
            fclose ( cfPtr );
            break;

        default:
            puts("PONGA UN NÚMERO DE LAS OPCIONES\n");
            break;

        }//Fin del switch
        imprimirMenu();
    }//Fin del while
    return 0;
}


