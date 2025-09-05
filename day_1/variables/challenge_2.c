#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Challenge 2 : Conversion de la température

int main()
{
    float Celsius, k=0;
    printf("enter le temperateur en celsius: ");
    scanf("%f", &Celsius);
    k = Celsius* 273.15;
    printf("la transforme de temperateur en Kelvin.%.2f F\n", k);
    return 0;
}