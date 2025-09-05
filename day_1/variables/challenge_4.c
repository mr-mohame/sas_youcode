#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Challenge 4 : Conversion de la vitesse

int main()
{
    int km, h;
    float x=0;
    printf("enter la vitesse en kilomètres km: ");
    scanf("%d", &km);
    printf("enter l'heurs H: ");
    scanf("%d", &h);

    x = km/h* 0.27778;
    printf("la vitesse en mètres par seconde (m/s) :%.2f m/s\n", x);
    return 0;
}