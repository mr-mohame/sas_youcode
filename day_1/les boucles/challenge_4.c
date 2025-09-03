#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Challenge 4 : Affichage des N Premiers Nombres Impairs
int main()
{
    int n;
    printf("donner les n premiers nomber impair n \n");
    scanf("%d", &n);

    printf("les premier nomber impaire est :\n");
    int compteur=0;
    int i=1;

    while(compteur<n){
            printf("%d \n", i);
            i+=2;
            compteur++;
    }
    
    
    return 0;
}