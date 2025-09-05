#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Challenge 8 : Calcul de la moyenne géométrique


int main()
{
    int num1, num2, num3;
    float Moyenne_geo=0;
    printf("enter num 1: ");
    scanf("%d", &num1); 
    printf("enter num 2: ");
    scanf("%d", &num2); 
    printf("enter num 3: ");
    scanf("%d", &num3);
    Moyenne_geo=(num1*num2*num3)^(1/3);
    
    printf("la moyenne géométrique de trois nombres est: %.2f\n", Moyenne_geo);
    
    return 0;
}