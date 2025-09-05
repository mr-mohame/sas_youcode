#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Challenge 4 : Equation du Deuxième Degré

int main()
{
    int a, b, c, D;
    float X1, X2;
    printf("enter a :\n");
    scanf{"%d", &a};
    printf("enter b :\n");
    scanf{"%d", &b};
    printf("enter c :\n");
    scanf{"%d", &c};
    D = b*b - 4*a*c;
    if(D>0){
        printf("L'équation a deux solutions réelles distinctes X1 et X2 \n");
        X1=(-b - sqrt(D)) / (2.0 * a);
        X2=(-b + sqrt(D)) / (2.0 * a);
        printf("%.2f %.2f" X1, X2\n)
    }else if(D==0){
        X1 = -b / (2.0 * a);
        printf("%.2f", X1\n);
    }else{
        printf("pas de solution.");

    }
    return 0;
}