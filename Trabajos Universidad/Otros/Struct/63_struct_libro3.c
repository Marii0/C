#include <stdio.h>
#include <locale.h>

struct
{
    char *titulo;
    int clave;
    char *autor;
    char *tema;
}un_libro;

int main()
{
    setlocale(LC_ALL,"");

    char cadena_temporal[60], cadena_temporal2[60], cadena_temporal3[60];

    printf("Escribe la clave del libro: ");
    scanf("%d", &un_libro.clave);
    printf("Escribe el título del libro: ");
    fflush(stdin);
    fgets(cadena_temporal, 60, stdin);
    un_libro.titulo = strtok(cadena_temporal, "\n");

    printf("Escribe el nombre el autor del libro: ");
    fgets(cadena_temporal2, 60, stdin);
    un_libro.autor = strtok(cadena_temporal2, "\n");

    printf("Escribe el tema del libro: ");
    fgets(cadena_temporal3, 100, stdin);
    un_libro.tema = strtok(cadena_temporal3, "\n");


    puts("DATOS INTRODUCIDOS");
    printf("%-6s%-10s%-20s%-20s\n", "Clave", "Título", "Autor", "Tema");
    printf("%-6d%-10s%-20s%-20s\n", un_libro.clave, un_libro.titulo, un_libro.autor, un_libro.tema);
    return 0;
}
