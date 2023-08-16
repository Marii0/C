#include <stdio.h>
#include <string.h>
#include <locale.h>
#define MAX 5
struct estudiante
{
    char matricula[10];
    char nombrecompleto[100];
    float promedio;
    int materias;
};
void imprimirlista(struct estudiante estudiantes[]);

int main()
{
    setlocale(LC_ALL, "");
    struct estudiante estudiantes[MAX];

    for(int i = 0; i < MAX; i=i+1)
    {
        fflush(stdin);
        printf("Nombre completo: ");
        fgets(estudiantes[i].nombrecompleto, sizeof(estudiantes[i].nombrecompleto), stdin);
        fflush(stdin);
        printf("Matrícula: ");
        fgets(estudiantes[i].matricula, sizeof(estudiantes[i].matricula), stdin);
        fflush(stdin);
        printf("Total de materias: ");
        scanf("%d", &estudiantes[i].materias);
        printf("Promedio: ");
        scanf("%f", &estudiantes[i].promedio);
        fflush(stdin);
    }
    imprimirlista(estudiantes);

    return 0;
}
void imprimirlista(struct estudiante estudiantes[])
{
    puts("Lista de estudiantes");
    printf("%-30s%-10s%-9s%-10s\n", "Nombre completo", "Matrícula", "Materias", "Promedio");
    for(int i = 0; i < MAX; i=i+1)
    {
        printf("%-30s%-10s%-9d%-10.1f\n",strtok(estudiantes[i].nombrecompleto, "\n"), strtok(estudiantes[i].matricula, "\n"), estudiantes[i].materias, estudiantes[i].promedio);
    }
}
