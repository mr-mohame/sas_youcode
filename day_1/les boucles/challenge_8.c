#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, i, up, upp;
    do{
        printf("donner n \n");
         scanf("%d", &n);

    }while(n<2);
    upp = 0;
    up = 1;
    printf("la suite de fibonnacci sont : \n");
    printf("upp = %d \n", upp);
    printf("up = %d \n", up);
    for(i=2;i<n;i++){
       int u = upp + up;
       printf("u %d = %d\n", i,u);
       upp = up;
       up = u;

    }
    return 0;
}