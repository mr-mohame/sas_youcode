#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Challenge 9 : Calcul de la distance entre deux points dans un espace 3D


int main()
{
    int x1, x2, y1, y2, z1, z2;
    float Distance=0;
    printf("enter x 1: ");
    scanf("%d", &x1); 
    printf("enter x 2: ");
    scanf("%d", &x2); 
    printf("enter y 1: ");
    scanf("%d", &y1); 
    printf("enter y 2: ");
    scanf("%d", &y2); 
    printf("enter z 1: ");
    scanf("%d", &z1); 
    printf("enter z 2: ");
    scanf("%d", &z2); 
    
    Distance=sqrt((x2-x1)^2+(y2-y1)^2+(z2-z1)^2);
    
    printf("la distance entre deux points dans un espace 3D est: %.2f\n", Distance);
    
    return 0;
}