#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Challenge 6 : Affichage des N Premiers Nombres Pair
int main()
{
    int n;
    printf("donner les n premiers nomber pair n \n");
    scanf("%d", &n);

    printf("les premier nomber paire est :\n");
    int compteur=0;
    int i=0;

    while(compteur<n){
            printf("%d \n", i);
            i+=2;
            compteur++;
    }
    
    return 0;
}