#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    printf("saisier n \n");
    scanf("%d", &n);
    int somme=0;
    
    for(int i=0; i<=n; i++){
        somme+=i;
    }
    printf("la somme est : %d\n", somme);
    return 0;
}