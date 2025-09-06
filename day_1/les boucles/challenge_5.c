#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Challenge 5 : Calcul de la Puissance
int main()
{
    int base, exposant, p=1;;
    printf("donner le base: ");
    scanf("%d", &base);
    printf("donner le exposant: ");
    scanf("%d", &exposant);
    
    for(int i=1; i<=exposant; i++){
        p=p*base;
    }
     printf("la somme est : %d\n", p);   
        
    
    
    


    

    
    
    
    return 0;
}