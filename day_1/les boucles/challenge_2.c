#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n , fact=1;
    printf("donner n:\n");
    scanf("%d", &n);
    if(n<0){
        printf("difinie pas por les nomber negatif\n");
    }else if(n>0){
        for(int i=1; i<=n; i++){
        fact*=i;
        }
        printf("\n\nla factorielle de %d est %d ",n,fact);
    }else{
        fact = 1;
        printf("la factorielle de %d est %d", n,fact);
    }

    
    return 0;
}