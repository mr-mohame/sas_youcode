#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    printf("donner n \n");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("%d", 2*i);
        if(i< n-1 ){
            printf(",");
        }
    }
    
    return 0;
}