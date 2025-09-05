#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Challenge 3 : Conversion de la distance

int main()
{
    float km, Yards=0;
    printf("enter la distance en km: ");
    scanf("%f", &km);
    Yards = km* 1093.61;
    printf("la transforme de la distance en km est:%.2f km\n", Yards);
    return 0;
}