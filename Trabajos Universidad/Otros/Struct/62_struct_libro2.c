#include <stdio.h>
#include <locale.h>

struct
{
    char *titulo;
    int clave;
}un_libro, *apuntador_libro;

int main()
{
    setlocale(LC_ALL,"");
   // struct libro un_libro;
    un_libro.clave = 1;
    un_libro.titulo = "La cabaña";

    //struct libro *apuntador_libro = &un_libro;
    apuntador_libro = &un_libro;

    printf("%-6s%-10s\n", "Clave", "Título");
    printf("%-6d%-10s\n%-6d%-10s\n%-6d%-10s\n", un_libro.clave, un_libro.titulo,
           apuntador_libro->clave, apuntador_libro->titulo,
           (*apuntador_libro).clave, (*apuntador_libro).titulo);
    return 0;
}
