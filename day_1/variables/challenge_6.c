#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Challenge 6 : Calcul et affichage des résultats


int main()
{
    int a, b;
    printf("enter a: ");
    scanf("%d", &a); 
    printf("enter b: ");
    scanf("%d", &b); 
    
    printf("la somme de a et b est :%d\n", a+b);
    printf("la soustraction de a et b est :%d\n", a-b);
    printf("la multiplication de a et b est :%d\n", a*b);
    if(b!=0){
        printf("la division de a et b est :%d\n", a/b);
    }else{
        printf("forma invalid\n");
    }


    return 0;
}