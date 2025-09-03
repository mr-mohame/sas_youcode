//Challenge 7 : Inversion d'un Entier
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n, res=0, x;
    printf("saisier n \n");
    scanf("%d", &n);
    int compteur=0;
    while(n!=0){
        x = n%10;   // xle dernier num
        res = res * 10 + x;
        n = n/10;
        
    }
    printf("inversion de n est : %d\n", res);
    

    
    
    return 0;
}