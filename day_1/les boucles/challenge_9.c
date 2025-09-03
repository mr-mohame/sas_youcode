//Challenge 9 : Compteur de Chiffres
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    printf("saisier n \n");
    scanf("%d", &n);
    int compteur=0;
    while(n>0){
        n = n/10;
        compteur++;
        
    }
    printf("number des chiffer est : %d\n", compteur);
    

    
    
    return 0;
}