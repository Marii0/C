#include <stdio.h>
#include <string.h> //libreria para manipular cadenas
#include <locale.h> // libreria para poner acentos
#define MAX 2 //este es un valor definido
struct estudiante // Es la funcion estructura para almacenar diferentes arreglos, diferentes variables o ambos
{
    char matricula[10];  // aqui van los arreglos o variables
    char nombrecompleto[100];
    char programa[20];
    float promedio;
    int semestre;
    int dia;
    int mes;
    int anio;
};
void imprimirlista(struct estudiante estudiantes[]); // Esta es una funcion

int main()
{
    setlocale(LC_ALL, "");
    struct estudiante estudiantes[MAX]; //se invoca a la funcion estructura diciendole con el valor MAX que el numero de estudiantes es 2

    for(int i = 0; i < MAX; i=i+1) // es un ciclo que sirve para desplegar las funciones para introducir los datos
    {
        fflush(stdin); //sirve para limpiar la ruta del almacenamiento de la cadena
        printf("Matrícula: "); //funcion que sirve para imprimir las instrucciones que debe realizar el usuario
        fgets(estudiantes[i].matricula, sizeof(estudiantes[i].matricula), stdin); //funcion para almacenar cadenas siendo variables
        fflush(stdin);
        printf("Nombre completo: ");
        fgets(estudiantes[i].nombrecompleto, sizeof(estudiantes[i].nombrecompleto), stdin);
        fflush(stdin);
        printf("Programa Educativo: ");
        fgets(estudiantes[i].programa, sizeof(estudiantes[i].programa), stdin);
        fflush(stdin);
        printf("Promedio: ");
        scanf("%f", &estudiantes[i].promedio);
        printf("Semestre: ");
        scanf("%d", &estudiantes[i].semestre);
        fflush(stdin);
         printf("Fecha de Ingreso.\nDía: ");
        scanf("%d", &estudiantes[i].dia);
        fflush(stdin);
         printf("Mes: ");
        scanf("%d", &estudiantes[i].mes);
        fflush(stdin);
         printf("Año: ");
        scanf("%d", &estudiantes[i].anio);
        fflush(stdin);
    }
    imprimirlista(estudiantes); //invoca la funcion imprimirlista y el dato que neceita es la estructura estudiantes

    return 0;
}
void imprimirlista(struct estudiante estudiantes[]) //funcion donde apararece las instrucciones
{
    puts("Lista de estudiantes"); //funcion que sirve para imprimir una cadena
    printf("%-10s%-30s%-20s%-10s%-9s%-18s\n", "Promedio", "Nombre completo", "Programa Educativo", "Promedio", "Semestre", "Fecha de Ingreso"); //funcion que sirve para imprimir una cadena pero con un espacio asignado
    for(int i = 0; i < MAX; i=i+1) // es un ciclo que sirve para desplegar los datos relacionado con el numero de estudiantes
    {
        printf("%-10s%-30s%-20s%-10.1f%-9d%-3d%-3d%-4d\n", strtok(estudiantes[i].matricula, "\n"),strtok(estudiantes[i].nombrecompleto, "\n"), strtok(estudiantes[i].programa, "\n"), estudiantes[i].promedio, estudiantes[i].semestre, estudiantes[i].dia, estudiantes[i].mes, estudiantes[i].anio); //imprime los datos guardado en la estructura
    }
}
