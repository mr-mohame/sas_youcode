#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Challenge 7 : Moyenne pondérée de trois nombres



int main()
{
    int num1, num2, num3;
    int coefficient=0;
    float ponderee=0;
    int produits=0;
    printf("enter num 1: ");
    scanf("%d", &num1); 
    printf("enter num 2: ");
    scanf("%d", &num2); 
    printf("enter num 3: ");
    scanf("%d", &num3);
    produits=(num1*2)+(num2*3)+(num3*5);
    coefficient = 2 + 3 + 5;
    ponderee = produits / coefficient;
    printf("la somme des produits est: %d\n", produits);
    printf("la somme des coefficients est: %d\n", coefficient);
    printf("la somme des ponderee est: %.2f\n", ponderee);
    return 0;
}