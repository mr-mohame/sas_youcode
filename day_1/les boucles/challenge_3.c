#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Challenge 3 : Somme des N Nombres
int main()
{
    int n, somme=0;;
    printf("donner les n: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        somme=somme+i;
    }
    printf("la somme est : %d\n", somme);


    

    
    
    
    return 0;
}