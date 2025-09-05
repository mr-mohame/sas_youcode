#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Challenge 11 : Surface d'un rectangle



int main()
{
    int longueur, largeur, Surface=0;
    

    printf("enter la longueur : ");
    scanf("%d", &longueur); 
    printf("enter la largeur : ");
    scanf("%d", &largeur);
    
   Surface=longueur*largeur;
    
    printf("la surface d'un rectangle est: %d\n", Surface);
    
    return 0;
}