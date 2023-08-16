#include <stdio.h>
#include <math.h>
#include <locale.h>
float hipotenusa(float cateto_opuesto, float cateto_adyacente);

int main()
{
    setlocale (LC_ALL,"");
    float numa, numb;
    printf("Escribe el cateto opuesto:\n");
    scanf("%f", &numa);
    printf("Escribe el cateto adyacente:\n");
    scanf("%f", &numb);

    printf("La hipotenusa es: %.2f\n", hipotenusa(numa,numb));
    return 0;
}
float hipotenusa(float cateto_opuesto, float cateto_adyacente)
{
    return pow(pow(cateto_opuesto,2) + pow(cateto_adyacente, 2), .5);
}
